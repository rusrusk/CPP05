#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"

class Intern {

	private :

	public :
			Intern();
			~Intern();
			Intern(const Intern &rhs);
			Intern operator=(const Intern &rhs);
			Form *makeForm(Form &form_name, Form &target);
};




#endif