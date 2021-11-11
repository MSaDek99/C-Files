#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
	
int solve(vector<int> &A) {
    int n = A.size();
    int sum=0;
    for(int i=0;i<n;++i)
        sum+=A[i];
    
    //Subset Sum Problem
    bool dp[n+1][sum+1];
    for(int i=0;i<=n;++i)
    for(int j=0;j<=sum;++j)
    {
        if(j==0)
            dp[i][j] = true;
        else if(i==0)
            dp[i][j] = false;
        else if(A[i-1]>j)
            dp[i][j] = dp[i-1][j];
        else
            dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
    }
    
    //int diff = INT_MAX;
    vector<int>list;
    for(int i=0;i<=sum/2;++i)
    {
        int first = i;
        int second = sum-i;
        if(dp[n][i]==true) //and diff>abs(first+second))
            list.push_back(sum+1);
    }
    sort(list.begin(),list.end());
    return list[0];    
}
};
int main()
{
		Solution y;
	vector<int> x={5,4,2,3};
	
	cout<<y.solve(x)<<endl;
}
