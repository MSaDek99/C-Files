#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class Solution{
	
	public:
		int nums(vector<int>& s){
	 sort(s.begin(), s.end());
			int c,m=s.size();
	int  *left = new int[10]();	
	int  *sums = new int[10]();
	int  *abs = new int[10]();
	int b[m];
	int temps;
	for(int i,sum=0;i<m;i++){
		sums[i]=sum+s[i];
		sum+=s[i];
		cout<<s[i];
	}
	for(int sum,i=0;i<m;i++)
	{
		left[i]=sum+s[i];
		sum+=s[i];
		cout<<sum;
		b[i]=0;// abss(sums,left[i],m);		
		cout<<b[i]<<endl;
	}
	temps=b[0];

   for(int i=0; i<m; i++) {
      if(temps>b[i]) {
         temps=b[i];
      }
   }
   return temps;

}
int abss(int array[],int x,int m)
{
	cout<<m<<endl<<endl;
	int arr[m],n=0;
	for(int i=m;i>0;i--){
		 arr[n]=(array[i-1]-x);
		 n++;
		 cout<<arr[n];
		}
	
	   int temp;
	   if(arr[0]>0){
	   	temp=arr[0];
	   }else{
	   	temp=1;
	   }
   for(int i=0; i<n; i++) {
      if(temp>arr[i] && arr[i]>0) {
         temp=arr[i];
      }
   }
   return temp;

}
	
};
int main()
{	
	Solution x;
	vector<int> f={2,1,4,3,5};
	x.nums(f);
	//cout<<
}
