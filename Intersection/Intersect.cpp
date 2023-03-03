#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;

while (i < n && j < m)
{
    if (arr1[i] == arr2[j])
    {
        ans.push_back(arr1[i])

            i++;
        j++;
    }

    else if (arr1[i] < arr2[j])
    {

        i++;
    }

    else
    {

        j++;
    }

    return ans;
}

int main()
{
}