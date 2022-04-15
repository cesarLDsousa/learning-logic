#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Hello, what is u age, bro/sis? " << std::endl;
    std::cin >> age;
    std::cout << "Cool! " << age << " is the best age!" << std::endl;
    // *** now, we need to ignore that cin, before we use getline! ***
    std::cin.ignore(); //ignore function 

    std::cout << "What's your name? " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Nice to meet u, " << name << "!";

    system("PAUSE");
    return 0;
}