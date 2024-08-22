/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:55:07 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 17:31:06 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

Dog::Dog(void) : Animal()
{
    this->serebrito = new Brain();
    std::cout << this->getType() << "> Dog object has been created." << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    this->serebrito = new Brain();
    std::cout << this->getType() << " Dog object has been created." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    this->serebrito = new Brain();
    std::cout << this->getType() << " Dog object has been created." << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->getType() << "Dog object has been destructed." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << AQUAMARINE << this->getType() << " <barks>:" RESET_COLOR" Woof woof..."<< std::endl;
}