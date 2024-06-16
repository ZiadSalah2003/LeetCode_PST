// Problem-Link : https://leetcode.com/problems/subsets/description/
// Problem-ID : 78
// Problem Name: Subsets
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
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = sz(nums);
        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> cur;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    cur.push_back(nums[i]);
                }
            }
            ans.push_back(cur);
        }
        return ans;
    }
};