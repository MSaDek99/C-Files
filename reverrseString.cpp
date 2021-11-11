#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include<algorithm>
#include<queue>
#include<list>
#include <sstream>
#include <iterator>
using namespace std;

string reverseWordsInString(string str) {
	  vector<char>f,arr;
        for(int i=0;i<str.length();i++){
            arr.push_back(str[i]);
        }
                for(int i=0;i<arr.size();i--){
                	int l=i;
                	int r=i+1;
                	while(arr[r]!=' '){
                		
					}
            f.push_back(arr[i]);
        }			string s(f.begin(), f.end());
					return		s;		

  // Write your code here.
  return "";
}



int main(){
	
	string f="B              Lu!@#$%^&*()e";
	//cout<<reverseWordsInString(f);


   std::string text = "Let me split this into words";

std::istringstream iss(text);
std::vector<std::string> results(std::istream_iterator<std::string>{iss},
                                 std::istream_iterator<std::string>());
                                 
                                 for(int i=results.size()-1;i>=0;i--)
                                 {
                                 	cout<<results[i]<<"	";
								 }
								 s = "hello  world         4lol"
a = s.split(' ')

new_string = ''
for i in range(0, len(a)) :
   new_string = a[i].capitalize() if len(new_string)==0 else new_string +' '+ a[i].capitalize()
print(new_string);
   
   return 0;
}
