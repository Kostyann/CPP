/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmerkulo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:40:22 by kmerkulo          #+#    #+#             */
/*   Updated: 2019/04/11 16:40:24 by kmerkulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T const *array, size_t size, void (*fun)(const T&))
{
	for(size_t i = 0; i < size; ++i)
		(*fun)(array[i]);
}


class Awesome {

public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

private:
	int _n;};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print);
	iter( tab2, 5, print);

	return 0;
}
