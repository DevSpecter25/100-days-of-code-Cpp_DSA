#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int Condition1 = 0, Condition2 = 0, Condition3 = 0, Condition4 = 0;

    if (input.size() == 10)
    {
        for (int i = 0; i < input.size(); i++)
        {
            if (int(input[i]) > 64 and int(input[i]) < 91)
            {
                Condition1 += 1;
            }
        }

        for (int i = 0; i < input.size(); i++)
        {
            if (int(input[i]) < 65 and input[i] > 57 || input[i] > 122 || input[i] > 90 && input[i] < 97 || input[i] < 48)
            {
                Condition2 += 1;
            }
        }

        for (int i = 0; i < input.size(); i++)
        {
            if (int(input[i]) > 47 and int(input[i]) < 58)
            {
                Condition3 += 1;
            }
        }

        for (int i = 0; i < input.size(); i++)
        {
            if (int(input[i]) > 96 and int(input[i]) < 123)
            {
                Condition4 += 1;
            }
        }
        if (Condition1 >= 1 && Condition2 >= 1 && Condition3 >= 1 && Condition4 >= 1)
        {
            cout << "Strong";
        }
        else
        {
            cout << "Weak";
        }
    }
    else
    {
        cout << "Weak";
    }
    return 0;
}