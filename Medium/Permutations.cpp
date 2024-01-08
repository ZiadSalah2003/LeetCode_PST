// Problem-Link : https://leetcode.com/problems/permutations/
// Problem-ID : 46
// Problem Name: Permutations
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
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        f(nums, 0, v);
        return v;
    }
    void f(vector<int>& nums, int n, vector<vector<int>>& v) {
        if (n == nums.size()) {
            v.push_back(nums);
            return;
        }
        for (int i = n; i < nums.size(); i++) {
            swap(nums[n], nums[i]);
            f(nums, n + 1, v);
            swap(nums[n], nums[i]);
        }
    }
};