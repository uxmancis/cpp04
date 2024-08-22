/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:56:15 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 17:31:02 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

Cat::Cat(void) : Animal()
{
    this->serebrito = new Brain();
    std::cout << this->getType() << "> Cat object has been created." << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->serebrito = new Brain();
    std::cout << this->getType() << " Cat object has been created." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->serebrito = new Brain();
    std::cout << this->getType() << " Cat object has been created." << std::endl;
}

Cat::~Cat(void)
{
    delete this->serebrito;
    std::cout << this->getType() << "Cat object has been destructed." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << AQUAMARINE << this->getType() << " <meows>" RESET_COLOR ": Meeoow..." << std::endl;
}