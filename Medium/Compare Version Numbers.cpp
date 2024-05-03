// Problem-Link : https://leetcode.com/problems/compare-version-numbers/
// Problem-ID : 165
// Problem Name: Compare Version Numbers
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
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        while (i < sz(version1) || j < sz(version2)) {
            int n1 = 0, n2 = 0;
            while (i < sz(version1) && version1[i] != '.') {
                n1 = n1 * 10 + (version1[i] - '0');
                i++;
            }
            while (j < sz(version2) && version2[j] != '.') {
                n2 = n2 * 10 + (version2[j] - '0');
                j++;
            }
            if (n1 > n2) {
                return 1;
            }
            if (n1 < n2) {
                return -1;
            }
            i++;
            j++;
        }
        return 0;
    }
};