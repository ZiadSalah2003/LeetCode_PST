// Problem-Link : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/
// Problem-ID : 1662 
// Problem Name: Check If Two String Arrays are Equivalent
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
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "", s2 = "";
        for (int i = 0; i < sz(word1); i++)
            s1 += word1[i];
        for (int i = 0; i < sz(word2); i++)
            s2 += word2[i];
        return s1 == s2;
    }
};