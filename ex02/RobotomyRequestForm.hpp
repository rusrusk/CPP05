#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

#include "Form.hpp"

class RobotomyRequestForm : public Form {
   private:
    std::string _target;
	static const int _GRADE_TO_SIGN = 72;
	static const int _GRADE_TO_EXEC = 45;

   public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &rhs);
    RobotomyRequestForm operator=(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();

    // getter
    std::string getTarget(void) const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif