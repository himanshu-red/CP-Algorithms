#include <bits/stdc++.h>
using namespace std; 
bool binarySearch(int start, int end, vector<int> v, int num)
{
    int mid = start + (end - start) / 2; 
    if (v[mid] == num) 
        return true;
    if (start > end)
        return false; 
    if (num < v[mid] )
        return binarySearch(start, mid-1,v, num); 
    return binarySearch(mid+1, end, v, num); 
}
int main()
{
    int size, num;  
    cin >> size; 
    vector<int> v(size); 
    for (auto &i : v)
        cin >> i; 
    cin >> num; 
    sort(v.begin(), v.end()); 
    if (binarySearch(0, v.size()-1, v, num))
        cout << "Found " << endl; 
    else 
        cout << "Not found" << endl; 
}
