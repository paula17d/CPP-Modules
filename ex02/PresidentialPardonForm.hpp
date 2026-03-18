/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauladrettas <pauladrettas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:18 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/16 20:31:05 by pauladretta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm 
{
    public:
        // Default constructor
        PresidentialPardonForm();
        // Personalized constructor
        PresidentialPardonForm(std::string target);
        // Copy constructor
        PresidentialPardonForm(const PresidentialPardonForm &other);
        // Copy assignment operator
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        // Destructor
        ~PresidentialPardonForm();
        // Member Functions
        virtual void execute(Bureaucrat const & executor) const;

    private:
        std::string _target;
};

#endif