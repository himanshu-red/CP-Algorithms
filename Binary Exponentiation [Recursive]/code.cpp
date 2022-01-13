#include <bits/stdc++.h>
using namespace std; 
int calPow(int num, int pow, int res)
{
    if (pow == 1) return num * res; 
    if (pow % 2) return calPow(num, pow-1, res*num); 
    return calPow(num*num, pow/2, res); 
}
int main()
{
    int num, pow; 
    cin >> num >> pow; 
    cout << calPow(num, pow, 1); 
}
