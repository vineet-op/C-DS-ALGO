#include <iostream>
using namespace std;
class Insertion
{
public:
    int i, j, value;

public:
    void Insertion_sort(int array[], int size);
    void Print_array(int array[], int size);
};
void Insertion ::Insertion_sort(int array[], int size)
{
    for (i = 1; i < size; i++)
    {
        value = array[i];
        for (j = i - 1; j > 0 && array[j] > value; j--)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = value;
    }
}
void Insertion ::Print_array(int array[], int size)
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
    Insertion obj;
    int array[20];
    int size;
    system("clear");
    cout << "\n\t How many elementys to insert the data :- ";
    cin >> size;
    cout << "\n\t Enter the number :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "\n\t The array is before sorting elements are = ";
    obj.Print_array(array, size);
    obj.Insertion_sort(array, size);
    cout << "\n\t The array is after sorting elements are = ";
    obj.Print_array(array, size);
    return 0;
}