// Problem-Link : https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/
// Problem-ID : 1876
// Problem Name: Substrings of Size Three with Distinct Characters
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
    int countGoodSubstrings(string s) {
        if(s.length()<3) return 0;
        int sum=0;
        for (ll i = 0; i < s.size()-2; i++)
        {
            if(s[i]!=s[i+1]&&s[i+1]!=s[i+2]&&s[i]!=s[i+2])sum++;
        }
        return sum;
    }
};