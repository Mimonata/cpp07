/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:23:51 by spitul            #+#    #+#             */
/*   Updated: 2025/07/21 21:03:59 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	int	a = 4;
	int	b = 8;
	std::string c = "test";
	std::string d = "sky";

	swap(a, b);
	std::cout << "Value of a after swap = " << a;
	std::cout << "\nValue of b after swap = " << b;
	std::cout << "\nMinimum (a, b) = " << min(a, b);
	std::cout << "\nMaximum (a, b) = " << max(a, b) << std::endl;
	
	swap(c, d);
	std::cout << "Value of c after swap = " << c;
	std::cout << "\nValue of d after swap = " << d;
	std::cout << "\nMinimum (c, d) = " << ::min(c, d);
	std::cout << "\nMaximum (c,db) = " << ::max(c, d) << std::endl;
	
	return 0;
}
