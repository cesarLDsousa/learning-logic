#include <iostream>

int main()
{
    int number {6}, input;

    std::cout << " >> GUESS THE NUMBER! << " << std::endl;

    do 
    {
        std::cout << "Inform a value between 0 and 9: " << std::endl;
        std::cin >> input;

    } while(input != number);

    std::cout << "Win!" << std::endl;

    return 0;
}