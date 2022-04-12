#include <iostream>

int main(){
    int age, servTime;
    char genre;
    
    std::cout << "Inform your age: " << std::endl;
    std::cin >> age;
    std::cout << "Inform the service time (in years): " << std::endl;
    std::cin >> servTime;
    std::cout << "Inform your genre (M or F)" << std::endl;
    std::cin >> genre;
    genre = toupper(genre);

    if (genre = 'M') {
        if ((age >= 65) && (servTime >= 30)) {
            std::cout << "Your retirement is avaliable!";
        }
        else {
            std::cout << "Retirement not avaliable";
        }
    
    }
    else {
        if ((age >= 60) && (servTime >= 25)) {
            std::cout << "Your retirement is avaliable";
        }
        else {
            std::cout << "Retirement not avaliable";
        }
    }

    return 0;
}