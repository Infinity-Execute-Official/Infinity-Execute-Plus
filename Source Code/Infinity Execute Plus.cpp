// Libraries

#include <iostream>
#include "Libraries/Linkers/ioprocessor-linker.h"

// Variables And Constants

std::string command;
bool is_command;

// Program

int main() {
    std::cout << "Infinity Execute Plus 1.0\n\n";
    while (true) {
        std::cout << "IE+ > ";
        is_command = false;
        std::getline(std::cin, command);
        if (command.rfind("print ", 0) == 0) {
            is_command = true;
            print(command, is_command);
        }
        if (command == "print") {
            is_command = true;
            std::cout << "\nError: No requested output to print.\n\n";
        }
        if (command == "help") {
            is_command = true;
            std::cout << "\nAvailable Commands:\nprint \"text\" - Prints the requested text string to the console.\nhelp - Displays this help message.\nclear - Clears the console.\nexit - Terminates the virtual machine and closes the console.\n\n";
        }
        if (command == "clear") {
            is_command = true;
            system("cls");
            std::cout << "Console Cleared\n\n";
        }
        if (command == "exit") {
            is_command = true;
            break;
        }
        if (command.empty()) {
            is_command = true;
        }
        else if (is_command == false) {
            std::cout << "\nUnknown Command: " << command << "\n\n";
        }
    }
    return 0;
}