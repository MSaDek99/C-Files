#include<iostream>
using namespace std;

string mTime(string s)
{
    if(s[0]=='?' && s[1]=='?')
        s[0]='2',s[1]='3';
    else if(s[0]=='?' && s[1]!='?')
    {
        if(s[1]<'4')
            s[0]='2';
        else
            s[0]='1';
    }
    else if(s[0]!='?' && s[1]=='?')
    {
        if(s[0]<'2')
            s[1]='9';
        else
            s[1]='3';
    }
    if(s[3]=='?')
        s[3]='5';
    if(s[4]=='?')
        s[4]='9';
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << mTime(s) << endl;
    return 0;
}

