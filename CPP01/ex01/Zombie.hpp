/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:54:54 by pauladretta       #+#    #+#             */
/*   Updated: 2025/10/29 20:19:01 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

// Reset (for printing purposes)
#define RESET   "\033[0m"

// Regular Colors (for printing purposes)
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Zombie
{
    private:
        std::string name;
    
    public:
        void setName(std::string name);
        void announce(void);
        Zombie();
        Zombie(std::string name);
        ~Zombie();
};

#endif