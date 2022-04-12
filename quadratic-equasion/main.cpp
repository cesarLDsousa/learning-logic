#include <iostream>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    std::cout << "Inform the value of a, b and c: " << std::endl;
    std::cin >> a >> b >> c;
    delta = powf(b,2) - 4 * a * c;
    x1 = (-(b) + sqrt(delta)) / 2 * a;
    x2 = (-(b) - sqrt(delta)) / 2 * a; 

    if (delta < 0) {
        std::cout << "There is not real roots";
    }
    else {
        std::cout << "The x1 is " << x1 << "and x2 is " << x2; 
    } 

    return 0;
}