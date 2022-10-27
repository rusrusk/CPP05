#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

#include "colors.hpp"

class Bureaucrat {
   private:	
    const std::string _name;
    int _grade;
    static const int _MIN_GRADE = 150;
    static const int _MAX_GRADE = 1;

   protected:
   public:
    Bureaucrat();
    Bureaucrat(std::string param_name, int param_grade);
    Bureaucrat(const Bureaucrat &rhs);
    Bureaucrat &operator=(const Bureaucrat &rhs);
    ~Bureaucrat();

    // Nested Exception error classes
    class GradeTooHighException : public std::exception {
       public:
        virtual const char *what() const throw(); //The what method is virtual, and the meaning is that we should override it to return whatever message we want to return.
    };
    class GradeTooLowException : public std::exception {
       public:
        virtual const char *what() const throw();
    };

    // Getters
    const std::string getName(void) const;
    int getGrade(void) const;

    // Helper functions

    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &nb);

#endif