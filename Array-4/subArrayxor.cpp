#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
  int xorv=0;
  unordered_map<int,int>mp;
  int cnt=0;
  int n=arr.size();
  mp[0]=1;
  for(int i=0;i<n;i++)
  {
    xorv=xorv^arr[i];
    if(mp.find(xorv^x)!=mp.end())
    {
      cnt+=mp[xorv^x];
    }
    if(mp.find(xorv)!=mp.end())
    {
    mp[xorv]+=1;
    }
    else{
        mp[xorv]=1;
    }
  }
  return cnt;
}