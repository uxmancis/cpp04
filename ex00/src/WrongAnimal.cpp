/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:28:55 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:25:46 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << this->getType() << " WrongAnimal object has been " GREEN "created." RESET_COLOR << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << this->getType() << " WrongAnimal object has been " GREEN "created." RESET_COLOR << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << this->getType() << " WrongAnimal object has been " GREEN "created." RESET_COLOR << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << this->getType() << " WrongAnimal object has been " RED "destructed." RESET_COLOR << std::endl;
}

/*Copy assignment operator*/
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return(*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << AQUAMARINE << this->getType() << " <yujus>" RESET_COLOR ": yujuuuu im a wrongCat..." << std::endl;
}