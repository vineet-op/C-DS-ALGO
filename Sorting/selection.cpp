#include <iostream>
using namespace std;
class Selection
{
public:
    int j, i, min, pos;

public:
    void Selection_sort(int array[], int size);
    void Print_array(int array[], int size);
};
void Selection ::Selection_sort(int array[], int size)
{
    for (j = 0; j < size; j++)
    {
        min = array[j];
        pos = j;
        for (i = j + 1; i < size; i++)
        {
            if (min > array[i])
            {
                min = array[i];
                pos = i;
            }
        }
        array[pos] = array[j];
        array[j] = min;
    }
}
void Selection ::Print_array(int array[], int size)
{
    cout << "\n\t The elements are = ";
    for (int i = 0; i < size; i++)
    {
        cout << "   " << array[i];
    }
    cout << "\n";
}
int main()
{
    Selection obj;
    int array[20];
    int size;
    cout << "\n\t How many elementys to insert the data :- ";
    cin >> size;
    cout << "\n\t Enter the number :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "\n\t The array is before sorting elements are = ";
    obj.Print_array(array, size);
    obj.Selection_sort(array, size);
    cout << "\n\t The array is after sorting elements are = ";
    obj.Print_array(array, size);
    return 0;
}