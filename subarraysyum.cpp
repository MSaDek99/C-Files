#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	vector<int>f;
	sort(array.begin(),array.end());
	int end=0;
 for(int x=0;x<array.size();x++)
 {
 	int start =x;
 	int end=x+1;
 	int sum=0;
		while(end<=array.size())
		{
			if(array[start]==targetSum){
				f.push_back(array[start]);
			}
			else{
				sum=array[start]+array[end];
				if(sum<targetSum){
					end++;
				}else if(sum==targetSum){
						cout<<array[start]<<array[end]<<endl;
						start++;
						end++;
				}else{
					start++;
				}
			}
		}
	}
	return f;
 }

int main()
{
	vector<int> s={1,2,3,4};		
	vector<int>a=twoNumberSum(s,5);
	for(int i=0;i<a.size();i++)
	{
		
		//cout<<a[i]<<endl;
	}
}
