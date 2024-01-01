//https://leetcode.com/problems/assign-cookies/
// Problem-ID : 455
// Problem Name: Assign Cookies
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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = g.size() - 1, j = s.size() - 1, sum = 0;
        while (i >= 0 && j >= 0) {
            if (s[j] >= g[i]) {
                sum++;
                j--;
            }
            i--;
        }
        return sum;
    }
};