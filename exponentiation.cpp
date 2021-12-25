#include <bits/stdc++.h>
using namespace std; 

int calcExp(int b, int e)
{
    int res = 1; 
    while (e != 0)
    {
        if (e % 2)
        {
            e--; 
            res *= b; 
        }
        else 
        {
            e/= 2; 
            b *= b; 
        }
    }
    return res; 
}

int main()
{
    int base; 
    int exp; 
    cin >> base >> exp; 
    cout << calcExp(base, exp) << endl; 
}