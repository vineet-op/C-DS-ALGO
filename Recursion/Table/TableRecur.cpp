
#include <iostream>

using namespace std;

void table(int n, int i)
{
    if (i > 10)

        return;
    cout << n * i
         << endl;

    return table(n, i + 1);
}

int main()
{
    int n = 2;

    table(n, 1);
    return 0;
}