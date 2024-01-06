// Problem-Link : https://leetcode.com/problems/integer-to-roman/
// Problem-ID : 12
// Problem Name: Integer to Roman
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
    string intToRoman(int num) {
        vector<int> v = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> s = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string ss = "";
        for (int i = 0; i < v.size() && num >= 0; i++) {
            while (v[i] <= num) {
                num -= v[i];
                ss += s[i];
            }
        }
        return ss;
    }
};