#include "Bureucrat.hpp"
#include "Form.hpp"


int main() {
    {
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 1] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureucrat  person1();
            Form       contract1();

            std::cout << person1;
            std::cout << contract1;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }


    {
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 2] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureucrat  person1;
            Form       contract1;

            
            std::cout << contract1;
            contract1.beSigned(person1);
            std::cout << contract1;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

    {
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 3] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureucrat  person1;
            Form       contract1("Phone", 10, 10);


            std::cout << contract1;
            contract1.beSigned(person1);
            std::cout << contract1;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    {
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 4] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureucrat  person1;
            Form       contract1("Phone", 10, 10);

            std::cout << person1;
            std::cout << contract1;
            person1.signForm(contract1);
            std::cout << contract1;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    {
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 5] " << std::string(20, '*') << END
              << std::endl;
        try
        {
            Bureucrat  person1;
            Form       contract1("Phone", 10, 151);


            std::cout << contract1;
            contract1.beSigned(person1);
            std::cout << contract1;
        }
        catch(const std::exception& e)
        {
            std::cerr << COLOR_BOLD_RED << COLOR_STRIKETHROUGH << e.what() << END << '\n';
        }
        
    }
}
