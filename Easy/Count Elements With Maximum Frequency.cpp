// Problem-Link : https://leetcode.com/problems/count-elements-with-maximum-frequency/description/
// Problem-ID : 3005
// Problem Name: Count Elements With Maximum Frequency
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
    int maxFrequencyElements(vector<int>& nums) {
        map<ll,ll>mp;
        for(auto i:nums)mp[i]++;
        ll mx=0;
        for(auto i:mp)mx=max(mx,i.second);
        int cnt=0;
        for(auto i:mp)if(i.second==mx)cnt+=mx;
        return cnt;
    }
};