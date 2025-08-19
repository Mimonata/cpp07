/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:53:43 by spitul            #+#    #+#             */
/*   Updated: 2025/08/19 21:40:32 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array()	: arr(NULL), size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(size_t n)	: arr(new T[n]), size(n)
{
	std::cout << "Parameter constructor called" << std::endl;
}

template<typename T>
Array<T>& Array::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		if (this->arr != NULL)
			delete[] arr;
		this->size = src.size;
		arr = size ? new T[src.size] : NULL;
		for (size_t i = 0; i < src.size; i++)
			this->arr[i] = src.arr[i];
	}
	return *this;	
}

template<typename T>
Array<T>::Array(const Array<T> &src)
{
	this->size = src.size;
	arr = new T[size];
	for (size_t i = 0; i < size; i++)
		arr[i] = src.arr[i];
}

template<typename T>
Array<T>::~Array()
{
	if (this->arr != NULL)
		delete[] arr;
}

template<typename T>
T& Array<T>::operator[](size_t index)
{
	if (index >= size)
		throw ExceptionOutOfRange();
	return this->arr[index];
}

template<typename T>
const T& Array<T>::operator[](size_t index) const
{
	if (index >= size)
		throw ExceptionOutOfRange();
	return this->arr[index];
}

template<typename T>
Array<T>::size_t	size() const
{
	return size;
}

template<typename T>
const char* Array<T>::ExceptionOutOfRange::what() const throw()
{
	return "Index out of range";
}
