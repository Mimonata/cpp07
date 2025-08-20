/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:11:46 by spitul            #+#    #+#             */
/*   Updated: 2025/08/20 21:36:59 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <ostream>
#include <exception>

template<typename T>

class Array
{
	private:
		T		*arr;
		size_t	_size;

	public:
		Array();
		Array(size_t n);
		Array<T>& operator=(const Array<T> &src);
		Array(const Array<T> &src);
		~Array();

		T& operator[](size_t index);
		const T& operator[](size_t index) const;
		size_t	size() const;

		class ExceptionOutOfRange	: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

template<typename T>
std::ostream& operator<<(std::ostream &os, const Array<T> &arr); 

#include "Array.tpp"

#endif
