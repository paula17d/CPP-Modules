/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:18:38 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/14 19:46:25 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ScavTrap scavTrapOne("One");
    
    std::cout << "Name of scavTrapOne = " << scavTrapOne.getName() << std::endl;
    
    std::cout << "Hit points of scavTrapOne = " << scavTrapOne.getHitPoints() << std::endl;
    
    std::cout << "Energy points of scavTrapOne = " << scavTrapOne.getEnergyPoints() << std::endl;
    
    ScavTrap scavTrapTwo(scavTrapOne);
    std::cout << "Name of scavTrapTwo = " << scavTrapTwo.getName() << std::endl;
    
    std::cout << "Hit points of scavTrapTwo = " << scavTrapTwo.getHitPoints() << std::endl;
    
    std::cout << "Energy points of scavTrapTwo = " << scavTrapTwo.getEnergyPoints() << std::endl;

    ScavTrap scavTrapThree;
    scavTrapThree = scavTrapOne;
    std::cout << "Name of scavTrapThree = " << scavTrapThree.getName() << std::endl;
    
    std::cout << "Hit points of scavTrapThree = " << scavTrapThree.getHitPoints() << std::endl;
    
    std::cout << "Energy points of scavTrapThree = " << scavTrapThree.getEnergyPoints() << std::endl;
    

    return 0;
}