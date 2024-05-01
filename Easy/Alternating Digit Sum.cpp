// Problem-Link : https://leetcode.com/problems/alternating-digit-sum/description/
// Problem-ID : 2544
// Problem Name: Alternating Digit Sum
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
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int d = s[i] - '0'; 
            if (i % 2 == 0) {
                sum += d;
            } else {
                sum -= d;
            }
        }
        return sum;
    }
};