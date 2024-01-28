// Problem-Link : https://leetcode.com/problems/top-k-frequent-elements/description/
// Problem-ID : 347
// Problem Name: Top K Frequent Elements
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
    vector<int> topKFrequent(vector<int>& nums, int k) {
     map<int,int>mp;
     vector<pair<int,int>>v;
     vector<int>ans;
        for(auto i:nums)
            mp[i]++;   
     for(auto i:mp)
            v.push_back({i.second,i.first});
    sort(all(v));
    reverse(all(v));
    for (int i = 0; i < k; i++)
        ans.push_back(v[i].second);
    return ans;
    }
};