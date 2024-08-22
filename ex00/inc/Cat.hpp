/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:51:31 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:29:38 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"

class Cat : public Animal
{
    public:
        /*Constructors*/
        Cat(void); //Default constructor
        Cat(std::string type);
        Cat(const Cat &copy);//Copy constructor

        /*Copy assignment operator*/
        Cat &operator=(const Cat &copy);

        /*Destructor*/
        virtual ~Cat(void);
        void makeSound()const;
};

#endif