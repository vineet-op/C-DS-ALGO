#include <iostream>
using namespace std;
class Sequential
{
public:
    int n;
    int i;
    int pos = 0;
    void Sequential_search(int array[], int size);
    void Print_array(int array[], int size);
};
void Sequential ::Sequential_search(int array[], int size)
{
    cout << "\n\t Enter the element that you want to search in the array :-";
    cin >> n;
    for (int i = 0; array[i] < n && i < size; i++)
    {
        if (array[i] == n)
        {
            cout << "\n\t The required number is found at this position :" << pos;
        }
        else
        {
            cout << "\n\t The given number is not found ";
        }
    }
}
void Sequential ::Print_array(int array[], int size)
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
    Sequential obj;
    int array[20];
    int size;
    cout << "\n\t How many elementys to store the data :- ";
    cin >> size;
    cout << "\n\t Enter the number :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    obj.Sequential_search(array, size);
    obj.Print_array(array, size);
    return 0;
}