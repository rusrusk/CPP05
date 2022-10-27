#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
    {
    delimiter
    std::cout << COLOR_ON_MAGENTA << "--SHRUBBERY--SHRUBBERY--SHRUBBERY" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 1] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person1("Harry Potter", 144);
            ShrubberyCreationForm contract1("Hogwarts");
            delimiter
            person1.decrementGrade();

            delimiter
            std::cout << person1;
            std::cout << contract1;
            
            delimiter
            contract1.setIsSigned(true);
            contract1.execute(person1);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
    }


    {

    delimiter
     std::cout << COLOR_ON_MAGENTA << "--SHRUBBERY--SHRUBBERY--SHRUBBERY" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 2] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person2("Iron Man", 149);
            ShrubberyCreationForm contract2("Furniture");

            delimiter
            std::cout << contract2;
            delimiter
            contract2.execute(person2);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
        
    }

    {
    delimiter
    std::cout << COLOR_ON_MAGENTA << "--SHRUBBERY--SHRUBBERY--SHRUBBERY" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 3] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person3("The Thor", 136);
            ShrubberyCreationForm contract3("Wardrobe");

            std::cout << contract3;
            delimiter
            contract3.beSigned(person3);
            delimiter
            contract3.execute(person3);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
    }

    {
    delimiter
     std::cout << COLOR_ON_MAGENTA << "--ROBOTOMY--ROBOTOMY--ROBOTOMY" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 4] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person4("The Black Adam ", 140);
            RobotomyRequestForm contract4("Auto");

            std::cout << contract4;
            delimiter
            contract4.execute(person4);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
    }

    {
    delimiter
     std::cout << COLOR_ON_MAGENTA << "--ROBOTOMY--ROBOTOMY--ROBOTOMY" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 5] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person5("Flash Man ", 140);
            RobotomyRequestForm contract5("Auto");

            std::cout << contract5;
            delimiter
            person5.signForm(contract5);
            contract5.execute(person5);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
    }

    {
    delimiter
     std::cout << COLOR_ON_MAGENTA << "--ROBOTOMY--ROBOTOMY--ROBOTOMY" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 6] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person6("The Hulk", 40);
            RobotomyRequestForm contract6("Auto");

            std::cout << contract6;
            delimiter
            contract6.beSigned(person6);
            contract6.execute(person6);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
    }

    {
    delimiter
     std::cout << COLOR_ON_MAGENTA << "--PRESIDENTIAL--PRESIDENTIAL--PRESIDENTIAL" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 7] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person7("Captain America", 15);
            PresidentialPardonForm contract7("Ceiling");

            std::cout << contract7;
            delimiter
            
            contract7.execute(person7);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
    }

    {
    delimiter
     std::cout << COLOR_ON_MAGENTA << "--PRESIDENTIAL--PRESIDENTIAL--PRESIDENTIAL" << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 8] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureaucrat  person8("Doctor Strange", 5);
            PresidentialPardonForm contract8("Axe");

            std::cout << contract8;
            delimiter
            contract8.beSigned(person8);
            person8.executeForm(contract8);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << '\n';
        }
    }


}