// Problem-Link : https://binarysearch.com/problems/existence-of-a-substring-in-a-string-and-its-reverse
// Problem-ID : 3083
// Problem Name: Existence of a Substring in a String and Its Reverse
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
    bool isSubstringPresent(string s) {
        for (int i = 1; i < s.size(); i++)
        {
            char a[2];
            a[0]=s[i];
            a[1]=s[i-1];
            if(s.find(a)!= string::npos)
            return true;
        }
        return false;
    }
};