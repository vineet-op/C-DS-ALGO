// Merge sort by recursion
#include <iostream>
using namespace std;
class Merge_sort
{
public:
    void Merge(int array[], int low, int high, int mid);
    void Mergesort(int array[], int low, int high);
    void Print_array(int array[], int size);
};
void Merge_sort ::Merge(int array[], int low, int high, int mid)
{
    int i, j, k = 0;
    int c[10];
    i = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (array[i] < array[j])
        {
            c[k] = array[i];
            k++;
            i++;
        }
        else if (array[j] < array[i])
        {
            c[k++] = array[j++];
        }
        else
        {
            c[k++] = array[i++];
            c[k++] = array[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = array[i++];
    }
    while (j < high)
    {
        c[k++] = array[j++];
    }
    for (i = 0, j = low; j <= high, i < k; i++, j++)
    {
        array[j] = c[i];
    }
}
void Merge_sort ::Mergesort(int array[], int low, int high)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        Mergesort(array, low, mid);
        Mergesort(array, mid + 1, high);
        Merge(array, low, mid, high);
    }
}
void Merge_sort ::Print_array(int array[], int size)
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
    Merge_sort obj;
    int array[20];
    int size;
    int low, high;
    cout << "\n\t How many elementys to insert the data :- ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "\n\t Enter the number :- ";
        cin >> array[i];
    }
    cout << "\n\t The array is before sorting elements are = ";
    obj.Print_array(array, size);
    obj.Mergesort(array, low, high);
    cout << "\n\t The array is after sorting elements are = ";
    obj.Print_array(array, size);
    return 0;
}