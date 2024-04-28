// Problem-Link : https://leetcode.com/problems/strong-password-checker-ii/
// Problem-ID : 2299
// Problem Name: Strong Password Checker II
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
    bool strongPasswordCheckerII(string password) {
        if (password.size() < 8) return false;
        bool lo = false, up = false, di = false, sp = false, ad = false;
        char pre = '\0';
        for (char c : password) {
            if (islower(c)) lo = true;
            else if (isupper(c)) up = true;
            else if (isdigit(c)) di = true;
            else if (string("!@#$%^&*()-+").find(c) != string::npos) sp = true;
            if (c == pre) ad = true;
            pre = c;
        }
        return lo && up && di && sp && !ad;
    }
};