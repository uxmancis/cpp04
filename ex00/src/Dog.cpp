/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:55:07 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:25:35 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << this->getType() << " Dog object has been created." << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << this->getType() << " Dog object has been created." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << this->getType() << " Dog object has been created." << std::endl;
}

/*Copy assignment operator*/
Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return(*this);
}

Dog::~Dog(void)
{
    std::cout << this->getType() << " Dog object has been destructed." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << AQUAMARINE << this->getType() << " <barks>:" RESET_COLOR" Woof woof..."<< std::endl;
}