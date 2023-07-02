#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
 unordered_set<int>hashmap(arr.begin(),arr.end());
 int longestStreak=INT_MIN;
 int currentNum;
 int currentStreak;
 for(auto i:hashmap)
 {
    if(hashmap.count(i-1))continue;
    if(!hashmap.count(i-1))   
    {
        currentNum = i;
        currentStreak = 1;
        while(hashmap.count(currentNum+1))
        {
            currentStreak++;
            currentNum++;
        }
        longestStreak=max(currentStreak,longestStreak);
    }
 }
 return longestStreak;
}