// Problem-Link : https://leetcode.com/problems/reverse-integer/
// Problem-ID : 7
// Problem Name: Reverse Integer
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
    int reverse(int x) {
        ll res = 0;
        while (x != 0) {
            res = res * 10 + x % 10;
            x /= 10;
            if (res > INT_MAX || res < INT_MIN) {
                return 0;
            }
        }
        return res;
    }
};