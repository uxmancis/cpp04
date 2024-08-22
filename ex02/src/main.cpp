/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:09:39 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 17:32:29 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

#define NB_OF_ANIMALS 5

/*  Abstract classes: 
*       So as to make sure a class cannot be instantiated, we can make it an abstract
*       class. A class is abstract if it contains at least one pure virtual function.
*
*  Pure virtual function:
*       A function that is declared in a base class, but must be implemented by derived
*       classes.
*
*
**/
int main(void)
{
    int index;
    Animal *zoo[NB_OF_ANIMALS];
    
    index = 0;
    while (index < 5)
    {
        if (index % 2 == 0) //bikoiti
        {
            zoo[index] = new Dog;
            zoo[index]->makeSound();
        }
        else
        {
            zoo[index] = new Cat;
            zoo[index]->makeSound();
        }
            
        index++;
        std::cout << "\n";
    }
    
    index = 0;
    while (index < NB_OF_ANIMALS)
    {
        delete zoo[index];
        index++;
    }
    return (0);
}