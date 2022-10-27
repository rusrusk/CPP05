#include "Bureucrat.hpp"

//***** Default constructor ******//

Bureucrat::Bureucrat() : _name("Bureucrat"), _grade(150) {
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
    try
    {    
        if (this->_grade == _MIN_GRADE)
            throw GradeTooLowException();
        else
        {
            this->_grade++;
            std::cout << COLOR_BOLD_BLACK << std::string(60, '-') << std::endl;
            std::cout << "[Bureucrat] --decrements-- his grade to : ["
                    << this->getGrade() << "]              |" << std::endl;
            std::cout << std::string(60, '-') << END << std::endl;
        }
    }
    catch (Bureucrat::GradeTooLowException &e) {
        std::cout << COLOR_STRIKETHROUGH << COLOR_BOLD_RED << "EXCEPTION CAUGHT: " << e.what() << END << std::endl;
    }
}

void Bureucrat::incrementGrade() {
     try
    {    
        if (this->_grade == _MAX_GRADE)
            throw GradeTooHighException();
        else
        {
            this->_grade--;
            std::cout << COLOR_BOLD_BLACK << std::string(60, '-') << std::endl;
            std::cout << "[Bureucrat] --increments-- his grade to : ["
                    << this->getGrade() << "]              |" << std::endl;
            std::cout << std::string(60, '-') << END << std::endl;
        }
    }
    catch (Bureucrat::GradeTooHighException &e) {
        std::cout << COLOR_STRIKETHROUGH << COLOR_BOLD_RED << "EXCEPTION CAUGHT: " << e.what() << END << std::endl;
    }
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