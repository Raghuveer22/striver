#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
  int maxi=0;
  int sum=0;
  unordered_map<int,int>mp;
  int n=arr.size();
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    if(sum==0)
    maxi=i+1;
    if(mp.find(sum)!=mp.end())
    {
      maxi=max(maxi,i-mp[sum]);
    }
    else{
    mp[sum]=i;
    }
  }
  return maxi;
}