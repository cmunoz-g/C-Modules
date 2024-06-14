/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camunozg <camunozg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:15:05 by camunozg          #+#    #+#             */
/*   Updated: 2024/06/14 08:57:01 by camunozg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog( void );
	Dog( const Dog &toCopy );
	Dog &operator=( const Dog &other );
	~Dog( void );
	void makeSound( void ) const;

private:
	Brain *_brain;

};