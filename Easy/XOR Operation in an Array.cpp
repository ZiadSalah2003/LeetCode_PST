// Problem-Link : https://leetcode.com/problems/xor-operation-in-an-array/description/
// Problem-ID : 1486
// Problem Name: XOR Operation in an Array
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
    int xorOperation(int n, int start) {
        int result=start;
        for (int i = 0; i <n; i++) {
            result ^= (start + 2 * i);
        }
        return result;
    }
};