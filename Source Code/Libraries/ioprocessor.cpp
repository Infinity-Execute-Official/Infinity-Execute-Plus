// Handles Input/Output text-based tasks

// Linker

#include "Linkers/ioprocessor-linker.h"

// Library

void print(std::string& command, bool& is_command) {
    std::string output_string = command.substr(6);
    if (output_string.size() >= 2 && output_string.front() == '"' && output_string.back() == '"') {
        output_string =  output_string.substr(1, output_string.size() - 2);
        std::cout << "\n" << output_string << "\n\n";
    }
}