#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include<algorithm>
using namespace std;

class Solution {
public:
    string minWindow(string str, string t) 
{
    int l=0;
  vector<string> x;
  vector<char>f,arr;
        for(int i=0;i<t.length();i++){
            arr.push_back(t[i]);
        }

std::set<char> sett(t.begin(), t.end());

if(str.length()==1 && find(arr.begin(), arr.end(), str[0])!=arr.end()){
  return str;
}else if(str.length()==1){
  return {};
}
  for(int i=0;i<str.length();i++){
    int l=i;
    int r=i;
    int count=0,counter=0,countt=0;
  string dd(arr.begin(), arr.end());
std::set<char> sett(dd.begin(), dd.end());

while(countt<arr.size()&& r<str.length()){
		if(find(sett.begin(), sett.end(), str[r])!=sett.end() ){
			  					sett.erase(str[r]);
		  						countt++;

	}
		  						f.push_back(str[r]);
		  						r++;
}	      		if(countt==arr.size()){
					    string s(f.begin(), f.end());
				        x.push_back(s);
				  }  
	f.clear();
}

	if(x.size()==0){
		return "";
	}

	string smin = *std::min_element(x.begin(), x.end(), 
	                     [] (const std::string& s1, const std::string& s2) { 
	                         return s1.length() < s2.length(); }
	                     );
	return smin;
}

    };
    
    int main(){
    	
    	Solution x;
    	string a="abbbbbbbbbbbbbyxzgfgfgggssg";
		string b="xzgfgfgggs"; 
		  vector<char>arr;
	cout<<x.minWindow(a,b);

    	
    	
	}
