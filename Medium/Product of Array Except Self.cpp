// Problem-Link : https://leetcode.com/problems/product-of-array-except-self/
// Problem-ID : 238
// Problem Name: Product of Array Except Self
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
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result(nums.size());
int l = 1, r = 1;
for (int i = 0; i < nums.size(); i++)
{
    result[i] = l;
    l *= nums[i];
}
for (int i = nums.size() - 1; i >= 0; i--)
{
    result[i] *= r;
    r *= nums[i];
}
return result;
    }
};