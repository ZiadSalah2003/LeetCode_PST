// Problem-Link : https://leetcode.com/problems/majority-element/
// Problem-ID : 169 
// Problem Name: Majority Element
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
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)mp[x]++;
        for(auto x:mp){
            if(x.second>nums.size()/2)return x.first;
        }
        return -1;
    }
};