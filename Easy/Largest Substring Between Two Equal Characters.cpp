//https://leetcode.com/problems/largest-substring-between-two-equal-characters/
// Problem-ID : 1624
// Problem Name: Largest Substring Between Two Equal Characters
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
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        for(int i=0;i<s.size();i++){
            for(int j=s.size()-1;j>i;j--){
                if(s[i]==s[j]){
                    ans=max(ans,j-i-1);
                }
            }
        }
        return ans;
    }
};