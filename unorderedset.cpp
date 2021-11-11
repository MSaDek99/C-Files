#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;


vector<int> sortedSquaredArray(vector<int> array) {
	vector<int> sortedx;
	for(int i=0;i<5;i++){
		sortedx.push_back(array[i]);
	}

  return sortedx;
}

int main()
{
	vector<int> f={1,2,3,4,5};
		vector<int>s;
		s=sortedSquaredArray(f);
for(int i=0;i<f.size();i++){
	cout<<s[i];
}
}

#include <vector>

#include <algorithm>

using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {

  vector<int> sortedSquares(array.size(), 0);
  for (int idx = 0; idx < array.size(); idx++) {

    int value = array[idx];

    sortedSquares[idx] = value * value;

  }


  sort(sortedSquares.begin(), sortedSquares.end());

  return sortedSquares;

}


