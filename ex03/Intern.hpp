#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
   private:
    enum Type { PR_PARDON, ROB_REQUEST, SHRUB_REQUEST };

   public:
    Intern();
    ~Intern();
    Intern(const Intern &rhs);
    Intern operator=(const Intern &rhs);

    // helper functions
    Form *makeForm(std::string const &form_name,
                   std::string const &form_target) const;

    // exception class
    class NonExistingFormException : public std::exception {
       public:
        virtual const char *what() const throw();
    };
};

#endif