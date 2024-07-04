// Problem-Link : https://leetcode.com/problems/determine-if-string-halves-are-alike/description/
// Problem-ID : 1704
// Problem Name: Determine if String Halves Are Alike
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
    bool halvesAreAlike(string s) {
        set<char> set = {'a','e','i','o','u','A','E','I','O','U'};
        int l = 0, r = s.size()-1, cnt1 = 0, cnt2 = 0;
        while (l < r) {
            if (set.find(s[l]) != set.end()) {
                cnt1++;
            }
            if (set.find(s[r]) != set.end()) {
                cnt2++;
            }
            l++;
            r--;
        }
        return cnt1 == cnt2;
    }
};