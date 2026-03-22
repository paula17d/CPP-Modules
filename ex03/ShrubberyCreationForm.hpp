/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:08 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 19:08:26 by pdrettas         ###   ########.fr       */
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
    private:
        std::string _target;
        
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
};

#endif