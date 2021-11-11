#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	vector<int>f;
	sort(f.begin(),f.end());
	if(targetSum<=array[array.size()])
 for(int x=0;x<array.size();x++)
 {
	 for(int i=0;i<array.size();i++)
	 {
		 if(array[x]+array[i]==targetSum && x!=i)
		 {
			 f.push_back(array[x]);
			 f.push_back(array[i]);
			 return  f;
		 }
	 }
 }
return vector<int>(); // Write your code here.
  }
int main()
{
	
}
