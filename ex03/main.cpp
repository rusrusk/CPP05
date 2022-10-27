#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    {
        std::cout << COLOR_ON_MAGENTA
                  << "--INTERN SHRUBBERY--INTERN SHRUBBERY--INTERN SHRUBBERY"
                  << END << std::endl;
        delimiter std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
                            << " [CUSTOM TEST 1] " << std::string(20, '*')
                            << END << std::endl;
        try {
            Intern intern1;
            delimiter Form *form1 =
                intern1.makeForm("shrubbery creation", "University");
            delimiter std::cout << COLOR_ON_BLACK << form1->getName() << END
                                << std::endl;
            delimiter delete form1;
        } catch (const std::exception &e) {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what()
                      << END << '\n';
        }
    }

    {
        std::cout << COLOR_ON_MAGENTA
                  << "--INTERN PRESIDENT--INTERN PRESIDENT--INTERN PRESIDENT"
                  << END << std::endl;
        delimiter std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
                            << " [CUSTOM TEST 2] " << std::string(20, '*')
                            << END << std::endl;
        try {
            Intern intern2;
            delimiter Form *form2 =
                intern2.makeForm("presidential pardon", "University");
            delimiter std::cout << COLOR_ON_CYAN << COLOR_BOLD
                                << form2->getName() << END << std::endl;
            delimiter delete form2;
        } catch (const std::exception &e) {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what()
                      << END << '\n';
        }
    }

    {
        std::cout << COLOR_ON_MAGENTA
                  << "--INTERN ROBOTOMY--INTERN ROBOTOMY--INTERN ROBOTOMY"
                  << END << std::endl;
        delimiter std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
                            << " [CUSTOM TEST 3] " << std::string(20, '*')
                            << END << std::endl;
        try {
            Intern intern3;
            delimiter Form *form3 =
                intern3.makeForm("robotomy request", "University");
            delimiter std::cout << COLOR_ON_CYAN << COLOR_BOLD
                                << form3->getName() << END << std::endl;
            delimiter delete form3;
        } catch (const std::exception &e) {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what()
                      << END << '\n';
        }
    }

    {
        std::cout << COLOR_ON_MAGENTA
                  << "--INTERN ERROR--INTERN ERROR--INTERN ERROR" << END
                  << std::endl;
        delimiter std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
                            << " [CUSTOM TEST 4] " << std::string(20, '*')
                            << END << std::endl;
        try {
            Intern intern4;
            delimiter Form *form4 =
                intern4.makeForm("robotomy requRst", "University");
            delimiter std::cout << COLOR_ON_CYAN << COLOR_BOLD
                                << form4->getName() << END << std::endl;
            delimiter delete form4;
        } catch (const std::exception &e) {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what()
                      << END << '\n';
        }
    }
}
