#include <bits/stdc++.h> 
using namespace std;

int uniqueSubstrings(string input)
{
    vector<int>mp(256,-1);
    int left=0;
    int right=0;
    int len=0;
    int n= input.size();
    while (right<n)
    {
        if(map[input[right]]!=-1)
        left=max(map[input[right]]+1,left);
        map[input[right]]=right;
        len=max(len,right-left+1);
        right++;
    }
    return len;
}
