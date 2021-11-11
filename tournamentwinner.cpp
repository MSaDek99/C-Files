#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;
class Solution{
	public:
const int HOME_TEAM_WON =1;
//void updateScores(string team,int points, unordered_map<string, int> &scores);
string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {
	string currentBestTeam="";
	unordered_map<string,int>scores={{currentBestTeam,0}};
for(int i=0;i<competitions.size();i++)
{
	auto result = results[i];
	auto competition = competitions[i];
	auto homeTeam= competition[0];
	auto awayTeam= competition[1];
	auto winningTeam=result == HOME_TEAM_WON ? homeTeam:awayTeam;
	updateScores(winningTeam,3,scores);
	if(scores[winningTeam]>scores[currentBestTeam]){
		currentBestTeam = winningTeam;
	}

}
		return currentBestTeam;
}
void updateScores(string team,int points, unordered_map<string, int> &scores){
	if(scores.find(team) == scores.end())
		scores[team]=0;
	
	scores[team]+= points;
}
};//

int main()
{
	Solution x;
	vector<vector<string>> comp={

  {"AlgoMasters", "FrontPage Freebirds"},
  {"Runtime Terror", "Static Startup"},
  {"WeC#", "Hypertext Assassins"},
  {"AlgoMasters", "WeC#"},
  {"Static Startup", "Hypertext Assassins"},
  {"Runtime Terror", "FrontPage Freebirds"},
  {"AlgoMasters", "Runtime Terror"},
  {"Hypertext Assassins", "FrontPage Freebirds"},
  {"Static Startup", "WeC#"},
  {"AlgoMasters", "Static Startup"},
  {"FrontPage Freebirds", "WeC#"},
  {"Hypertext Assassins", "Runtime Terror"},
  {"AlgoMasters", "Hypertext Assassins"},
  {"WeC#", "Runtime Terror"},
  {"FrontPage Freebirds", "Static Startup"}

	};
	vector<int>res={1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
	cout<<x.tournamentWinner(comp,res);
	
	
	
}
