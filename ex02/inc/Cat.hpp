/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:51:31 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 17:30:52 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "main.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *serebrito;
        
    public:
        Cat(void);
        Cat(std::string type);
        Cat(const Cat &copy);
        ~Cat(void);
        void makeSound()const;
};

#endif