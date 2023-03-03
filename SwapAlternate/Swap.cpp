#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//* Main Logic
void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i = i + 2)
    {

        if (i + 1 < size)
        {
            // swap(arr[i], arr[i + 1]);

            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i] = temp;
        }
    }
}

int main()
{

    int even[6] = {5, 7, 6, 8, 1, 3};

    int odd[5] = {100, 25, 5, 78, 5};

    swapAlternate(even, 6);
    printArray(even, 6);

    swapAlternate(odd, 5);
    printArray(odd, 5);
}