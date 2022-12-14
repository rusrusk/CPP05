#include "PresidentialPardonForm.hpp"

//***** Default constructor ******//

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", _GRADE_TO_SIGN, _GRADE_TO_EXEC),
      _target("President") {
    std::cout << "[PresidentialPardonForm] default constructor was called"
              << std::endl;
}

//***** Parameterized constructor ******//

PresidentialPardonForm::PresidentialPardonForm(std::string param_target)
    : Form(param_target, _GRADE_TO_SIGN, _GRADE_TO_EXEC) {
    std::cout << "[PresidentialPardonForm] Parameterized constructor was called"
              << std::endl;
}

//***** Copy constructor ******//

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &rhs)
    : Form() {
    *this = rhs;
    std::cout << "[PresidentialPardonForm] Copy constructor was called"
              << std::endl;
}

//***** Copy assignment operator ******//

PresidentialPardonForm PresidentialPardonForm::operator=(
    const PresidentialPardonForm &rhs) {
    if (this != &rhs) {
        this->_target = rhs._target;
        this->setIsSigned(this->GetIsSigned());
    }
    std::cout << "[PresidentialPardonForm] Assignment operator was called"
              << std::endl;
    return *this;
}

//***** Getter functions ******//

std::string PresidentialPardonForm::getTarget(void) const {
    return this->_target;
}

//***** Destructor ******//

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "[PresidentialPardonForm] destructor was called" << std::endl;
}

//***** execute function to execute the form's action of derived class ******//

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->GetIsSigned() == false)
        throw Form::BreakSignException();
    else if (executor.getGrade() > this->GetGradeToExecute())
        throw Form::GradeTooLowException();
    else
        std::cout << COLOR_BOLD_GREEN << COLOR_UNDERLINE << "["
                  << this->getName()
                  << "] has been pardoned by Zaphod Beeblebrox" << END
                  << std::endl;
}