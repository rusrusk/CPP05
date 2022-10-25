#include "Bureucrat.hpp"

int main() {
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 1] " << std::string(20, '*') << END
              << std::endl;
    {
        std::cout << COLOR_BOLD_GREEN
                  << "***********Welcome to Bureaucratic Machine*************"
                  << END << std::endl;
        try {
            Bureucrat person1;
            std::cout << COLOR_ITALIC << COLOR_CYAN << COLOR_BOLD << person1
                      << END;
            person1.incrementGrade();
            person1.incrementGrade();
            person1.decrementGrade();
        } catch (const std::exception& e) {
            std::cerr << COLOR_STRIKETHROUGH << COLOR_BRIGHT_RED
                      << "EXCEPTION CAUGHT: " << e.what() << END << std::endl;
        }
    }
    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 2] " << std::string(20, '*') << END
              << std::endl;
    {
        std::cout << COLOR_BOLD_GREEN
                  << "***********Welcome to Bureaucratic Machine*************"
                  << END << std::endl;
        try {
            Bureucrat person2("Ruslan", 3);
            std::cout << COLOR_ITALIC << COLOR_CYAN << COLOR_BOLD << person2
                      << END;
            for (int i = 0; i < 3; i++) {
                person2.decrementGrade();
            }
            for (int i = 0; i < 6; i++) {
                person2.incrementGrade();
            }

        } catch (const std::exception& e) {
            std::cerr << COLOR_STRIKETHROUGH << COLOR_BOLD_RED
                      << "EXCEPTION CAUGHT: " << e.what() << END << std::endl;
        }
    }

    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 3] " << std::string(20, '*') << END
              << std::endl;
    {
        std::cout << COLOR_BOLD_GREEN
                  << "***********Welcome to Bureaucratic Machine*************"
                  << END << std::endl;
        try {
            Bureucrat person3("The Rock", 151);
            std::cout << COLOR_ITALIC << COLOR_CYAN << COLOR_BOLD << person3
                      << END;
        } catch (const std::exception& e) {
            std::cerr << COLOR_STRIKETHROUGH << COLOR_BOLD_RED
                      << "EXCEPTION CAUGHT: " << e.what() << END << std::endl;
        }
    }

    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 4] " << std::string(20, '*') << END
              << std::endl;
    {
        std::cout << COLOR_BOLD_GREEN
                  << "***********Welcome to Bureaucratic Machine*************"
                  << END << std::endl;
        try {
            Bureucrat person3("Bruce Lee", 2);
            std::cout << COLOR_ITALIC << COLOR_CYAN << COLOR_BOLD << person3
                      << END;
            person3.incrementGrade();
            person3.incrementGrade();
            person3.decrementGrade();
        } catch (const std::exception& e) {
            std::cerr << COLOR_STRIKETHROUGH << COLOR_BOLD_RED
                      << "EXCEPTION CAUGHT: " << e.what() << END << std::endl;
        }
    }

    std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60, '=')
              << END << std::endl;
    std::cout << COLOR_BOLD_YELLOW << std::string(20, '*')
              << " [CUSTOM TEST 5] " << std::string(20, '*') << END
              << std::endl;
    {
        std::cout << COLOR_BOLD_GREEN
                  << "***********Welcome to Bureaucratic Machine*************"
                  << END << std::endl;
        try {
            Bureucrat person4("John Wick", 0);
            std::cout << COLOR_ITALIC << COLOR_CYAN << COLOR_BOLD << person4
                      << END;
        } catch (const std::exception& e) {
            std::cerr << COLOR_STRIKETHROUGH << COLOR_BOLD_RED
                      << "EXCEPTION CAUGHT: " << e.what() << END << std::endl;
        }
    }

    // {
    // 	std::cout << "create bureaucrats" << std::endl;
    // 	Bureucrat person1("Batman", 50);
    // 	std::cout << person1 << std::endl;
    // 	Bureucrat *person2 = new Bureucrat("Joker", 20);
    // 	std::cout << person2 << std::endl;

    // 	std::cout << COLOR_BOLD << COLOR_BRIGHT_DARK_GREY << std::string(60,
    // '=') << END << std::endl;

    // 	std::cout << "copy bureaucrats" << std::endl;
    // 	Bureucrat person3(person1);
    // 	std::cout << person3 << std::endl;
    // 	Bureucrat *person4 = new Bureucrat(*person2);
    // 	std::cout << person4 << std::endl;

    // 	delete(person2);
    // 	delete(person4);
    // }
}
