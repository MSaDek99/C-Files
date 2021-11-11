#include <bits/stdc++.h>
#include <functional>
#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;



int main(){
	
	vector<string>x={"bblue","red"};
std::set<char> sett(x[0].begin(), x[0].end());
  sett.erase('b');

string f = std::string(sett.begin(), sett.end());

cout<<f;
}
