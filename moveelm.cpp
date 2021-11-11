#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;
vector<int> moveElementToEnd(vector<int> array, int toMove);


vector<int> moveElementToEnd(vector<int> array, int toMove) {
	int tempp;
	int count=0;
	sort(array.begin(),array.end());
	for(int i=0;i<array.size();i++){
		 cout<<array[i]<<toMove<<endl;

		if(array[i]==toMove){
			count+=1;
			cout<<count<<endl;
		//	cout<<count<<endl<<endl;
			tempp=array[array.size()-count];
			array[array.size()-count]=toMove;
			array[i]=tempp;
			//return array;			
		}
	}
  // Write your code here.
  return array;
	
}

int main(){
	vector<int>f={5, 1, 2, 5, 5, 3, 4, 6, 7, 5, 8, 9, 10, 11, 5, 5, 12};
	int x=5;
	vector<int>s=moveElementToEnd(f,x);
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<",	";	
	}
}
