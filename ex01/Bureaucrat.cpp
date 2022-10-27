#include "Bureaucrat.hpp"

//***** Default constructor ******//

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(1) {
    std::cout << "[Bureaucrat] default constructor was called" << std::endl;
    if (this->_grade < _MAX_GRADE)
        throw GradeTooHighException();
    else if (this->_grade > _MIN_GRADE)
        throw GradeTooLowException();
}

//***** Parameterized constructor ******//

Bureaucrat::Bureaucrat(std::string param_name, int param_grade)
    : _name(param_name), _grade(param_grade) {
    std::cout << "[Bureaucrat] Parameterized constructor was called"
              << std::endl;
    if (this->_grade < _MAX_GRADE)
        throw GradeTooHighException();
    else if (this->_grade > _MIN_GRADE)
        throw GradeTooLowException();
}

//***** Copy constructor ******//

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
    : _name(rhs._name), _grade(rhs._grade) {
    std::cout << "[Bureaucrat] Copy constructor was called" << std::endl;
}

//***** Copy assignment operator ******//

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    if (this != &rhs) {
        this->_grade = rhs._grade;
    }
    std::cout << "Assignment operator was called" << std::endl;
    return (*this);
}

//***** Getter functions ******//

const std::string Bureaucrat::getName(void) const { return this->_name; }

int Bureaucrat::getGrade(void) const { return this->_grade; }

//******  Increment and Decrement functions ******//

void Bureaucrat::decrementGrade() {
    if (this->_grade == _MIN_GRADE) throw GradeTooLowException();
    this->_grade++;
    std::cout << COLOR_BOLD_BLACK << std::string(60, '-') << std::endl;
    std::cout << "[Bureaucrat] --decrements-- his grade to : ["
              << this->getGrade() << "]              |" << std::endl;
    std::cout << std::string(60, '-') << END << std::endl;
}

void Bureaucrat::incrementGrade() {
    if (this->_grade == _MAX_GRADE) throw GradeTooHighException();
    this->_grade--;
    std::cout << COLOR_BOLD_BLUE << std::string(60, '-') << std::endl;
    std::cout << "[Bureaucrat] ++increments++ his grade to : ["
              << this->getGrade() << "]              |" << std::endl;
    std::cout << std::string(60, '-') << END << std::endl;
}

//****** Exception class methods *****//

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("THE GRADE IS TOO LOW!!!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("THE GRADE IS TOO HIGH!!!");
}

//******  Insertion overload operator ******//

std::ostream &operator<<(std::ostream &o, Bureaucrat &Bureaucrat) {
    o << COLOR_BOLD_CYAN << "BUREAUCRAT NAME : " << END << COLOR_ON_YELLOW
      << COLOR_BOLD_BLACK << Bureaucrat.getName() << END << std::endl;
    o << COLOR_BOLD_CYAN << "BUREAUCRAT GRADE : " << END << COLOR_ON_YELLOW
      << COLOR_BOLD_BLACK << Bureaucrat.getGrade() << END << std::endl;
    std::cout << COLOR_BOLD_CYAN << std::string(60, '~') << END << std::endl;
    return o;
}

//******  Destructor ******//

Bureaucrat::~Bureaucrat() {
    std::cout << "[Bureaucrat] destructor was called" << std::endl;
}

//******  signForm to check if the form is signed ******//

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << COLOR_BOLD_GREEN << "[" << this->_name << "] signed "
                  << form.getName() << END << std::endl;

    } catch (const std::exception &e) {
        std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << "["
                  << this->getName() << "] couldn't sign " << form.getName()
                  << " because " << e.what() << END << '\n';
        return;
    }
}

void Bureaucrat::setGrade(int grade) { this->_grade = grade; }
