#include "ShrubberyCreationForm.hpp"

//***** Default constructor ******//

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), _target("Shrubbery") {
    std::cout << "[ShrubberyCreationForm] default constructor was called"
              << std::endl;
}

//***** Parameterized constructor ******//

ShrubberyCreationForm::ShrubberyCreationForm(std::string param_target)
    : Form(param_target, 145, 137), _target(param_target) {
    std::cout << "[ShrubberyCreationForm] Parameterized constructor was called"
              << std::endl;
}

//***** Copy constructor ******//

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) {
    *this = rhs;
    std::cout << "[ShrubberyCreationForm] Copy constructor was called"
              << std::endl;
}

//***** Copy assignment operator ******//

ShrubberyCreationForm ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm &rhs) {
    if (this != &rhs) {
        this->_target = rhs._target;
    }
    std::cout << "[ShrubberyCreationForm] Assignment operator was called"
              << std::endl;
    return *this;
}

//***** Getter functions ******//

std::string ShrubberyCreationForm::getTarget(void) const {
    return this->_target;
}

//***** Destructor ******//

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "[ShrubberyCreationForm] destructor was called" << std::endl;
}

//***** execute function to execute the form's action of derived class ******//

void ShrubberyCreationForm::execute(Bureucrat const &executor) const {
    try {
        if (this->GetIsSigned() == false) {
            throw Form::BreakSignException();
        } else if (executor.getGrade() <= this->GetGradeToExecute()) {
            std::string file_name = this->_target + "_shrubbery";
            std::ofstream outfile;
            outfile.open(file_name);
            if (outfile.is_open()) {
                outfile << std::endl;
                outfile << "      .              .              ;%     ;; "
                        << std::endl;
                outfile << "        ,           ,                :;%  %; "
                        << std::endl;
                outfile
                    << "         :         ;                   :;%;'     ., "
                    << std::endl;
                outfile << ",.        %;     %;            ;        %;'    ,; "
                        << std::endl;
                outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%' "
                        << std::endl;
                outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;' "
                        << std::endl;
                outfile << "    ;%;      %;        ;%;        % ;%;  ,%;' "
                        << std::endl;
                outfile << "     `%;.     ;%;     %;'         `;%%;.%;' "
                        << std::endl;
                outfile << "      `:;%.    ;%%. %@;        %; ;@%;%' "
                        << std::endl;
                outfile << "         `:%;.  :;bd%;          %;@%;' "
                        << std::endl;
                outfile << "           `@%:.  :;%.         ;@@%;' "
                        << std::endl;
                outfile << "             `@%.  `;@%.      ;@@%; " << std::endl;
                outfile << "               `@%%. `@%%    ;@@%; " << std::endl;
                outfile << "                 ;@%. :@%%  %@@%; " << std::endl;
                outfile << "                   %@bd%%%bd%%:; " << std::endl;
                outfile << "                     #@%%%%%:;; " << std::endl;
                outfile << "                     %@@%%%::; " << std::endl;
                outfile << "                     %@@@%(o);  . ' " << std::endl;
                outfile << "                     %@@@o%;:(.,' " << std::endl;
                outfile << "                 `.. %@@@o%::; " << std::endl;
                outfile << "                    `)@@@o%::; " << std::endl;
                outfile << "                     %@@(o)::; " << std::endl;
                outfile << "                    .%@@@@%::; " << std::endl;
                outfile << "                    ;%@@@@%::;. " << std::endl;
                outfile << "                   ;%@@@@%%:;;;. " << std::endl;
                outfile << "               ...;%@@@@@%%:;;;;,.. Ruslan ";
                std::cout << COLOR_BOLD_GREEN << COLOR_UNDERLINE << "~~~~~ ["
                          << this->getName() << "] creates a file "
                          << this->_target << "_shrubbery! ~~~~~" << END
                          << std::endl;
            }
            return;
        } else
            throw Form::GradeTooLowException();
    } catch (const Form::BreakSignException &e) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH
                  << "EXCEPTION CAUGHT : " << e.what() << END << std::endl;
    } catch (const Form::GradeTooLowException &e) {
        std::cout << COLOR_BOLD_RED << COLOR_STRIKETHROUGH
                  << "EXCEPTION CAUGHT DURING EXECUTION  : " << e.what() << END
                  << std::endl;
    }
}