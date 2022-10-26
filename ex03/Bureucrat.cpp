#include "Bureucrat.hpp"

//***** Default constructor ******//

Bureucrat::Bureucrat() : _name("Bureucrat"), _grade(1) {
    std::cout << "[Bureucrat] Default constructor was called" << std::endl;
    if (this->_grade < _MAX_GRADE)
        throw GradeTooHighException();
    else if (this->_grade > _MIN_GRADE)
        throw GradeTooLowException();
}

//***** Parameterized constructor ******//

Bureucrat::Bureucrat(std::string param_name, int param_grade)
    : _name(param_name), _grade(param_grade) {
    std::cout << "[Bureucrat] Parameterized constructor was called"
              << std::endl;
    if (this->_grade < _MAX_GRADE)
        throw GradeTooHighException();
    else if (this->_grade > _MIN_GRADE)
        throw GradeTooLowException();
}

//***** Copy constructor ******//

Bureucrat::Bureucrat(const Bureucrat &rhs)
    : _name(rhs._name), _grade(rhs._grade) {
    *this = rhs;
    std::cout << "[Bureucrat] Copy constructor was called" << std::endl;
}

//***** Copy assignment operator ******//

Bureucrat &Bureucrat::operator=(const Bureucrat &rhs) {
    if (this != &rhs) {
        // this->_name = rhs.getName();
        this->_grade = rhs.getGrade();
    }
    return *this;
}

//***** Getter functions ******//

const std::string Bureucrat::getName(void) const { return this->_name; }

int Bureucrat::getGrade(void) const { return this->_grade; }

//******  Increment and Decrement functions ******//

void Bureucrat::decrementGrade() {
    if (this->_grade == _MIN_GRADE) throw GradeTooLowException();
    this->_grade++;
    std::cout << COLOR_BOLD_BLACK << std::string(60, '-') << std::endl;
    std::cout << "[Bureucrat] --decrements-- his grade to : ["
              << this->getGrade() << "]              |" << std::endl;
    std::cout << std::string(60, '-') << END << std::endl;
}

void Bureucrat::incrementGrade() {
    if (this->_grade == _MAX_GRADE) throw GradeTooHighException();
    this->_grade--;
    std::cout << COLOR_BOLD_BLUE << std::string(60, '-') << std::endl;
    std::cout << "[Bureucrat] ++increments++ his grade to : ["
              << this->getGrade() << "]              |" << std::endl;
    std::cout << std::string(60, '-') << END << std::endl;
}

//****** Exception class methods *****//

const char *Bureucrat::GradeTooLowException::what() const throw() {
    return ("THE GRADE IS TOO LOW!!!");
}

const char *Bureucrat::GradeTooHighException::what() const throw() {
    return ("THE GRADE IS TOO HIGH!!!");
}

//******  Insertion overload operator ******//

std::ostream &operator<<(std::ostream &o, Bureucrat &bureucrat) {
    o << "~~~~~~~~~ " << bureucrat.getName() << ", bureucrat grade ["
      << bureucrat.getGrade() << "] ~~~~~~~~~" << std::endl;

    return o;
}

//******  Destructor ******//

Bureucrat::~Bureucrat() {
    std::cout << "[Bureucrat] destructor was called" << std::endl;
}

//******  signForm to check if the form is signed ******//

void Bureucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << COLOR_BOLD_GREEN << COLOR_UNDERLINE << "~~~~~ ["
                  << this->_name << "] signed " << form.getName() << " ~~~~~"
                  << END << std::endl;

    } catch (const std::exception &e) {
        std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << "["
                  << this->getName() << "] couldn't sign " << form.getName()
                  << " because " << e.what() << END << '\n';
    }
}

//******  executeForm function which attempts to execute the form ******//

void Bureucrat::executeForm(Form const &form) {
    try {
        form.execute(*this);
        std::cout << COLOR_BRIGHT_YELLOW << COLOR_BOLD << "[" << this->_name
                  << "] executed [" << form.getName() << "]" << END
                  << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}