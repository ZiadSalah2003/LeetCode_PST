// Problem-Link : https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/
// Problem-ID : 2441
// Problem Name: Largest Positive Integer That Exists With Its Negative
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
    int findMaxK(vector<int>& nums) {
        map<int, int> mp;
        for (int n : nums) {
            if (n < 0) {
                mp[-n] = 1;
            }
        }
        int mx = -1;
        for (int n : nums) {
            if (n > 0 && mp.count(n)) {
               mx = max(mx, n);
            }
        }
        return mx;
    }
};