#include <stdio.h>
#include <vector>

using namespace std;

// Xor ing all elememts
int findDuplicate(vector<int>, int arr[])
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    // Xor ing from [1 to n-1]
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
}