#include <iostream>
using namespace std;

void addNumbers(float n1, float n2, float n3, float n4) {
    float sum = n1 + n2 + n3 + n4;
    cout << "The sum is: " << sum << endl;
}

int main() {
    float a, b, c, d;
    
    cout << "Please Enter 4 Numbers: " << endl;
    cin >> a >> b >> c >> d;
    
    addNumbers(a, b, c, d);
    
    return 0;
}
