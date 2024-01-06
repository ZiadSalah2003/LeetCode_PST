// Problem-Link : https://leetcode.com/problems/largest-substring-between-two-equal-characters/
// Problem-ID : 2894
// Problem Name: Divisible and Non-divisible Sums Difference
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
    int differenceOfSums(int n, int m) {
        int n1 = 0, n2 = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                n2 += i;
            } else {
                n1 += i;
            }
        }
        return n1 - n2;
    }
};