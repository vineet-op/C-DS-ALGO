
// Finding numbers in an array which return sum of a numbers

for (int i = 0; i < arr.size(); i++)
{
    for (j = i + 1; i < arr.size(); j++)
    {

        if (arr[i] + arr[j] == s)
        {
            vector<int> temp;
            temp.push_back(min(arr[i], arr[j]));
            temp.push_back(max(arr[i], arr[j]));
            ans.push_back(temp);
        }
    }
}

sort(ans.begin(), ans.end());
return ans;
