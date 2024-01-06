// Problem-Link : https://leetcode.com/problems/roman-to-integer/
// Problem-ID : 13
// Problem Name: Roman to Integer
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
    int romanToInt(string s) {
        unordered_map<char, int> v = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
        int sum = 0;
        for (ll i = 0; i < s.length(); i++) {
            if (i > 0 && v[s[i]] > v[s[i - 1]]) {
                sum += v[s[i]] - 2 * v[s[i - 1]];
            } else {
                sum += v[s[i]];
            }
        }
        return sum;
    }
};