// Problem-Link : https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/
// Problem-ID : 329
// Problem Name: Longest Increasing Path in a Matrix
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
   
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.empty()) return 0;
        int sum = 1, m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> v(m, vector<int>(n, 0));
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                sum = max(sum, dfs(matrix, i, j, m, n, v));
            }
        }
        return sum;
    }
    int dfs(vector<vector<int>>& matrix, int i, int j, int m, int n, vector<vector<int>>& v) {
        int dx[] = {1,0,-1,0};
        int dy[] = { 0,-1,0,1 };
        if(v[i][j] != 0) return v[i][j];
        int mx1 = 1;
        for (int k = 0; k < 4; k++) {
            int nx = i + dx[k], ny = j + dy[k];
            if(nx < 0 || nx >= m || ny < 0 || ny >= n || matrix[nx][ny] <= matrix[i][j]) continue;
            int x = 1 + dfs(matrix, nx, ny, m, n, v);
            mx1 = max(mx1, x);
        }
        v[i][j] = mx1;
        return mx1;
    }
};