/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:28:25 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/12 11:28:28 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array {

public:

	Array(): n_(0), arr_(0) {}

	Array(unsigned int n): n_(n) {
		arr_ = new T [n_];
	}

	Array(Array const &src) {*this = src;}

	Array& operator=(Array const &rhs) {
		if (this != &rhs)
		{
			n_ = rhs.n_;
			arr_ = new T [n_];
			for (unsigned int i = 0; i < n_; ++i)
				arr_[i] = rhs.arr_[i];
		}
		return *this;
	}

	T& operator[](unsigned int n) {
		if (n > n_ - 1)
			throw OutOfBoundsException();
		return arr_[n];

	}

	~Array() {delete [] arr_;}

	unsigned int size() const{return n_;}

	class OutOfBoundsException : public std::exception {
	public:
		const char* what() const throw()
		{
			return "Element you`re trying to access is out of "
		  			"bounds of an array";
		}
	};

private:

	unsigned int	n_;
	T				*arr_;
};
