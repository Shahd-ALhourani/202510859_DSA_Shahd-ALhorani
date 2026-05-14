#include <iostream>
#include <string> 
using namespace std;
void message(string userName) {
    cout << "Congratulations " << userName << endl;
}

int main() {
    string us; 
    cout << "Please Enter user name: ";
    cin >> us;
    message(us); 

    return 0;
}
