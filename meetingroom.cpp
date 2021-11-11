#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

struct Comparator{
   bool operator()(vector <int>& a, vector <int>& b){
      return !(a[1] < b[1]);
   }
};
class Solution {
public:

   int minMeetingRooms(vector<vector<int>> &intervals) {
      priority_queue<vector<int>, vector<vector<int> >, Comparator > pq;

      sort(intervals.begin(), intervals.end());

      int ret = 0;
      for (int i = 0; i < intervals.size(); i++) {
         while (!pq.empty() && pq.top()[1] <= intervals[i][0])   
		 
         pq.pop();
         pq.push(intervals[i]);
         ret = max(ret, (int)pq.size());
     	
      }
      cout<<ret<<endl;;
   }
};
int main()
{
	Solution x;
    //vector<vector<int>> interval
    //{
      //  {0,30},
        //{5,10},
        //{15,20}
    //};
    vector<vector<int>> interval
    {
                {1, 10}, 
                {10, 20},
				{2, 7},
				{3, 19},
				{8, 12},
				{11, 30},
	};
	x.minMeetingRooms( interval);
}
