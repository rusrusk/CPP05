#include "Form.hpp"

//***** Default constructor ******//

Form::Form()
    : _name("Form"), _grade_to_sign(1), _grade_to_execute(1), _isSigned(false) {
    std::cout << "[Form] Default constructor was called" << std::endl;

    if (_grade_to_sign < _MAX_GRADE || _grade_to_execute < _MAX_GRADE)
        throw Form::GradeTooHighException();
    else if (_grade_to_sign > _MIN_GRADE || _grade_to_execute > _MIN_GRADE)
        throw Form::GradeTooLowException();
}

//***** Parameterized constructor ******//

Form::Form(std::string param_name, int param_grade_to_sign,
           int param_grade_to_execute)
    : _name(param_name),
      _grade_to_sign(param_grade_to_sign),
      _grade_to_execute(param_grade_to_execute),
      _isSigned(false) {
    std::cout << "[Form] Parameterized constructor was called" << std::endl;

    if (_grade_to_sign < _MAX_GRADE || _grade_to_execute < _MAX_GRADE)
        throw Form::GradeTooHighException();
    if (_grade_to_sign > _MIN_GRADE || _grade_to_execute > _MIN_GRADE)
        throw Form::GradeTooLowException();
}

//***** Copy constructor ******//

Form::Form(const Form &rhs)
    : _name(rhs._name),
      _grade_to_sign(rhs._grade_to_sign),
      _grade_to_execute(rhs._grade_to_execute),
      _isSigned(rhs._isSigned) {
    std::cout << "[Form] Copy constructor was called" << std::endl;
}

//***** Copy assignment operator ******//

Form &Form::operator=(const Form &rhs) {
    if (this != &rhs) {
        this->_isSigned = rhs._isSigned;
    }
    return *this;
}

//***** Getter functions ******//

const std::string Form::getName(void) const { return this->_name; }

int Form::GetGradeToSign(void) const { return this->_grade_to_sign; }

int Form::GetGradeToExecute(void) const { return this->_grade_to_execute; }

bool Form::GetIsSigned(void) const { return this->_isSigned; }

//***** Destructor ******//

Form::~Form() { std::cout << "[Form] destructor was called" << std::endl; }

//****** Exception class methods *****//

const char *Form::GradeTooHighException::what() const throw() {
    return ("THE FORM GRADE IS TOO HIGH!!!");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("THE FORM GRADE IS TOO LOW!!!");
}

//***** Member function to sign ******//

void Form::beSigned(const Bureaucrat &bureau) {
    if (bureau.getGrade() > this->_grade_to_sign)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
    std::cout << COLOR_UNDERLINE << COLOR_BOLD_GREEN
              << "~~~~~ [Form] is signed now on!!! ~~~~~" << END << std::endl;
}

std::ostream &operator<<(std::ostream &o, Form &form) {
    o << COLOR_BOLD_CYAN << "FORM NAME : " << END << COLOR_ON_YELLOW
      << COLOR_BOLD_BLACK << form.getName() << END << std::endl;
    o << COLOR_BOLD_CYAN << "FORM STATUS : " << END << COLOR_ON_YELLOW
      << COLOR_BOLD_BLACK
      << (form.GetIsSigned() ? "<<SIGNED>>" : "<<UNSIGNED>>") << END
      << std::endl;
    o << COLOR_BOLD_CYAN << "GRADE TO SIGN : " << END << COLOR_ON_YELLOW
      << COLOR_BOLD_BLACK << form.GetGradeToSign() << END << std::endl;
    o << COLOR_BOLD_CYAN << "GRADE TO EXECUTE : " << END << COLOR_ON_YELLOW
      << COLOR_BOLD_BLACK << form.GetGradeToExecute() << END << std::endl;
    return o;
}
