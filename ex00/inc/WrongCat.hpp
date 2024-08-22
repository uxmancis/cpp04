/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:25:35 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:30:31 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "main.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        /*Constructors*/
        WrongCat(void); //Default constructor
        WrongCat(std::string type);
        WrongCat(const WrongCat &copy); //Copy constructor

        /*Copy assignment operator*/
        WrongCat &operator=(const WrongCat &copy);
        
        /*Destructor*/
        virtual ~WrongCat(void);
};

#endif