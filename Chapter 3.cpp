#include <iostream>


void checkLeapYear(int x) {
    if (x % 4  == 0) {
        std::cout << "Your number can be divided by 4\n";
        if (x % 100 == 0) {
            if (x % 400 == 0) {
                std::cout << x << " is a leap year!\n";
            }
            else {
                
                std::cout << "Not a leap year!, sorry.\n";
            }
        }
        else {
            std::cout << "Your number cannot be exactly divided by a hundred!  " << x << " is a leap year!\n";
        }
    }
    else {
        std::cout << "Your year cannot be divided by 4 so not a leap year!, sorry.\n";
        
    }
}

int isNonZero(int x) {
    return bool(x);
}

void returnFactorial() {
    int x = -1, i = 1;
    while (x != abs(x) || x == 0) {
          std::cout << "Please input a positive number\n";
          std::cin >> x;
      
    }
    //make sure its a psotive int
    std::cout << "The factors of " << x << " are :";
    //factor it
    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            std::cout << i << " ";
        }
    }
}

int main()
{
    int userInput;
    std::cout << "Hello User,  Please enter an integer (year) so that I may check to see if it a leap year\n";
    std::cin >> userInput;
    while (userInput != abs(userInput) || userInput == 0) {
        std::cout << "Please input a positive number\n";
        std::cin >> userInput;

    }
    checkLeapYear(userInput);
    std::cout << "Hello User,  Please enter an integer so that I may return the factors of i\n";
    returnFactorial();

}
