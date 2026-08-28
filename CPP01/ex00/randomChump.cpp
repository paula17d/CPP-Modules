/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:29:25 by pdrettas          #+#    #+#             */
/*   Updated: 2025/10/25 20:46:01 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

// This function creates a zombie, names it, and makes it announce itself
void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
