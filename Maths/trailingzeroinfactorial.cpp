#include<bits/stdc++.h> 
using namespace std; 


class Solution
{
public:
    int trailingZeroes(int n)
    {
        // Write Your Code here
    int count = 0;
 
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
} 