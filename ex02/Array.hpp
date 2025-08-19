/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:11:46 by spitul            #+#    #+#             */
/*   Updated: 2025/08/19 21:39:21 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>

class Array
{
	private:
		T		*arr;
		size_t	size;

	public:
		Array();
		Array(size_t n);
		Array<T>& operator=(const Array<T> &src);
		Array(const Array<T> &src);
		~Array();

		T& operator[](size_t index);
		const T& operator[](size_t index) const;
		size_t	size() const;

		class ExceptionOutOfRange()	: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
	
	
};

#include "Array.tpp"

#endif
