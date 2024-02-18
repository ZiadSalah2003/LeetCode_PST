// Problem-Link : https://leetcode.com/problems/group-anagrams/
// Problem-ID : 49
// Problem Name: Group Anagrams
// Verdict: AC
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define sz(x) (int)(x).size()
#define Endl "\n"
#define all(v) v.begin(),v.end()
#define GG  ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
const ll N = 1e3 + 7, OO = 0x3f3f3f3f;
const ll M = 2e18 + 10;
const ll MOD = 1e9;
const double EPS = 1e-7;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            string a = strs[i];
            sort(a.begin(), a.end());
            mp[a].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (auto it : mp) {
            result.push_back(it.second);
        }
        return result;
    }
};