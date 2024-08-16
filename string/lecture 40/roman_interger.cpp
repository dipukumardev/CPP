#include <bits/stdc++.h>
using namespace std;

// Create a function to convert the Roman to interger;

int num(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    else if (c == 'V')
    {
        return 5;
    }
    else if (c == 'X')
    {
        return 10;
    }
    else if (c == 'L')
    {
        return 50;
    }
    else if (c == 'C')
    {
        return 100;
    }
    else if (c == 'D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}
int main()
{
    string Roman = "III";
    int sum = 0;
    int index = 0;

    while (index < Roman.size() - 1)
    {
        if (num(Roman[index]) < num(Roman[index + 1]))
        {
            sum -= num(Roman[index]);
        }

        else
        {
            sum += num(Roman[index]);
        }
        index++;
    } // End of the while loop;
    sum += num(Roman[Roman.size() - 1]);
    cout<<sum;
}