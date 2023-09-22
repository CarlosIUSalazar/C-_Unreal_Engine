#include <iostream>
using namespace std; //we want to use standard namespace (such as cout) so it doesnt have to be prefaces by std::

int main() {
    char myCharacter;
    myCharacter = 'y'; //'' is for single characters "" is for strings

    int myInt;
    myInt = 13; 
    
    cout << myCharacter << endl; //endl also belongs to std namespace
    cout << myInt << endl;

    myCharacter = 'n';
    myInt = 12;

    cout << myCharacter << endl; //endl also belongs to std namespace
    cout << myInt << endl;

    //system("pause");
    cin.get();

}