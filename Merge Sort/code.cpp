#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int s1, int e1, int s2, int e2)
{
    vector<int> sorted;

    int i1 = s1;
    int i2 = s2;

    while (s1 <= e1 || s2 <= e2)
    {
        if (s2 > e2 || (s1 <= e1 && v[s1] < v[s2])) sorted.push_back(v[s1++]); 
        else                                        sorted.push_back(v[s2++]); 
    }

    int j = 0;

    for (int i = i1; i <= e1; i++)       v[i] = sorted[j++];
    for (int i = i2; i <= e2; i++)       v[i] = sorted[j++];
}

void mergeSort(vector<int> &v, int s, int e)
{
    int mid = s + (e - s) / 2;

    if (v.size() == 0)
        return;
    if (s == e)
        return;

    mergeSort(v, s, mid);
    mergeSort(v, mid + 1, e);

    merge(v, s, mid, mid + 1, e);
}

int main()
{
    int size;

    cin >> size;

    vector<int> v(size);

    for (auto &i : v)
        cin >> i;

    mergeSort(v, 0, v.size() - 1);

    for (auto &i : v)
        cout << i << " ";
}
