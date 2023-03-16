// Maximum and Minimum numbers in CPP
#include <iostream>
using namespace std;

// finding minimum value

int getMin(int num[], int n)
{

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;
}

// finding Maximum numbers

int getMax(int num[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max;
}

int main()
{
    int size;
    cout << "Enter size of the array ";
    cin >> size;

    // declaring array
    int fruits[100];

    // Taking inputs
    cout << "Enter"
         << " " << size << " "
         << "Elements";
    for (int i = 0; i < size; i++)
    {
        cin >> fruits[i];
    }

    cout << "Maximum numbers"
         << " " << getMax(fruits, size) << endl;
    cout << "Minimum numbers"
         << " " << getMin(fruits, size) << endl;
    return 0;
}
