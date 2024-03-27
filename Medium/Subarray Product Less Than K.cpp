// Problem-Link : https://leetcode.com/problems/subarray-product-less-than-k/
// Problem-ID : 713
// Problem Name: Subarray Product Less Than K
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
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int cnt = 1, sum = 0, l = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt *= nums[i];
            while (cnt >= k) {
                cnt /= nums[l];
                l++;
            }
            sum += i - l + 1;
        }
        return sum;
    }
};