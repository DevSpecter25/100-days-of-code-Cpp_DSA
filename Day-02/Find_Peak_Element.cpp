// Leetcode Problem 162 - Find_Peak_Element

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int nums[n];
    int count[n];
    int a;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number at " << i << " index : ";
        cin >> a;
        nums[i]= a;
        count[i]=a;

    }

    int size = (sizeof(nums) / 4);
    int flag;

    for (int i = 0; i < size; i++)
    {
        int nm = nums[i];
        int loc = i;
        for (int j = i; j < size; j++)
        {
            if (nums[j] < nm)
            {
                nm = nums[j];
                loc = j;
            }
        }
        swap(nums[i], nums[loc]);
    }

    for (int i = 0; i < size; i++)
    {
        if(count[i]==nums[size-1])
        {
            cout << i;
        }
    }
    return 0;
}