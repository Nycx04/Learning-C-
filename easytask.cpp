#include <iostream>

int main () {

std::string Name;

int WholeNumber1, WholeNum2;
int sum, difference, product;
float quotient;


std::cout<< "input two whole numbers:  ";
std::cin >> WholeNumber1 >> WholeNum2;
std::cout << "  " << WholeNumber1 << "   " << WholeNum2 << std::endl;

sum = WholeNumber1 + WholeNum2;
difference = WholeNumber1 - WholeNum2;
product = WholeNumber1 * WholeNum2;

bool ZeroDivision = (WholeNum2 != 0);

quotient = ZeroDivision * (WholeNumber1) / (WholeNum2 + 1);


std::cout << "Sum: " << sum << "\n";
std::cout << "Difference: " << difference << "\n";
std::cout << "Product: " << product << "\n";
std::cout << "Quotient: " << quotient << "\n";
    return 0;
}