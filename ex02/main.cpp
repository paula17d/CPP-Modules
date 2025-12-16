/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:18:38 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/16 13:47:52 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    FragTrap FragTrapOne("One");
    
    std::cout << "Name of FragTrapOne = " << FragTrapOne.getName() << std::endl;
    
    std::cout << "Hit points of FragTrapOne = " << FragTrapOne.getHitPoints() << std::endl;
    
    std::cout << "Energy points of FragTrapOne = " << FragTrapOne.getEnergyPoints() << std::endl;
    
    FragTrap FragTrapTwo(FragTrapOne);
    std::cout << "Name of FragTrapTwo = " << FragTrapTwo.getName() << std::endl;
    
    std::cout << "Hit points of FragTrapTwo = " << FragTrapTwo.getHitPoints() << std::endl;
    
    std::cout << "Energy points of FragTrapTwo = " << FragTrapTwo.getEnergyPoints() << std::endl;

    FragTrap FragTrapThree;
    FragTrapThree = FragTrapOne;
    std::cout << "Name of FragTrapThree = " << FragTrapThree.getName() << std::endl;
    
    std::cout << "Hit points of FragTrapThree = " << FragTrapThree.getHitPoints() << std::endl;
    
    std::cout << "Energy points of FragTrapThree = " << FragTrapThree.getEnergyPoints() << std::endl;

    FragTrapThree.highFivesGuys();
    
    return 0;
}

// TODO: in ex01 also add the function from its own .hpp to the main as test