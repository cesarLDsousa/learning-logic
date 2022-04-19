#include <iostream>

int main() 
{
    int counter {0};

    while(counter <=10) 
    {
        std::cout << counter << std::endl;
        counter++;
    }

    std::cout << "The End";

    return 0;
}