#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include<algorithm>
#include<queue>
#include<list>
#include <sstream>
#include <iterator>n
using namespace std;

string seded(string str) {
	  vector<char>arr,f;
        for(int i=0;i<str.length();i++){
            arr.push_back(str[i]);
        }
                for(int i=0;i<arr.size();i++){
                	int l=i;
                	int count,temp=0;
                	int r=1+i;
                	 f.push_back(arr[i]);
                	while(arr[r]!=arr[l] && r<arr.size()){
                	 f.push_back(arr[r]);
   		            r++;
						} 
						temp=r+1;
						//cout<<temp;
						f.push_back(arr[r]);
										//	for(int j=0;j<f.size();j++){
										//		cout<<f[j]<<endl;
										//	}
										//	cout<<"S"<<endl;
					
					for(int j=l;j<f.size();j++){
						if(f[r]==f[j]){
							count++;
							r--;
						}
					}
					//cout<<count;
					if(count==temp){
						string s(f.begin(), f.end());
						return s;
					}
					f.clear();
        }
        return{};
      }
      int main(){
      	string  x="abeeeeeeeeeeeeeeeeefgf";
      	cout<<seded(x);
      	
	  }
      
