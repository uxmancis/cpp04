/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:21:07 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 17:05:52 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

Brain::Brain(void)
{
    std::cout << AQUAMARINE "Brain" RESET_COLOR " object has been " GREEN "created." RESET_COLOR << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Brain object has been " GREEN "created." RESET_COLOR << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain object has been " RED "destructed." RESET_COLOR << std::endl;
}

/*Copy assignment operator*/
Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return(*this);
}