#include <iostream>

int main() {
    int sum = 0;
    std::cout << "Enter amount: ";
    std::cin >> sum;

    int multiplicity = 0;
    int denomination5000 = 0;
    int denomination2000 = 0;
    int denomination1000 = 0;
    int denomination500 = 0;
    int denomination200 = 0;
    int denomination100 = 0;

    if (sum % 100 || sum > 150000)
        std::cout << "Enter an amount that is a multiple of 100 and not more than 150,000." << std::endl;
    else
    {
        if (sum >= 5000)
        {
            multiplicity = sum / 5000;
            sum -= multiplicity * 5000;
            denomination5000 = multiplicity;
        }
        if (sum >= 2000)
        {
            multiplicity = sum / 2000;
            sum -= multiplicity * 2000;
            denomination2000 = multiplicity;
        }
        if (sum >= 1000)
        {
            multiplicity = sum / 1000;
            sum -= multiplicity * 1000;
            denomination1000 = multiplicity;
        }
        if (sum >= 500)
        {
            multiplicity = sum / 500;
            sum -= multiplicity * 500;
            denomination500 = multiplicity;
        }
        if (sum >= 200)
        {
            multiplicity = sum / 200;
            sum -= multiplicity * 200;
            denomination200 = multiplicity;
        }
        if (sum == 100)
        {
            sum -= 100;
            denomination100 = 1;
        }
        if (sum == 0)
        {
            std::cout << "5000 banknotes = " << denomination5000 << std::endl;
            std::cout << "2000 banknotes = " << denomination2000 << std::endl;
            std::cout << "1000 banknotes = " << denomination1000 << std::endl;
            std::cout << "500 banknotes = " << denomination500 << std::endl;
            std::cout << "200 banknotes = " << denomination200 << std::endl;
            std::cout << "100 banknotes = " << denomination100 << std::endl;
        }
    }
}
