#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto i=nums.begin(); i != nums.end(); i++){
            ans = ans^(*i);
        }
        return ans;
    }    
};

int main(){
    Solution s;
    vector<int> v = {4, 1, 2, 1, 2};
    cout << s.singleNumber(v) << endl;
}
/*
* bit manipulation - XOR technique used when we have to find a unique element
*/