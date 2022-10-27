#include "RobotomyRequestForm.hpp"

//***** Default constructor ******//

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", _GRADE_TO_SIGN, _GRADE_TO_EXEC),
      _target("Robotomy") {
    std::cout << "[RobotomyRequestForm] default constructor was called"
              << std::endl;
}

//***** Parameterized constructor ******//

RobotomyRequestForm::RobotomyRequestForm(std::string param_target)
    : Form(param_target, _GRADE_TO_SIGN, _GRADE_TO_EXEC) {
    std::cout << "[RobotomyRequestForm] Parameterized constructor was called"
              << std::endl;
}

//***** Copy constructor ******//

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
    : Form() {
    *this = rhs;
    std::cout << "[RobotomyRequestForm] Copy constructor was called"
              << std::endl;
}

//***** Copy assignment operator ******//

RobotomyRequestForm RobotomyRequestForm::operator=(
    const RobotomyRequestForm &rhs) {
    if (this != &rhs) {
        this->_target = rhs._target;
        this->setIsSigned(this->GetIsSigned());
    }
    std::cout << "[RobotomyRequestForm] Assignment operator was called"
              << std::endl;
    return *this;
}

//***** Getter functions ******//

std::string RobotomyRequestForm::getTarget(void) const { return this->_target; }

//***** Destructor ******//

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "[RobotomyRequestForm] destructor was called" << std::endl;
}

//***** execute function to execute the form's action of derived class ******//

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (this->GetIsSigned() == false) {
        throw Form::BreakSignException();
    } else if (executor.getGrade() > this->GetGradeToExecute()) {
        throw Form::GradeTooLowException();
    } else
        std::cout << COLOR_BRIGHT_BLUE << COLOR_ITALIC << "[" << this->getName()
                  << "] makes some drilling noises..." << std::endl;
    time_t current_time;
    std::srand(time(&current_time));  // stores time in current_time and
                                      // accesses time() with reference pointer
    int random_var = std::rand() % 2;
    if (random_var) {
        std::cout << COLOR_BOLD_GREEN << COLOR_ITALIC << "[" << this->getName()
                  << "] has been robotomized successfully 50% of the time"
                  << END << std::endl;
    } else
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH
                  << "Robotomy has failed!" << END << std::endl;
}