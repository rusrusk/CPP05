#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
#include <stdexcept>

#include "colors.hpp"

class Bureucrat {
   private:
    const std::string _name;
    int _grade;
    static const int _MIN_GRADE = 150;
    static const int _MAX_GRADE = 1;

   protected:
   public:
    Bureucrat();
    Bureucrat(std::string param_name, int param_grade);
    Bureucrat(const Bureucrat &rhs);
    Bureucrat &operator=(const Bureucrat &rhs);
    ~Bureucrat();

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

    // Helper functions

    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &o, Bureucrat &nb);

#endif