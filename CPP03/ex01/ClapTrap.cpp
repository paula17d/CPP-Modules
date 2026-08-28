/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:41:42 by pauladretta       #+#    #+#             */
/*   Updated: 2025/12/19 22:23:03 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// default constructor
ClapTrap::ClapTrap() : _hitPoints(0), _energyPoints(0), _attackDamage(0)
{
    std::cout << "ClapTrap with Name: " << this->_name << " with default constructor created" << std::endl;
}

// personalized constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), 
    _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap with Name: " << this->_name << " with personalized constructor created" << std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &og)
{
    this->_name = og.getName();
    this->_hitPoints = og.getHitPoints();
    this->_energyPoints = og.getEnergyPoints();
    this->_attackDamage = og.getAttackDamage();
}

// assignment operator =
ClapTrap &ClapTrap::operator=(const ClapTrap &og)
{
    if (this != &og)
    {
        this->_name = og.getName();
        this->_hitPoints = og.getHitPoints();
        this->_energyPoints = og.getEnergyPoints();
        this->_attackDamage = og.getAttackDamage();
    }
    return *this;
}

// deconstructor
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap with Name: " << this->_name << " with deconstructor destroyed" << std::endl;
}

// getters
const std::string &ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}

// setters
void ClapTrap::setName(const std::string &name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}

// When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
// Attacking and repairing each cost 1 energy point.
// Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " 
        << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << this->_name << " cannot attack: no hit or energy points left :(" << std::endl;
    }
}

// When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        this->_hitPoints -= amount;
        if (this->_hitPoints < 0)
            this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " got attacked with " << amount << " damage points. New Total: " << this->_hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " is already dead, and therefore cannot take damage." << std::endl;
    }
}

// When ClapTrap repairs itself, it regains <amount> hit points
// Attacking and repairing each cost 1 energy point.
// Of course, ClapTrap can’t do anything if it has no hit points or energy points left
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " repairs itself regaining " 
        << amount << " hit points! -> New Total: " << this->_hitPoints << std::endl;
    }
    else
    {
        std::cout << this->_name << " cannot repair: no hit or energy points left :(" << std::endl;
    }
}
