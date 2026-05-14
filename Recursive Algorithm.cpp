//A Recursive Algorithm is a method where a function calls itself to solve a 
//problem. It breaks a large problem into smaller, simpler sub-problems of 
//the same type.Every recursive function must have:
//Base Case: A condition to stop the recursion (so it doesn't run forever).
//Recursive Step: The part where the function calls itself with a smaller value

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {        
        return 1;
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    cout << "Factorial of 3 is: " << factorial(3);
    return 0;
}
