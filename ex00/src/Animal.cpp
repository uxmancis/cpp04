/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:50:28 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:22:05 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

Animal::Animal(void)
{
    std::cout << this->getType() << " Animal object has been " GREEN "created." RESET_COLOR << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << this->getType() << " Animal object has been " GREEN "created." RESET_COLOR << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << this->getType() << " Animal object has been " GREEN "created." RESET_COLOR << std::endl;
}

Animal::~Animal(void)
{
    std::cout << this->getType() << " Animal object has been " RED "destructed." RESET_COLOR << std::endl;
}

/*Copy assignment operator*/
Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return(*this);
}

void Animal::makeSound(void) const
{
    std::cout << AQUAMARINE << this->getType() << RESET_COLOR ": random sound..."<< std::endl;
}