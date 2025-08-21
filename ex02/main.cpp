/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 22:15:52 by spitul            #+#    #+#             */
/*   Updated: 2025/08/21 06:35:43 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void)
{
	size_t	n;

	std::cout << "-------- Int Array --------" << std::endl;
	n = 7;
	Array<int> arr(n);
	for (size_t i = 0; i < n; i++)
		arr[i] = i + 1;
	std::cout << arr;
	
	std::cout << "-------- String Array --------" << std::endl;
	n = 3;
	Array<std::string> s(n);
	s[0] = "test";
	s[1] = "cat";
	s[2] = "dog";	
	std::cout << s;

	std::cout << "-------- Copy Assignment --------" << std::endl;
	Array<int> arr2(3);
	std::cout << "Created array before assignment\n" << arr2;
	arr2 = arr;
	std::cout << "Created array afer assignment\n" << arr2;
	
	return 0;
}
