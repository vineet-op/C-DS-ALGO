// Initializing an huge array with only single value

#include <iostream>
using namespace std;

int value = 1;
int numbers[100];
int second[15] = {8, 7, 6};

// Function in array

void printArray(int arr[], int size)
{
    cout << " Printing the array ";

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}
int main()
{
    int fouth[15] = {1, 5, 9, 7};

    printArray(fouth, 2);

    // for (int i = 0; i < 100; i++)
    // {
    //     numbers[i] = 10;
    // }

    // for (int i = 0; i < 100; i++)
    // {
    //     cout << numbers[i] << " ";
    // }

    // for (int i = 0; i < 15; i++)
    // {

    //     cout << second[i] << " ";
    // }
}