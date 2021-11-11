#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

template<typename T> void print_queue(T&q){
	while(!q.empty())
	{
		cout<< q.top() << ""<<'\n';
		q.pop();
	}
}
int main(){
	priority_queue<int,vector<int>,greater<int> >q;
	for(int elm:{1,8,5,6,3,4,0,9,2})
	{
		q.push(elm);	
	}
	print_queue(q);
}
