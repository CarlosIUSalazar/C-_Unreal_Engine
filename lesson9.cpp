#include <iostream>
using namespace std;

int main() {
    int a(18); //parenthesis notation, a = 1
    int b = 13;

    if (b > a) {
        cout << "a is less than b" << endl;
    }
    else if (a == b) {
        cout << "b is equal than a" << endl;
    }
    else {
        cout << "b is greater than a" << endl;
    }

    cin.get();

}