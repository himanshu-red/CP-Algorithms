#include <bits/stdc++.h>
using namespace std; 
string numsInWords(int n, string s)
{
    if (n == 0)
        return s;
    int tens = pow(10, floor(log10(n))); 
    switch (n / tens)
    {
        case 0:
            s += "zero "; 
            break; 

        case 1:
            s += "one "; 
            break; 
        case 2:
            s += "two "; 
            break;

        case 3:
            s += "three ";
            break;

        case 4:
            s += "four ";
            break;

        case 5:
            s += "five ";
            break;

        case 6:
            s += "six ";
            break;

        case 7:
            s += "seven ";
            break;

        case 8:
            s += "eight ";
            break;

        case 9:
            s += "nine ";
            break;
    }
    return numsInWords(n%tens, s); 
}
int main()
{
    int n; 
    string s; 
    cin >> n; 
    cout << numsInWords(n, s); 
}
