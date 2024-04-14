// Problem-Link : https://leetcode.com/problems/count-the-number-of-consistent-strings/
// Problem-ID : 1684
// Problem Name: Count the Number of Consistent Strings
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
    int countConsistentStrings(string allowed, vector<string>& words) {
        int sum = 0;
        for (string word : words) {
            int x = 0;
            for (char c : word) {
                if (allowed.find(c)!=string::npos) {
                    x++;
                }
            }
            if(x == word.size()){
                sum++;
            }
        }
        return sum;
    }
};