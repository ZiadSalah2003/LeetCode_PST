// Problem-Link : https://leetcode.com/problems/number-of-1-bits/
// Problem-ID : 191 
// Problem Name: Number of 1 Bits
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
    int hammingWeight(uint32_t n) {
        int sum = 0;
while (n != 0)
{
    sum += (int)(n & 1);
    n >>= 1;
}
return sum;
    }
};