/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:53:43 by spitul            #+#    #+#             */
/*   Updated: 2025/08/20 21:47:54 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstddef>
#include <exception>

template<typename T>
Array<T>::Array()	: arr(NULL), _size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(size_t n)	: arr(new T[n]), _size(n)
{
	std::cout << "Parameter constructor called" << std::endl;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		if (this->arr != NULL)
			delete[] arr;
		this->_size = src._size;
		arr = _size ? new T[src._size] : NULL;
		for (size_t i = 0; i < src._size; i++)
			this->arr[i] = src.arr[i];
	}
	return *this;	
}

template<typename T>
Array<T>::Array(const Array<T> &src)
{
	this->_size = src._size;
	arr = new T[_size];
	for (size_t i = 0; i < _size; i++)
		arr[i] = src.arr[i];
}

template<typename T>
Array<T>::~Array()
{
	if (this->arr != NULL)
		delete[] arr;
	std::cout << "Deconstructor called" << std::endl;
}

template<typename T>
T& Array<T>::operator[](size_t index)
{
	if (index >= _size)
		throw ExceptionOutOfRange();
	return this->arr[index];
}

template<typename T>
const T& Array<T>::operator[](size_t index) const
{
	if (index >= _size)
		throw ExceptionOutOfRange();
	return this->arr[index];
}

template<typename T>
size_t Array<T>::size() const
{
	return _size;
}

template<typename T>
const char* Array<T>::ExceptionOutOfRange::what() const throw()
{
	return "Index out of range";
}

template<typename T>
std::ostream& operator<<(std::ostream &os, const Array<T> &src)
{
	for (size_t i = 0; i < src.size(); i++)
	{
		os << "[" << i << "] = ";
		if (src[i])
			os << src[i] << std::endl;
		else
			os << "NULL" << std::endl;
	}
	return os;
}
