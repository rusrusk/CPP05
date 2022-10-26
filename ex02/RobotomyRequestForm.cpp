#include "RobotomyRequestForm.hpp"

//***** Default constructor ******//

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 72, 45), _target("Robotomy") {
    std::cout << "[RobotomyRequestForm] default constructor was called"
              << std::endl;
}

//***** Parameterized constructor ******//

RobotomyRequestForm::RobotomyRequestForm(std::string param_target)
    : Form(param_target, 72, 45) {
    std::cout << "[RobotomyRequestForm] Parameterized constructor was called"
              << std::endl;
}

//***** Copy constructor ******//

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) {
    *this = rhs;
    std::cout << "[RobotomyRequestForm] Copy constructor was called"
              << std::endl;
}

//***** Copy assignment operator ******//

RobotomyRequestForm RobotomyRequestForm::operator=(
    const RobotomyRequestForm &rhs) {
    if (this != &rhs) {
        this->_target = rhs._target;
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

void RobotomyRequestForm::execute(Bureucrat const &executor) const {
    try {
        if (this->GetIsSigned() == false) {
            throw Form::BreakSignException();
        } else if (executor.getGrade() <= this->GetGradeToExecute()) {
            std::cout << this->_target << " makes some drilling noises"
                      << std::endl;
            time_t current_time;
			time(&current_time);   // stores time in current_time and accesses time() with reference pointer
            int random_var = std::rand();
            if (random_var % 2) {
                std::cout
                    << this->getName()
                    << " has been robotomized successfully 50% of the time"
                    << std::endl;
            } else
                std::cout << "Robotomy has failed!" << std::endl;
            return;
        } else
            throw Form::GradeTooLowException();
    } catch (const Form::BreakSignException &e) {
        std::cout << "EXCEPTION CAUGHT : " << e.what() << std::endl;
    } catch (const Form::GradeTooLowException &e) {
        std::cout << "EXCEPTION CAUGHT : " << e.what() << std::endl;
    }
}