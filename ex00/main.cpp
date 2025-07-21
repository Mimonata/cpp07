/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:23:51 by spitul            #+#    #+#             */
/*   Updated: 2025/07/21 07:13:13 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>

int	main(void)
{
	int	a = 4;
	int	b = 8;

	swap(a, b);
	std::cout << "Value of a after swap = " << a;
	std::cout << "\nValue of b after swap = " << b;
	std::cout << "\nMinimum (a, b) = " << min(a, b);
	std::cout << "\nMaximum (a, b) = " << max(a, b) << std::endl;
	
	return 0;
}
