

#include<vector>
#include <iostream>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
#include<set>
int main() {
	int num,s;
	cin >> num;										// Reading input from STDIN
vector<int>x;
for(int i=0;i<num;i++){
	cin>>s;
	x.push_back(s);
}
map<pair<int,int>,int>a;
sort(x.begin(),x.end());
int countt=0;
int n=x.size();
for(int i=0;i<n;i++){
	int l=i;
	int r=l+1;
	while(r<n){
		int sum= x[r]*x[l];
		if((sum%10) == 0){
			if(find(a.begin(),a.end(),(x[r],x[l])==a.end)){
							countt++;
										a.insert(x[r],x[l]);
			}

		}
		r++;
	}
}
cout<<countt;
}

