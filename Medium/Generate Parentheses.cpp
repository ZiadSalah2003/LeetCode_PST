// Problem-Link : https://leetcode.com/problems/generate-parentheses/
// Problem-ID : 22
// Problem Name: Generate Parentheses
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
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        backtrack(s, "", 0, 0, n);
        return s;
    }
    void backtrack(vector<string>& s, string c, int st, int end, int mx) {
        if (c.length() == mx * 2) {
            s.push_back(c);
            return;
        }

        if (st < mx)
            backtrack(s, c + "(", st + 1, end, mx);
        if (end < st)
            backtrack(s, c + ")", st, end + 1, mx);
    }
};