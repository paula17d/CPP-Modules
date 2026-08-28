/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:23:13 by pauladretta       #+#    #+#             */
/*   Updated: 2026/03/22 19:07:33 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm 
{
    private:
        std::string _target;
        
    public:
        // Default constructor
        RobotomyRequestForm();
        // Custom constructor
        RobotomyRequestForm(std::string target);
        // Copy constructor
        RobotomyRequestForm(const RobotomyRequestForm &other);
        // Copy assignment operator
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        // Destructor
        ~RobotomyRequestForm();
        // Member functions
        virtual void execute(Bureaucrat const & executor) const;
};

#endif