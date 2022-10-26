#include "Bureucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
    // {
    // delimiter
    // std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
    //           << " [CUSTOM TEST 1] " << std::string(20, '*') << END
    //           << std::endl;
    //     try
    //     {
    //         Bureucrat  person1("Spiderman", 144);
    //         delimiter
    //         person1.decrementGrade();
    //         delimiter
    //         Form *contract1 = new ShrubberyCreationForm("Perfume");
    //         delimiter
    //         person1.signForm(*contract1);
    //         contract1->execute(person1);
    //         delimiter
    //     }
    //     catch(const std::exception& e)
    //     {
    //         std::cerr << e.what() << '\n';
    //     }
    // }


    // {

    // delimiter
    // std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
    //           << " [CUSTOM TEST 2] " << std::string(20, '*') << END
    //           << std::endl;
    //     try
    //     {
    //         Bureucrat  person2("Iron Man", 149);
    //         ShrubberyCreationForm contract2("Furniture");

    //         delimiter
    //         std::cout << contract2;
    //         delimiter
    //         contract2.execute(person2);
    //         delimiter
    //     }
    //     catch(const std::exception& e)
    //     {
    //         std::cerr << e.what() << '\n';
    //     }
        
    // }

    {
    delimiter
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 3] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureucrat  person3("The Thor", 146);
            ShrubberyCreationForm contract3("The Wardrobe");

            std::cout << contract3;
            delimiter
            contract3.beSigned(person3);
            delimiter
            contract3.execute(person3);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    {
    delimiter
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 4] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureucrat  person3("The Thor", 146);
            ShrubberyCreationForm contract3("The Wardrobe");

            std::cout << contract3;
            delimiter
            contract3.beSigned(person3);
            delimiter
            contract3.execute(person3);
            delimiter
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
        
}