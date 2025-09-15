#include <iostream> 

int main ()
{

int int1, int2, sum, difference, product, arithmethic;
double quotient;

ReturnPoint:
std:: cout << "Input two integers: ";
std::cin >> int1 >> int2;

std::cout<< "which operation should the program use?\n 1:add\n 2:subtract\n 3:multiply\n 4:divide\n  \n(0 to exit)\n";
std::cin >> arithmethic;
switch (arithmethic)
{
case 1:
     sum = int1 + int2;
     std::cout << "Sum: " << sum << "\n";
    break;
case 2:
    difference = int1 - int2;
    std::cout << "Diff: " << difference << "\n";
    break;
case 3:
    product = int1 * int2;
    std::cout << "Product: " << product << "\n";
    break;
case 4:
    quotient = int1 / int2;
    std::cout << "quotient: " << quotient << "\n";
    break;

default:
std::cout << "Thank you for using the program";
    break;
}
if (arithmethic != 0) {
    goto ReturnPoint;
} else { 
    std::cout << " Thank you for using the program";
}
    return 0;
}