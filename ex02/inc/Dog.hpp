/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:51:41 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 17:30:56 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "main.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *serebrito;
    
    public:
        Dog(void);
        Dog(std::string type);
        Dog(const Dog &copy);
        ~Dog(void);
        /*  Virtual function implementation in derived class, so that it's not abstract*/
        void makeSound()const;
};

#endif