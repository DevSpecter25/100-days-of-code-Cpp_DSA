// Leetcode problem: 136. Single Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int singleNumber(vector<int>& nums) ;
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                cout << "Single number is: " << nums[i] << endl;
                return nums[i];
            }
        }
        cout << "Single number is: " << nums.back() << endl;
        return nums.back();
    }
}  