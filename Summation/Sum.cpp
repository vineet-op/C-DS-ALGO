#include <iostream>
using namespace std;

int numbers[50], n, sum = 0;
int main()
{
    cout << "How many elements u want in array";
    cin >> n;

    cout << "enter Elemenmts";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {

        cout << "The elements are"
             << " " << numbers[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + numbers[i];
    }

    cout << " Sum is  " << sum << endl;
}