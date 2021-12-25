#include <bits/stdc++.h>
using namespace std;
int euclidsGcd(int a, int b)
{

    while (b > 0 && a > 0)
    {
        int temp1 = min(a, b);
        int temp2 = max(a, b);
        temp2 = temp2 % temp1;
        a = temp1;
        b = temp2;
    }
    return max(a, b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << euclidsGcd(a, b);
}