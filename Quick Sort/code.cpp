#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int s, int e)
{
    int count = 0;

    for (int i = s; i < e; i++)
        if (v[e] >= v[i])  count++;        // counts total elements less than pivot element
    int temp = v[e];        
    v[e] = v[count];
    v[count] = temp;        // swaps pivot element to the index where it should be
    int i = e;              
    while (s < count)
    {
        if (v[s] > v[count])        // if any element greater than pivot element found left to it
        {
            while (v[i] > v[count] && i > count)      i--;      // finds any element less than pivot 
                                                                // element right to it
            int temp = v[i];
            v[i] = v[s];
            v[s] = temp;
        }
        s++;
    }
    return count;               // finally returns the pivot index
}

void quickSort(vector<int> &v, int s, int e)
{
    if (s >= e)   return;
    int pivotIndex = partition(v, s, e);        
    return quickSort(v, s, pivotIndex - 1);
    return quickSort(v, pivotIndex + 1, e);
}

int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (auto &i : v)
        cin >> i;
    quickSort(v, 0, v.size() - 1);
    for (auto &i : v)
        cout << i << " ";
}
