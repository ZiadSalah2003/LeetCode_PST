// Problem-Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Problem-ID : 121 
// Problem Name: Best Time to Buy and Sell Stock
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
    int maxProfit(vector<int>& prices) {
        int mx=0,mn=1e9;
        for (int i = 0; i < prices.size(); i++)
        {
            mn=min(mn,prices[i]);
            mx=max(mx,prices[i]-mn);
        }
        return mx;
    }
};