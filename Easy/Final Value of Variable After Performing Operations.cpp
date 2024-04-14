// Problem-Link : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/
// Problem-ID : 2011
// Problem Name: Final Value of Variable After Performing Operations
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
    int finalValueAfterOperations(vector<string>& operations) {
      int X = 0;
        for (string o : operations) {
            if (o[0]=='+' || o[2]=='+') {
                X++;
            } else if (o[0]=='-' || o[2]=='-') {
                X--;
            }
        }
        return X;
    }
};