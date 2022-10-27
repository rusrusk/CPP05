#include "ShrubberyCreationForm.hpp"

//***** Default constructor ******//

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", _GRADE_TO_SIGN, _GRADE_TO_EXEC),
      _target("Shrubbery") {
    std::cout << "[ShrubberyCreationForm] default constructor was called"
              << std::endl;
}

//***** Parameterized constructor ******//

ShrubberyCreationForm::ShrubberyCreationForm(std::string param_target)
    : Form(param_target, _GRADE_TO_SIGN, _GRADE_TO_EXEC),
      _target(param_target) {
    std::cout << "[ShrubberyCreationForm] Parameterized constructor was called"
              << std::endl;
}

//***** Copy constructor ******//

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
    : Form() {
    *this = rhs;
    std::cout << "[ShrubberyCreationForm] Copy constructor was called"
              << std::endl;
}

//***** Copy assignment operator ******//

ShrubberyCreationForm ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm &rhs) {
    if (this != &rhs) {
        this->_target = rhs._target;
        this->setIsSigned(this->GetIsSigned());
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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (this->GetIsSigned() == false)
        throw Form::BreakSignException();
    else if (executor.getGrade() > this->GetGradeToExecute())
        throw Form::GradeTooLowException();
    else {
        std::string file_name = this->_target + "_shrubbery";
        std::ofstream outfile;
        outfile.open(file_name);
        if (outfile.is_open()) {
            outfile << std::endl;
            outfile << "      .              .              ;%     ;; "
                    << std::endl;
            outfile << "        ,           ,                :;%  %; "
                    << std::endl;
            outfile << "         :         ;                   :;%;'     ., "
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
            outfile << "      `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
            outfile << "         `:%;.  :;bd%;          %;@%;' " << std::endl;
            outfile << "           `@%:.  :;%.         ;@@%;' " << std::endl;
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
                      << this->getName() << "] creates a file " << this->_target
                      << "_shrubbery! ~~~~~" << END << std::endl;
        } else {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH
                      << "File has failed to open!" << std::endl;
        }
    }
}