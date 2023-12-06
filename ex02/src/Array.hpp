/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:25:19 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 13:58:31 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	unsigned int	_n;
	T				*_array;

public:
	Array(void) : _n(0), _array(nullptr) {}

	Array(unsigned int n) : _n(n) {
		_array = new T[n]();
	}

	Array(Array const &obj) : _n(0), _array(nullptr) {
		*this = obj;
	}

	~Array(void) {
		delete[] _array;
	}

	Array &operator=(Array const &obj) {
		if (this != &obj)
		{
			delete[] _array; // Deallocate existing memory
			_n = obj._n;
			_array = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_array[i] = obj._array[i];
		}
		return (*this);
	}

	// return size of array
	unsigned int size(void) const {
		return (_n);
	}

	// element access
	T &operator[](unsigned int i) {
		if (i >= _n)
			throw std::out_of_range("Index out of bounds");
		return (_array[i]);
	}
};

#endif
