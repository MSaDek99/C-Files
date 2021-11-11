#include <vector>
#include<algorithm>
using namespace std;

int tandemBicycle(vector<int> r, vector<int> b,
                  bool fastest) {
  sort(r.begin(),r.end());
	sort(b.begin(),b.end());
	int sum=0;
	if(fastest==true){
				int n=r.size();
		for(int i=0;i<r.size();i++)
		{
			sum+=max(r[n-1],b[i]);
					n--;
		}
		return sum;
	}else{
				for(int i=0;i<r.size();i++)
		{
			sum+=max(r[i],b[i]);
		}
		return sum;
	}
}

