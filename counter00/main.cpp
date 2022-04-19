#include <iostream>

int main() 
{
    int counter {0}, userValue;

    std::cout << "Inform a value: " << std::endl;
    std::cin >> userValue;

    while(counter <=10) 
    {
        std::cout << counter << std::endl;
        counter +=userValue;
    }

    std::cout << "The End";

    return 0;
}