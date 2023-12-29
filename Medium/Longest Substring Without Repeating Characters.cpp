// Problem-Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Problem-ID : 3
// Problem Name: Longest Substring Without Repeating Characters
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
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int l = 0, r = 0, mx = 0;
        while (r < s.size()) {
            if (set.find(s[r]) == set.end()) {
                set.insert(s[r]);
                mx = max(mx, r - l + 1);
                r++;
            } else {
                set.erase(s[l]);
                l++;
            }
        }
        return mx;
    }
};