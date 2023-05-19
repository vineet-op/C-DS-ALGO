//* Using Procedural oriented
/*
#include <iostream>
    using namespace std;

int main()
{

    int size, arr[50], temp;

    cout << "Enter The size of the array"
         << " ";
    cin >> size;

    cout << "Enter the elements"
         << " ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j <= size - 1; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    cout << "The sorted arra is";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
        cout << "\n";
    }
}
*/

//* Functional Programming

#include <iostream>
using namespace std;
class Sort
{
public:
    int i, j, n, t;
    int array[20];
    int size;

public:
    void bubble_sort();
    void Print_array();
};
void Sort ::bubble_sort()
{
    cout << "\n\t How many elementys to insert the data ";
    cin >> size;
    cout << "\n\t Enter the number ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (j = 0; j < size - 1; j++)
    {
        for (i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                t = array[i];
                array[i] = array[i + 1];
                array[i + 1] = t;
            }
        }
    }
}
void Sort ::Print_array()
{
    cout << "\n\t The elements are ";
    for (int i = 0; i < size; i++)
    {
        cout << "   " << array[i];
    }
    cout << "\n";
}
int main()
{
    Sort obj;
    obj.bubble_sort();
    cout << "\n\t The sorrted array is ";
    obj.Print_array();
    return 0;
}
