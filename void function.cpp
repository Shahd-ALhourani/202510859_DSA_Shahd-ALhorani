//Yes, a void function can take parameters.

#include <iostream>
using namespace std;

void checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        cout << "The number " << number << " is Even." << endl;
    } else {
        cout << "The number " << number << " is Odd." << endl;
    }
}

int main() {
    int userInput;

    cout << "please Enter a number to check: ";
    cin >> userInput;

    checkEvenOrOdd(userInput);

    return 0;
}
