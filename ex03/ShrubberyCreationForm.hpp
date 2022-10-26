#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
   private:
    std::string _target;

   public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
    ShrubberyCreationForm operator=(const ShrubberyCreationForm &rhs);
    ~ShrubberyCreationForm();

    std::string getTarget(void) const;
    virtual void execute(Bureucrat const &executor) const;
};

#endif