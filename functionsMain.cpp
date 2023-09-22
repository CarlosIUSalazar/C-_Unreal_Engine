#include <iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void askYesOrNoQuestion();

int main()
{
    //Asks user to enter y or n and returns the reponse
    askYesOrNoQuestion();
}

void welcome()
{
    // Welcome the user to the program
    cout << "Welcome\n";
}

char getYesNo()
{
    //Ask the user to enter y or n
    cout << "Please answer Y or N. \n";
    //char variable to store response
    char response;
    //get input response from screen
    cin >> response;
    return response;
}

void printResponse(char responseToPrint)
{
    //Print the response to the screen
    cout << "Your answer was:" << responseToPrint << endl;
}

void askYesOrNoQuestion()
{
    welcome();
    char answer = getYesNo();
    printResponse(answer);
    cin.get();
}