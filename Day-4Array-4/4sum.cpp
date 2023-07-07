#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string fourSum(vector<int> arr, int target, int n) {
  unordered_map<int, pair<int, int>> mp;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int temp = arr[i] + arr[j];
      if (mp.find(target - temp) != mp.end()) {
        return "YES";
      }
    }
    for (int j = 0; j < i; j++) {
      mp[arr[i] + arr[j]] = {i, j};
    }
  }
  return "NO";
}



