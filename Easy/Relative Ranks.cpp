// Problem-Link : https://leetcode.com/problems/relative-ranks/
// Problem-ID : 506
// Problem Name: Relative Ranks
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
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>>v;
        for (int i = 0; i < sz(score); i++)
            v.push_back({score[i], i});
        sort(all(v), greater<pair<int, int>>());
        vector<string>res(sz(score));
        for (int i = 0; i < sz(v); i++) {
            if (i == 0)
                res[v[i].second] = "Gold Medal";
            else if (i == 1)
                res[v[i].second] = "Silver Medal";
            else if (i == 2)
                res[v[i].second] = "Bronze Medal";
            else
                res[v[i].second] = to_string(i + 1);
        }
        return res;
    }
};