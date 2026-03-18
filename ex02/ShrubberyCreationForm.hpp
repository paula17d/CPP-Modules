/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:08 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/18 16:32:13 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm 
{
    public:
        // Default constructor
        ShrubberyCreationForm();
        // Costum constructor
        ShrubberyCreationForm(std::string target);
        // Copy constructor
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        // Copy assignment operator
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        // Destructor
        ~ShrubberyCreationForm();
        // Member functions
        void execute(Bureaucrat const &executor) const;

    private:
        std::string _target;
};

#endif