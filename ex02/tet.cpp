/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 21:14:54 by spitul            #+#    #+#             */
/*   Updated: 2025/08/19 08:18:01 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string *a = new std::string("whwhw");
	std::cout << *a << std::endl;
	int	*b = new int;
	std::cout << *b << std::endl;
	int	*c = new int;
	std::cout << *c << std::endl;
	double	*d = new double[4];
	std::cout << d[0] << d[1] << d[2] << d[3] << std::endl;
	return 0;
}
