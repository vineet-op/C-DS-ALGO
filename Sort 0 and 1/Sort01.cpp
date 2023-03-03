#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        while (arr[left] == 0)
        {
            left++;
        }

        while (arr[right] == 1)
        {
            right--;
        }

        // agar yaha pohoch gaye toh iska matlab
        //  arr[left] == 1 or arr[right] == 0 toh swap kardo

        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{

    int arr[10] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 0};

    sortOne(arr, 10);
    printArray(arr, 10);

    return 0;
}