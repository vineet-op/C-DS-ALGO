#include <iostream>
using namespace std;

void print(int i)
{

    if (i <= 10)
    {
        cout << i << endl;
        print(i + 1);
    }
}

int main()
{

    print(1);

    return 0;
}