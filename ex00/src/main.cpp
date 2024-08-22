/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:56:41 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/22 19:43:11 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"
#include "../inc/WrongCat.hpp"

int main(void)
{
    // const Animal* meta = new Animal("Elephant"); //no instanciable = clase abstracta. Objetivo: crear jerarquía de clases
    // const Animal* j = new Dog("Dog");
    // const Animal* i = new Cat("Cat");
    Dog pet_one("Dog");
    Cat pet_two("Cat");

    // std::cout << j->getType() << std::endl;
    // std::cout << i->getType() << std::endl;
    // i->makeSound();
    // j->makeSound();

    pet_one.makeSound();
    pet_two.makeSound();
    // meta->makeSound();

    std::cout << "\n***but after my cat has had a couple drinks..***" << std::endl;
    WrongCat drunk_cat("pitxin");
    drunk_cat.makeSound();

    delete meta;
    // delete j;
    // delete i;
    return(0);
}