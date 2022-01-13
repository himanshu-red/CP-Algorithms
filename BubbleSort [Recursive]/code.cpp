#include <bits/stdc++.h>
using namespace std;
void slide (vector<int> &v, int s, int e)
{
    if (s > e) return; 
    if (v[s] < v[s-1])
    {
        int temp = v[s]; 
        v[s] = v[s-1];
        v[s-1] = temp; 
    }
    return slide(v, s+1, e);
} 
void bubbleSort(vector<int> &v, int e)
{
    if (e == 1) return ;
    slide(v, 1, e);
    return bubbleSort(v, e-1); 
}
int main()
{
    int n; 
    cin >> n; 
    vector<int> v(n); 
    for (auto &i : v)   
        cin >> i; 
    bubbleSort(v,v.size()-1); 
    for (auto &i : v)
        cout << i << " " ; 
}
