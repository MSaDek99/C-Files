#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;




class Solution {
public:
    int minDifference(vector<int>& nums) {
            sort(nums.begin(), nums.end());

 			int m=nums.size();
 			//cout<<m;
			//}
            //int pickmin{
			int mindiff,maxdiff;
			        for(int i=0;i<m;i++)
			        {
			        //	cout<<"!"<<endl;
				     if(nums[i+1] > nums[i] )
	    		    {
	    		    	//cout<<nums[i+1]<<nums[i]<<endl;
	           			 mindiff= nums[i+1]- nums[i];
	           			// cout<<mindiff<<endl;
			            minarr(nums,m,mindiff,i);
			            break;
				 	}
				}
			}
			int minarr(vector<int> &arr, int n, int mindifference,int x){
				int maxdiff,count=0;
			            if(arr[n-1]>arr[n-2]){
						maxdiff=arr[n-1]-arr[n-2];
	    		    	//cout<<nums[m-1]<<nums[m-2]<<endl;
	    		    	if(maxdiff==mindifference && i)
	    		    	{
	    		    		
						}
						return max(mindifference,maxdiff);
			      		}	
			      		else{n--;
			      			count++;
			      			if(count==3)
			      			{
			      				cout<<arr[n-1]<<endl;
			      				return min((arr[n-1] -arr[x+1] ),arr[n]-arr[n-1]);
							}
							minarr(arr,n,mindifference,x);
						  }				
			}
};
int main()
{
	Solution y;
	vector<int> x={5,4,2,3};
	
	cout<<y.minDifference(x)<<endl;
}
