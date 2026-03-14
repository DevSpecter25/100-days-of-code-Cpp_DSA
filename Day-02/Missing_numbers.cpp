// Leetcode Problem 268-Missing_Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number at " << i << " index : ";
        cin >> nums[i];
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
        if (nums[i] != i)
        {
            flag = i;
            break;
        }
        else
        {
            flag = size;
        }
    }

    cout << "This number is missing in Sorted Array : " << flag;
}