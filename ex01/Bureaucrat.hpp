#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "colors.hpp"

class Form;

class Bureaucrat {
   private:
    const std::string _name;
    int _grade;
    static const int _MIN_GRADE = 150;
    static const int _MAX_GRADE = 1;

   public:
    Bureaucrat();
    Bureaucrat(std::string param_name, int param_grade);
    Bureaucrat(const Bureaucrat &rhs);
    Bureaucrat &operator=(const Bureaucrat &rhs);
    ~Bureaucrat();

    // Nested Exception error classes
    class GradeTooHighException : public std::exception {
       public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
       public:
        virtual const char *what() const throw();
    };

    // Getters
    const std::string getName(void) const;
    int getGrade(void) const;


    //Setters
    void setGrade(int grade);

    // Helper functions

    void signForm(Form &form);
    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &nb);

#endif