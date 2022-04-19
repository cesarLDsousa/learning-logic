#include <iostream>
#include <string>

int main() {

    int oFood, oDrink, oDessert;
    std::string foodChoice, drinkChoice, dessertChoice;
    float foodPrice, drinkPrice, dessertPrice, total;

    std::cout << "Choose something to eat (1 to 4): " << std::endl;
    std::cin >> oFood;
    std::cout << "Inform the code for the drink (5 or 6): " << std::endl;
    std::cin >> oDrink;
    std::cout << "Now, the dessert (7 to 9): " << std::endl;
    std::cin >> oDessert;

    switch (oFood) {

        case 1:
            foodChoice = "HAMBURGER";
            foodPrice = 30.5;
            break;
        case 2:
            foodChoice = "CHEESEBURGER'";
            foodPrice = 25.5;
            break;
        case 3:
            foodChoice = "HOT DOG";
            foodPrice = 18;
            break;
        case 4:
            foodChoice = "SANDWICH";
            foodPrice = 20.5;
            break;
        default:
            foodChoice = "INVALID";
            foodPrice = 0;
            break;
    }

    switch (oDrink) {
        case 5:
            drinkChoice = "DIET COKE";
            drinkPrice = 6.5;
            break;
        case 6:
            drinkChoice = "GRAPE JUICE";
            drinkPrice = 9.5;
            break;
        default:
            drinkChoice = "INVALID";
            drinkPrice = 0;
            break;
    }

    switch (oDessert) {
        case 7:
            dessertChoice = "MilkShake";
            dessertPrice = 15.5;
            break;
        case 8:
            dessertChoice = "White Cake";
            dessertPrice = 20;
            break;
        case 9:
            dessertChoice = "Vanilla Ice Cream";
            dessertPrice = 15;
            break;
        default:
            dessertChoice = "INVALID";
            dessertPrice = 0;
            break;
    }

    total = foodPrice + drinkPrice + dessertPrice;

    std::cout << "ORDER: " << std::endl;
    std::cout << foodChoice << "...............$" << foodPrice << std::endl;
    std::cout << drinkChoice << "...............$" << drinkPrice << std::endl;
    std::cout << dessertChoice << "...............$" << dessertPrice << std::endl;
    std::cout << "TOTAL: $" << total;

    return 0;
}