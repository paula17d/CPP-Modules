/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:18 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 23:56:17 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm 
{
    private:
        std::string _target;
        
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
};

#endif