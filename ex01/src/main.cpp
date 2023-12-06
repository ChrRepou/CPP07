/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:49:30 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 12:59:31 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int array[] = { 0, 1, 2, 3, 4 };
	std::string array2[] = { "Hello", "World", "!" };

	iter(array, 5, print);
	std::cout << std::endl;
	iter(array2, 5, print);
	std::cout << std::endl;

	return 0;
}