#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class Solution{
	
	public:
		int nums(string s){
			char c;
	int goodsplits=0,distinctleft,distinctright;
	int  *left = new int[26]();	
	int  *right = new int[26]();
	for(int i=0;i<s.length();i++){
		c= s[i];
		right[c-'a']++;
	}
	for(int i=0;i<s.length();i++)
	{
		c= s[i];
		left[c-'a']++;
		right[c-'a']--;
		//getDistinct(left);
		distinctleft=getDistinct(left);
		cout<<distinctleft<<endl;
		distinctright=getDistinct(right);
		cout<<distinctright<<endl;
		cout<<endl;
		if(distinctleft==distinctright)
		{
			goodsplits++;
		}
	}
	return goodsplits;
}
int getDistinct(int  array[26])
{
	int i,c=0;
	for(int i=0;i<26; i++)
	{
		
			if(array[i]!=0)
			{
				//cout<<i<<" "<<array[i]<<endl;
				c++;
			}
	}
	return c;
}
	
	
};
int main()
{	
	Solution x;
	string f="buffera";
	cout<<x.nums(f)<<endl;
}
