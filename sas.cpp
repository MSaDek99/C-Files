#include <iostream>
#include <vector>
#include<vector>
#include <iostream>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

vector<char> reverseWords( const vector<char>& arr ) 
{ 
  vector<char> characters;
     vector<char>result;

 //for(int i=arr.size();i>0;i--){
   int r=arr.size()-1;
   int l=r-1;
  characters.push_back(arr[r]); 
   while(l>=0){
     if(arr[l]!=' '&& l>0){
      characters.push_back(arr[l]);  
      if(l==1){
      	   characters.push_back(arr[0]);  
	  }
       l--;
     }else {
     	//cout<<characters.size();
        for(int j=characters.size()-1;j>=0;j--){
         result.push_back(characters[j]);
        }
                l=l-2;
       result.push_back(' ');  
       characters.clear();
            r=l+1;

	         characters.push_back(arr[r]);  
 
     }
 //}
}
 return result;



}

int main() {
	unsigned long long int a;
vector<char> x(sizeof(a));
memcpy(&a, &x[0], sizeof(a));

x={'g','r','e','a','t','e','s','t',' ','n','a','m','e',' ','f','i','r','s','t',' ','e','v','e','r',' ','n','a','m','e',' ','l','a','s','t'};
	vector<char>y;
	y=reverseWords(x);
string dd(y.begin(),y.end());
cout<<dd;

	
}
