/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:56:15 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:23:03 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << this->getType() << " Cat object has been created." << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << this->getType() << " Cat object has been created." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << this->getType() << " Cat object has been created." << std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->getType() << " Cat object has been destructed." << std::endl;
}

/*Copy assignment operator*/
Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << AQUAMARINE << this->getType() << " <meows>" RESET_COLOR ": Meeoow..." << std::endl;
}