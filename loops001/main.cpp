#include <iostream>

// quer informar um valor [S/N]?
// qual valor? 

int main() {

    float number;
    char answer;

    do {
        
        std::cout << "Inform a value: " << std::endl;
        std::cin >> number;
        std::cin.ignore();

        std::cout << "Do u wanna inform another value? " << std:: endl;
        std::cin >> answer;
        answer = toupper(answer);
        
    } while(answer == 'S');

    return 0;
}