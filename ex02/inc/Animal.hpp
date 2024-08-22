/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:46:42 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 17:29:25 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "main.hpp"
#include <string>

class Animal
{
    protected: /*También accesible para objetos derivados de esta clase*/
        std::string _type;

    public:
        Animal(void);
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal(void);//make sure the Destructor is virtual
        std::string getType(void)const{return(_type);};
        void setType(std::string type){_type = type;};
        
        /* Pure virtual function:
        *  Assigning a 0 to it tells the compiler that derived
        *  classes must provide an implementation for this function.
        * -----------------------------------------------------------*/
        virtual void makeSound()const = 0;
};

#endif