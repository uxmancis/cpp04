/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:30:28 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:26:02 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << this->getType() << " WrongCat object has been " GREEN "created." RESET_COLOR << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << this->getType() << " WrongCat object has been " GREEN "created." RESET_COLOR << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << this->getType() << " WrongCat object has been " GREEN "created." RESET_COLOR << std::endl;
}

/*Copy assignment operator*/
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return(*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << this->getType() << " WrongCat object has been " RED "destructed." RESET_COLOR << std::endl;
}