// Problem-Link : https://leetcode.com/problems/valid-sudoku/description/
// Problem-ID : 36
// Problem Name: Valid Sudoku
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
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> r(9), c(9), b(9);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                int n = board[i][j] - '0';
                int x = (i / 3) * 3 + j / 3;
                if (r[i].count(n) || c[j].count(n) || b[x].count(n)) {
                    return false;
                }
                r[i].insert(n);
                c[j].insert(n);
                b[x].insert(n);
            }
        }
        return true;
    }
};