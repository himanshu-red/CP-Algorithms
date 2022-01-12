#include <bits/stdc++.h>
using namespace std;
void  numsInWords(int n, string& s)
{
    if (n == 0)
        return ;
    numsInWords(n / 10, s);
    switch (n % 10)
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
}
int main()
{
    int n;
    string s;
    cin >> n;
    numsInWords(n, s);
    cout << s << endl; 
}
