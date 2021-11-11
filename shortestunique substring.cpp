#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include<algorithm>
using namespace std;
string getShortestUniqueSubstring(  const vector<char> &arr, const string &str );
string getShortestUniqueSubstring(  const vector<char> &arr, const string &str ) 
{
    int l=0;
  vector<string> x;
  vector<char>f,k;
  string dd(arr.begin(), arr.end());
std::set<char> sett(dd.begin(), dd.end());

if(str.length()==1 && find(arr.begin(), arr.end(), str[0])!=arr.end()){
  return str;
}else if(str.length()==1){
  return {};
}
  for(int i=0;i<str.length();i++){
    int l=i;
    int r=i+1;
    int count=0,counter=0,countt=0;
  string dd(arr.begin(), arr.end());
std::set<char> sett(dd.begin(), dd.end());
            if(find(arr.begin(), arr.end(), str[l])!=arr.end()){
               f.push_back(str[l]);
			   count++;
			   }
   // while(r<=str.length()){
	      while(find(arr.begin(), arr.end(), str[r])!=arr.end() && find(f.begin(), f.end(), str[r])==f.end() ){
	      	f.push_back(str[r]);
	        r=r+1;	        
	        count=count+1;
	        string s(f.begin(), f.end());
	        if(count == arr.size()){
	          return    s;
	        }  
	      }
	      	count=0;
	      	countt=0;
	      	counter=0;
	      	f.clear();
	      	//f.push_back(str[l]);
	      	r=i+0;
	      	while(count<str.length() && countt<arr.size()){
	      		if(find(sett.begin(), sett.end(), str[r])!=sett.end() ){
	      			//string t = std::string(sett.begin(), sett.end());

					//cout<<t<<endl;
	  						sett.erase(str[r]);
	  						countt++;
	  					//	cout<<count;
	  					//	cout<<countt<<endl;;
						  }
				  	f.push_back(str[r]);
	      	      	r++;
	      			count++;
	      		}
	      		if(countt==arr.size()){
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


int main() {
  vector<char>g={'x','z','g','f','s'};
  vector<char>z;
    	string a="abbbbbbbbbbbbbyxzgfgfgggssg";
		string b="xzgfgfgggs"; 
		  cout<<getShortestUniqueSubstring(g,b);

  
}
