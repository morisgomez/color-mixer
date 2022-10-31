#include <iostream>
#include <string>
using namespace std;

int main ()
{
    for (;;) //infinite loop to hinder consistently re-running program in IDE. 
    {
        cout << "enter your first primary color (yellow, red, blue): ";
        string firstPrimary;
        cin >> firstPrimary;
        cout << "enter your second primary color (yellow, red, blue) ";
        string secondPrimary;
        cin >> secondPrimary;
        string secondary;
        //selection statements below
        if (firstPrimary == "yellow" || secondPrimary == "yellow")
        {
            if (firstPrimary == "blue" || secondPrimary == "blue") //for green.
            {
                secondary = "green";
                cout << "your secondary color is " << secondary << ". \n \n";
            }
            else if (firstPrimary == "red" || secondPrimary == "red") //for red.
            {
                secondary = "orange";
                cout << "your secondary color is " << secondary << ". \n \n";
            }
            else
            {
                cout << "ERROR: ENTER VALID INPUT \n \n"; //for invalid inputs.
            }
        }
        else if (firstPrimary == "red" || secondPrimary == "red") //for purple.
        {
            if (firstPrimary == "blue" || secondPrimary == "blue")
            {
                secondary = "purple";
                cout << "your secondary color is " << secondary << ". \n \n";
            }
            else
            {
                cout << "ERROR: ENTER VALID INPUT \n \n"; //for invalid inputs.
            }
        }
        else
        {
            cout << "ERROR: ENTER VALID INPUT \n \n"; //for invalid inputs.
        }
    }// end of loop
    return 0;
}
