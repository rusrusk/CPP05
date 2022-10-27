#include "Intern.hpp"

//***** Default constructor ******//

Intern::Intern() {
    // this->ptr_methods[0] = &Intern::makePresidency;
    // this->ptr_methods[1] = &Intern::makeRobotomy;
    // this->ptr_methods[2] = &Intern::makeShrubbery;
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

//***** Exceptions class method function ******//

const char *Intern::NonExistingFormException::what() const throw() {
    return ("EXCEPTION : GIVEN FORM DOESN'T EXIST");
}

//***** Helper functions ******//

Form *Intern::makeForm(std::string const &form_name,
                       std::string const &form_target) const {
    std::string const forms_arr[3] = {"shrubbery creation", "robotomy request",
                                      "presidential pardon"};
    int chosen_form = -1;
    Form *newForm = NULL;

    for (int i = 2; i >= 0; i--) {
        if (form_name == forms_arr[i]) {
            chosen_form = i;
            break;
        }
    }
    switch (chosen_form) {
        case Intern::SHRUB_REQUEST:
            newForm = new ShrubberyCreationForm(form_target);
            std::cout << COLOR_UNDERLINE << COLOR_BOLD_GREEN
                      << "Intern creates [" << forms_arr[chosen_form] << "]"
                      << std::endl;
            break;
        case Intern::ROB_REQUEST:
            newForm = new RobotomyRequestForm(form_target);
            std::cout << COLOR_UNDERLINE << COLOR_BOLD_GREEN
                      << "Intern creates [" << forms_arr[chosen_form] << "]"
                      << std::endl;
            break;
        case Intern::PR_PARDON:
            newForm = new PresidentialPardonForm(form_target);
            std::cout << COLOR_UNDERLINE << COLOR_BOLD_GREEN
                      << "Intern creates [" << forms_arr[chosen_form] << "]"
                      << std::endl;
            break;
        default:
            std::cout << COLOR_STRIKETHROUGH
                      << COLOR_BOLD_RED "FORM WITH A NAME : [" << form_name
                      << "] DOESN'T EXIST" << END << std::endl;
            throw Intern::NonExistingFormException();
            break;
    }
    return (newForm);
}