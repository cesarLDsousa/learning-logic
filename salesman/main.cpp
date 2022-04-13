#include <iostream>

int main() {
    float fixedWage, grossWage, netWage, commLed, commPlasma, tax1, tax2;
    int qtdLed, qtdPlasma; 

    std::cout << "Inform your fixed wage: " << std::endl;
    std::cin >> fixedWage;
    std::cout << "Inform how many LED TV's did you sold: " <<std::endl;
    std::cin >> qtdLed;
    std::cout << "Inform how many Plasma TV's did you sold: " << std::endl;
    std::cin >> qtdPlasma;

    //LED COMMISSION
    if (qtdLed > 15) {
        commLed = 200;
    }
    else {
        commLed = 100;
    }

    //PLASMA COMMISSION
    if (qtdPlasma > 20) {
        commPlasma = 300;
    }
    else {
        commPlasma = 150;
    }

    grossWage = fixedWage + commLed + commPlasma;

    tax1 = fixedWage * 0.1;

    //TAX2
    if (grossWage <= 2500) {
        tax2 = 0;
    }
    else if ((grossWage > 2500) || (grossWage <= 4000)) {
        tax2 = grossWage * 0.1;
    }
    else {
        tax2 = grossWage * 0.135;
    }

    netWage = grossWage - (tax1 + tax2);

    //PRINT RESULTS
    std::cout << "LED Commission = $" << commLed << std::endl;
    std::cout << "Plasma Commission = $" << commPlasma << std::endl;

    std::cout << "Gross Wage = $" << grossWage << std::endl;

    std::cout << "Tax 1 = $" << tax1 << std::endl;
    std::cout << "Tax 2 = $" << tax2 << std::endl;
    std::cout << "Tax 1 + Tax2 = $" << (tax1 + tax2) << std::endl;

    std::cout << "Net Wage = $" << netWage << std::endl;
}
