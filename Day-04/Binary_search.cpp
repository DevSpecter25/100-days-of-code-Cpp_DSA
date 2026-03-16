#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int target;
    cin >> target;

    sort(A.begin(), A.end());

    int f = 0;
    int l = n - 1;
    bool found = false;

    while (f <= l)
    {
        int m = f + (l - f) / 2;

        if (A[m] == target)
        {
            cout << "YES";
            found = true;
            break;
        }
        else if (A[m] < target)
        {
            f = m + 1;
        }
        else
        {
            l = m - 1;
        }
    }

    if (!found)
    {
        cout << "NO";
    }
}