// Problem-Link : https://leetcode.com/problems/first-letter-to-appear-twice/description/
// Problem-ID : 2351
// Problem Name: First Letter to Appear Twice
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
    char repeatedCharacter(string s) {
        map<ll,ll>mp;
        for (ll i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>=2)return s[i];
        }
        
    }
};