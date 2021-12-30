int main()
{
    string str; 
    cin >> str; 
    int noOfSubs = pow(2, str.size()); 
    for(int i = 1; i< noOfSubs; i++)
    {
        int firstSetBit = (int)log2(i);     // finds out the rightmost set bit
        for (int j = 0; j <= firstSetBit; j++)
        {
            if (i & (1 << j))
                cout << str[j]; 
        }
        cout << endl;
    }
}
