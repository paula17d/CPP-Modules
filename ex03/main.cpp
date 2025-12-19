/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:18:38 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 22:52:03 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
    DiamondTrap DiamondTrapOne("Paula");
    std::cout << "Name of DiamondTrapOne = " << DiamondTrapOne.getName() << std::endl;
    std::cout << "Hit points of DiamondTrapOne = " << DiamondTrapOne.getHitPoints() << std::endl;
    std::cout << "Energy points of DiamondTrapOne = " << DiamondTrapOne.getEnergyPoints() << std::endl;
    std::cout << "Attack damage of DiamondTrapOne = " << DiamondTrapOne.getAttackDamage() << std::endl;
    
    DiamondTrap DiamondTrapTwo(DiamondTrapOne);
    std::cout << "Name of DiamondTrapTwo = " << DiamondTrapTwo.getName() << std::endl;
    std::cout << "Hit points of DiamondTrapTwo = " << DiamondTrapTwo.getHitPoints() << std::endl;
    std::cout << "Energy points of DiamondTrapTwo = " << DiamondTrapTwo.getEnergyPoints() << std::endl;
    std::cout << "Attack damage of DiamondTrapTwo = " << DiamondTrapTwo.getAttackDamage() << std::endl;
   
    DiamondTrap DiamondTrapThree;
    DiamondTrapThree = DiamondTrapOne;
    std::cout << "Name of DiamondTrapThree = " << DiamondTrapThree.getName() << std::endl;
    std::cout << "Hit points of DiamondTrapThree = " << DiamondTrapThree.getHitPoints() << std::endl;
    std::cout << "Energy points of DiamondTrapThree = " << DiamondTrapThree.getEnergyPoints() << std::endl;
    std::cout << "Attack damage of DiamondTrapTwo = " << DiamondTrapThree.getAttackDamage() << std::endl;
    DiamondTrapThree.whoAmI();
    DiamondTrapThree.guardGate();
    DiamondTrapThree.highFivesGuys();
    
    return 0;
}
