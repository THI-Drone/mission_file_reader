#include "main.hpp"

int main(int argc, char* argv[]) {
    // Check that a file path was provided as parameter
    if (argc != 2) {
        std::cout << "Please provide a file path as parameter" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "*************************************************"
              << "\n";
    std::cout << "             STARTED CHECKING FILE"
              << "\n";
    std::cout << "*************************************************"
              << std::endl;

    std::string file_path = argv[1];
    mission_file_lib::MissionDefinitionReader mdr;

    try {
        // Check file
        mdr.read_file(file_path, true);
    } catch (const std::runtime_error& e) {
        std::cerr << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
                  << "\n";
        std::cerr << "             FAILED TO PARSE FILE"
                  << "\n";
        std::cerr << "Provided file path: " << file_path << "\nError:\n"
                  << e.what() << "\n";
        std::cerr << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"
                  << std::endl;

        return EXIT_FAILURE;
    }

    std::cout << "*************************************************"
              << "\n";
    std::cout << "           FILE CHECKED SUCCESSFULLY"
              << "\n";
    std::cout << "*************************************************"
              << std::endl;

    return EXIT_SUCCESS;
}
