// Problem-Link : https://leetcode.com/problems/counting-words-with-a-given-prefix/description/
// Problem-ID : 2185
// Problem Name: Counting Words With a Given Prefix
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
    int prefixCount(vector<string>& words, string pref) {
        int sum = 0;
        for (string word : words) {
            if (word.find(pref) == 0) {
                sum++;
            }
        }
        return sum;
    }
};