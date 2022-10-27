#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>

#include "Form.hpp"

class PresidentialPardonForm : public Form {
   private:
    std::string _target;
	static const int _GRADE_TO_SIGN = 25;
	static const int _GRADE_TO_EXEC = 5;

   public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string param_target);
    PresidentialPardonForm(const PresidentialPardonForm &rhs);
    PresidentialPardonForm operator=(const PresidentialPardonForm &rhs);
    ~PresidentialPardonForm();

    std::string getTarget(void) const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif