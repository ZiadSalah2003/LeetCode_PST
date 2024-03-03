// Problem-Link : https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/description/
// Problem-ID : 1304
// Problem Name: Find N Unique Integers Sum up to Zero
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
    vector<int> sumZero(int n) {
        vector<int> v(n);
        for (int i = 0; i < n / 2; i++) {
            v[i] = i + 1;
            v[n - i - 1] = - (i + 1);
        }
        return v;
    }
};