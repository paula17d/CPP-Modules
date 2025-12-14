/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:41:39 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/14 18:38:57 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: write tests for evaluation (mandatory)

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap clapTrapOne("One");
    ClapTrap clapTrapTwo("Two");

    clapTrapOne.attack("Two");
    clapTrapTwo.takeDamage(clapTrapOne.getAttackDamage());
    
    std::cout << "Hit points of clapTrapOne = " << clapTrapOne.getHitPoints() << std::endl;
    std::cout << "Hit points of clapTrapTwo = " << clapTrapTwo.getHitPoints() << std::endl;
    
    std::cout << "Energy points of clapTrapOne = " << clapTrapOne.getEnergyPoints() << std::endl;
    std::cout << "Energy points of clapTrapTwo = " << clapTrapTwo.getEnergyPoints() << std::endl;
    
    

    return 0;
}