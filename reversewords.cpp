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

 for(int i=arr.size();i>0;i--){
   int r=arr.size()-1;
   int l=r-1;
  characters.push_back(arr[r]); 
   while(l>0){
     if(arr[l]!=' '){
      characters.push_back(arr[l]);  
       l--;
     }else{
        l=l-2;
        for(int j=characters.size();j>0;j--){
         result.push_back(characters[j]);
        }
       result.push_back(' ');   
     }
     r=l+1;
 }
}
 return result;



}

int main() {
	vector<char>x={'p','e','r','a','s','s'};
	vector<char>y;
	y=reverseWords(x);
	for(int j=0;j<y.size();j++);
	{
		cout<<y[j];
}
	
}
