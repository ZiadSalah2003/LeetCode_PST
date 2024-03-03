// Problem-Link : https://leetcode.com/problems/split-the-array/description/
// Problem-ID : 3046
// Problem Name: Split the Array
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
    bool isPossibleToSplit(vector<int>& nums) {
        map<ll,ll>mp;
        for(auto i:nums)mp[i]++;
        for(auto i:mp)if(i.second>2)return false;
        return true;
    }
};