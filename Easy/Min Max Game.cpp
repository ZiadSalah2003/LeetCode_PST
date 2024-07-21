// Problem-Link : https://algo.codemarshal.org/contests/icpc-dhaka-19-preli/problems/2293
// Problem-ID : 2293 
// Problem Name: Min Max Game
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
    int minMaxGame(vector<int>& nums) {
        while (nums.size()!=1) {
            vector<int> temp;
            bool f=true;
            for(int i=0;i<nums.size();i+=2){
                if(f){
                    temp.push_back(min(nums[i],nums[i+1]));
                }else{
                    temp.push_back(max(nums[i],nums[i+1]));
                }
                f=!f;
                nums=temp;
            }
        }
        return nums[0];
    }
};