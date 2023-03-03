
// Todo Finding unique numbers from the Array !!!

#include <iostream>

using namespace std;

//*Main logic
void findUnique(int arr[], int size)
{
    // XOR Operation
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    return 0;
}