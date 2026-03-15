#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int p = 0; p < t; p++)
    {

        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            int nm = a[i];
            int loc = i;
            for (int j = i; j < n; j++)
            {
                if (a[j] < nm)
                {
                    nm = a[j];
                    loc = j;
                }
            }
            swap(a[i], a[loc]);
        }

        long long final = 1;
        long long test[n];

        for (int i = 0; i < n; i++)
        {
            int w = (n - i);

            if (w > 0)
            {
                for (int k = 0; k < n; k++)
                {

                    if (w >= b[k])
                    {
                        flag += 1;
                        w = w - b[k];
                    }
                    else
                    {
                        final = (long long)a[i] * flag;
                        test[i] = final;
                        flag = 0;
                        break;
                    }

                    if (k == n - 1)
                    {
                        final = (long long)a[i] * flag;
                        test[i] = final;
                        flag = 0;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            long long ab = test[i];
            int loca = i;
            for (int j = i; j < n; j++)
            {
                if (test[j] < ab)
                {
                    ab = test[j];
                    loca = j;
                }
            }
            swap(test[i], test[loca]);
        }

        cout << test[(n - 1)] << endl;
    }
}