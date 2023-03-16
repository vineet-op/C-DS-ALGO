#include <iostream>

using namespace std;

int n = 5;
char arr[5];
void accept()
{

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the array";
        cin >> arr[i];
    }
}

void display()
{

    cout << "Array elements are:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{

    accept();
    display();

    return 0;
}