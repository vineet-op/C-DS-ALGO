// Recursion is the process of repeating the functions
// WrITE A PROGRAM TO PRINT HELLO 5 TIMES USING RECURSION

#include <iostream>
using namespace std;

void msg(int a) //* Use a as a counter
{

    if (a <= 5) //*Condition
    {
        cout << "Hello" << endl;
        msg(a + 1); //* Incremnet or decrement
    }
}

int main()
{
    msg(1); //*Starting from initial value
    return 0;
}