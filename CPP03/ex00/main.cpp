/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:41:39 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 22:57:13 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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