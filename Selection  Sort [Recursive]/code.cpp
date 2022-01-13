#include <bits/stdc++.h>
using namespace std; 
int getIndex(vector<int> &v, int largest, int index)  // returns index of the smallest element in current range
{
    if (index == v.size()) return largest; 
    if (v[largest] > v[index])
        largest = index; 
    return getIndex(v, largest, index+1); 
}
void selectionSort(vector<int> &v, int start)
{
    if (start == v.size()-1) return;
    int index = getIndex(v, start, start); 
    int temp = v[index];
    v[index] = v[start]; 
    v[start] = temp; 
    return selectionSort(v, start+1); 
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    selectionSort(v, 0);
    for (auto &i : v)
        cout << i << " ";
}
