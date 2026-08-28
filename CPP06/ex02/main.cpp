/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 18:18:23 by pdrettas          #+#    #+#             */
/*   Updated: 2026/04/04 21:18:33 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "functions.hpp"

int main ()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);

    delete ptr;

    return 0;
}