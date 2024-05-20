// Problem-Link : https://binarysearch.com/problems/check-if-grid-satisfies-conditions
// Problem-ID : 3142
// Problem Name: Check if Grid Satisfies Conditions
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
    bool satisfiesConditions(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i < m - 1 && grid[i][j] != grid[i + 1][j]){
                    return false;
                }
                if(j < n - 1 && grid[i][j] == grid[i][j + 1]){
                    return false;
                }
            }
        }
        return true;
    }
};