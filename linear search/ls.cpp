#include <iostream>
using namespace std;

//* declaring function
bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{

    // Linear search

    int arr[10] = {10, 54, 45 - 9, -4, -4, 5, 69, 100, 47};
    cout << "Enter the key to search";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }

    return 0;
}