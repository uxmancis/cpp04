/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:46:42 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:34:47 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "main.hpp"
#include <string>

/*Abstract class = cannot be instanced.
*
*   Requirement: at least 1 pure virtual function
*
*   You cannot create instances of an abstract class, but 
*   you can create instances of derived classes that provide
*   implementations for all pure virtual functions.
*-----------------------------------------------------------------*/
class Animal
{
    protected: /*También accesible para objetos derivados de esta clase*/
        std::string _type;

    public:
        /*Constructors*/
        Animal(void); //Default constructor
        Animal(std::string type);
        Animal(const Animal &copy); //Copy constructor

        /*Copy assignment operator*/
        Animal &operator=(const Animal &copy);

        /*Destructor*/
        virtual ~Animal(void);
        std::string getType(void)const{return(_type);};
        void setType(std::string type){_type = type;};

        /* Pure virtual function:
        *  Assigning a 0 to it tells the compiler that derived
        *  classes must provide an implementation for this function.
        * -----------------------------------------------------------*/
        virtual void makeSound()const = 0;
};

#endif