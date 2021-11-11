#include <iostream>
#include <vector>
#include<vector>
#include <iostream>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

string reverseWordsInString(string arr)
{ 
  vector<char> characters;
     vector<char>result;
//vector<char>arr;
////	for(int i=0;i<str.length();i++){
///		arr[i]=str[i];
//		cout<<arr[i]<<endl;
//	}
//	cout<<arr.size();
 //for(int i=arr.size();i>0;i--){
   int r=arr.length()-1;
   int l=r-1;
  characters.push_back(arr[r]); 
   while(l>=0){
     if(arr[l]!=' '&& l>0){
      characters.push_back(arr[l]);  
      if(l==1){
      	   characters.push_back(arr[0]);  
	  }
       l--;
     }else{
     	//cout<<characters.size();
        for(int j=characters.size()-1;j>=0;j--){
         result.push_back(characters[j]);
        }
        if(l==0){
        	string dd(result.begin(),result.end());
			return dd;
		}
                l=l-2;
       result.push_back(' ');  
       characters.clear();
            r=l+1;

	         characters.push_back(arr[r]);  
 
     }
 //}
}



}
int main() {
//	unsigned long long int a;
//vector<char> x(sizeof(a));
//memcpy(&a, &x[0], sizeof(a));

//x={'g','r','e','a','t','e','s','t',' ','n','a','m','e',' ','f','i','r','s','t',' ','e','v','e','r',' ','n','a','m','e',' ','l','a','s','t'};
string x="Sadek Gamed Awy";
//	vector<char>y;
string y;
	y=reverseWordsInString(x);

cout<<y;

}
