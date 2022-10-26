#include "Intern.hpp"

//***** Default constructor ******//

Intern::Intern() {
    this->ptr_methods[0] = &Intern::makePresidency;
    this->ptr_methods[1] = &Intern::makeRobotomy;
    this->ptr_methods[2] = &Intern::makeShrubbery;
    std::cout << "[Intern] default constructor was called" << std::endl;
}

//***** Copy constructor ******//

Intern::Intern(const Intern &rhs) { *this = rhs; }

//***** Copy assignment operator ******//

Intern Intern::operator=(const Intern &rhs) {
    if (this != &rhs) {
        (void)rhs;
    }
    return *this;
}

//***** Destructor ******//

Intern::~Intern() {
    std::cout << "[Intern] destructor was called" << std::endl;
}

//***** Helper functions ******//

Form *Intern::makeRobotomy(std::string const target) {
    return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidency(std::string const target) {
    return (new PresidentialPardonForm(target));
}

Form *Intern::makeShrubbery(std::string const target) {
    return (new ShrubberyCreationForm(target));
}

//***** Exceptions class method function ******//

const char *Intern::NonExistingFormException::what() const throw() {
    return ("GIVEN FORM DOESN'T EXIST");
}
Form *Intern::makeForm(std::string const &form_name,
                       std::string const &form_target) {
	
	// try
	// {
	// 	if ( *ptr_methods != NULL)
	// 	{
			std::string forms_arr[3] = {"presidential pardon", "robotomy request",
											"shrubbery creation"};
			// ptr_methods ptr_func_arr[3] = {&Intern::makePresidency,
			// &Intern::makeRobotomy, &Intern::makeShrubbery};
			for (int i = 2; i >= 0; i--) {
				if (form_name == forms_arr[i]) {
					Form *tmp = (this->*ptr_methods[i])(form_target);
					// Form *select_form = (this->*(forms_arr[i]))(form_target);
					std::cout << "Intern creates: [" << forms_arr[i] << "]"
							<< std::endl;
					return tmp;
				}
			}
		// else {
			std::cout << "Form with a name : [" << form_name << "] doesn't exist"
					<< std::endl;
			throw Intern::NonExistingFormException();
		}
	// }
	// catch(const Intern::NonExistingFormException &e) {
	// 	std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
	// }
	// return tmp;
//  }

// AForm * Intern::makeForm(std::string const & type, std::string const &
// target) const
// {
// 	std::string const forms[3] = {"shrubbery creation", "robotomy request",
// "presidential pardon"}; 	int	selectedForm = -1; 	AForm * newForm = NULL;

// 	for (int i = 0; i < 3; i++)
// 	{
// 		if (type == forms[i])
// 		{
// 			selectedForm = i;
// 			break;
// 		}
// 	}
// 	switch (selectedForm)
// 	{
// 	case 0:
// 		newForm = new ShrubberyCreationForm(target);
// 		std::cout << "Intern creates: [ShrubberyCreationForm]\n";
// 		break;
// 	case 1:
// 		newForm = new RobotomyRequestForm(target);
// 		std::cout << "Intern creates: [RobotomyRequestForm]\n";
// 		break;
// 	case 2:
// 		newForm = new PresidentialPardonForm(target);
// 		std::cout << "Intern creates: [PresidentialPardonForm]\n";
// 		break;
// 	default:
// 		std::cout << "Intern creates: nothing! The form [" << type << "]
// does not exist!\n"; 		break;
// 	}
// 	return (newForm);