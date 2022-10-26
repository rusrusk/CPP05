#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private :
			std::string _target;
			

	public :
			PresidentialPardonForm();
			PresidentialPardonForm(std::string param_target);
			PresidentialPardonForm(const PresidentialPardonForm &rhs);
			PresidentialPardonForm operator=(const PresidentialPardonForm &rhs);
			~PresidentialPardonForm();

			std::string getTarget(void) const;
			virtual void execute(Bureucrat const &executor) const;
};








#endif