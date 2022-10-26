#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Bureucrat.hpp"
#include "colors.hpp"

class Bureucrat;

class Form {

	private :
		const std::string _name;
		const int _grade_to_sign;
		const int _grade_to_execute;
		bool _isSigned;
		static const int _MAX_GRADE = 1;
		static const int _MIN_GRADE = 150;



   public:
    Form();
    Form(std::string param_name, int param_grade_to_sign, int param_grade_to_execute);
    Form(const Form &rhs);
    Form &operator=(const Form &rhs);
    virtual ~Form();

	//exception nested class
	class GradeTooHighException : public std::exception {
		public :
				virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public :
				virtual const char *what() const throw();
	};
	class BreakSignException : public std::exception {
		public :
				virtual const char *what() const throw();
	};
	

    // getters
	const std::string getName(void) const;
	int GetGradeToSign(void) const;
	int GetGradeToExecute(void) const;
	bool GetIsSigned(void) const;

	//helper functions
	void beSigned(const Bureucrat &bureau);
	virtual void execute(Bureucrat const &executor) const = 0;


};

std::ostream &operator<<(std::ostream &o, Form &form);

#endif


