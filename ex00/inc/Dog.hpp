/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:51:41 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:29:34 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "main.hpp"

class Dog : public Animal
{
    public:
        /*Constructors*/
        Dog(void); //Default constructor
        Dog(std::string type);
        Dog(const Dog &copy); //Copy constructor

        /*Copy assignment operator*/
        Dog &operator=(const Dog &copy);
        
        /*Destructor*/
        virtual ~Dog(void);
        void makeSound()const;
};

#endif