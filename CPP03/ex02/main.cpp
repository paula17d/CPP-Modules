/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:18:38 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 22:58:33 by pdrettas         ###   ########.fr       */
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
    FragTrapThree.attack("One");
    FragTrapThree.beRepaired(60);
    FragTrapThree.takeDamage(90);
    
    return 0;
}
