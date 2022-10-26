#include "Bureucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main () {

    delimiter
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 1] " << std::string(20, '*') << END
              << std::endl;
    try {
        Intern intern1;
        Form *form1 = intern1.makeForm("presidential pardon", "University");
        std::cout << form1->getName() << std::endl;
    }
    catch(const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}

// int main() {
//     {
//     delimiter
//     std::cout << COLOR_ON_MAGENTA << "--SHRUBBERY--SHRUBBERY--SHRUBBERY" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 1] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person1("Spiderman", 144);
//             delimiter
//             person1.decrementGrade();
//             delimiter
//             Form *contract1 = new ShrubberyCreationForm("Perfume");
//             delimiter
//             person1.signForm(*contract1);
//             contract1->execute(person1);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }


//     {

//     delimiter
//      std::cout << COLOR_ON_MAGENTA << "--SHRUBBERY--SHRUBBERY--SHRUBBERY" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 2] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person2("Iron Man", 149);
//             ShrubberyCreationForm contract2("Furniture");

//             delimiter
//             std::cout << contract2;
//             delimiter
//             contract2.execute(person2);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
        
//     }

//     {
//     delimiter
//     std::cout << COLOR_ON_MAGENTA << "--SHRUBBERY--SHRUBBERY--SHRUBBERY" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 3] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person3("The Thor", 136);
//             ShrubberyCreationForm contract3("Wardrobe");

//             std::cout << contract3;
//             delimiter
//             contract3.beSigned(person3);
//             delimiter
//             contract3.execute(person3);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }

//     {
//     delimiter
//      std::cout << COLOR_ON_MAGENTA << "--ROBOTOMY--ROBOTOMY--ROBOTOMY" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 4] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person4("The Black Adam ", 140);
//             RobotomyRequestForm contract4("Auto");

//             std::cout << contract4;
//             delimiter
//             contract4.execute(person4);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }

//     {
//     delimiter
//      std::cout << COLOR_ON_MAGENTA << "--ROBOTOMY--ROBOTOMY--ROBOTOMY" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 5] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person5("Flash Man ", 140);
//             RobotomyRequestForm contract5("Auto");

//             std::cout << contract5;
//             delimiter
//             person5.signForm(contract5);
//             contract5.execute(person5);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }

//     {
//     delimiter
//      std::cout << COLOR_ON_MAGENTA << "--ROBOTOMY--ROBOTOMY--ROBOTOMY" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 6] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person6("The Hulk", 40);
//             RobotomyRequestForm contract6("Auto");

//             std::cout << contract6;
//             delimiter
//             contract6.beSigned(person6);
//             contract6.execute(person6);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }

//     {
//     delimiter
//      std::cout << COLOR_ON_MAGENTA << "--PRESIDENTIAL--PRESIDENTIAL--PRESIDENTIAL" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 7] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person7("Captain America", 15);
//             PresidentialPardonForm contract7("Ceiling");

//             std::cout << contract7;
//             delimiter
            
//             contract7.execute(person7);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }

//     {
//     delimiter
//      std::cout << COLOR_ON_MAGENTA << "--PRESIDENTIAL--PRESIDENTIAL--PRESIDENTIAL" << END << std::endl;
//     std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
//               << " [CUSTOM TEST 8] " << std::string(20, '*') << END
//               << std::endl;
//         try
//         {
//             Bureucrat  person8("Doctor Strange", 5);
//             PresidentialPardonForm contract8("Axe");

//             std::cout << contract8;
//             delimiter
//             contract8.beSigned(person8);
//             person8.executeForm(contract8);
//             delimiter
//         }
//         catch(const std::exception& e)
//         {
//             std::cerr << e.what() << '\n';
//         }
//     }

// }