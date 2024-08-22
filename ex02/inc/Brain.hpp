/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:49:50 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 16:52:36 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "main.hpp"

class Brain
{
    public:
        std::string _ideas[100];
        Brain(void);
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
        ~Brain(void);
};

#endif