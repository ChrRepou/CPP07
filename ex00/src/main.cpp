/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:59:31 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 12:12:47 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templates.hpp"
#include "Complex.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	Complex a_comp(3.0, 4.0);
    Complex b_comp(1.5, 2.5);
	::swap( a_comp, b_comp );
	std::cout << "a = " << a_comp << ", b = " << b_comp << std::endl;
	std::cout << "min( a, b ) = " << ::min( a_comp, b_comp ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a_comp, b_comp ) << std::endl;
	return 0;
}