/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:14:23 by spitul            #+#    #+#             */
/*   Updated: 2025/07/30 10:07:59 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

template<typename T>
void	add3(T &a)
{
	a += 3;
}

template<typename T>
void	print(T arr)
{
	std::cout << arr << '\n';
}

int	main(void)
{
	size_t	arr[5] = {1,2,3,4,5};
	float	fl_array[] = {0.5, 2.3, 3.14};

	iter(arr, 5, add3<T>);
	iter(arr, 5, print<T>);
	iter(fl_array, 3, add3<T>);
	print(fl_array, 3, print<T>);
	return 0;
}
