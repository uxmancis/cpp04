/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:27:20 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:32:02 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "main.hpp"

class WrongAnimal
{
    protected: /*También accesible para objetos derivados de esta clase*/
        std::string _type;

    public:
        /*Constructors*/
        WrongAnimal(void); //Default Constructor
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &copy); //Copy constructor
        
        /*Copy assignment operator*/
        WrongAnimal &operator=(const WrongAnimal &copy);

        /*Destructor*/
        virtual ~WrongAnimal(void);
        std::string getType(void)const{return(_type);};
        void setType(std::string type){_type = type;};
        virtual void makeSound()const = 0;
};

#endif