#include<bits/stdc++.h>
using namespace std;
    
    vector<vector<int>>permute(vector<int>&nums){
        vector<vector<int>>result;
        if(nums.size() == 1){
            vector<int>add;
            add.push_back(nums[0]);
            result.push_back(add);
            return result;
        }
        int x;
        for(int i=0;i<nums.size();i++){
            x = nums[i];
            vector<int>remain;
            for(int j=0;j<nums.size();j++){
                if(i != j){
                    remain.push_back(nums[j]);
                }
            }

            vector<vector<int>> bfr = permute(remain);
            for(vector<int>& p: bfr){
                p.insert(p.begin(),x);
                result.push_back(p);
            }

        }
        return result;

    }




int main(){
    int numSize;
    cin >>  numSize;

    cout << "Enter values in the vector";
    int x;
    vector<int>nums;
    for(int i=0;i<numSize;i++){
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> prr;
    prr = permute(nums);

    for(int i=0;i<prr.size();i++){
        for(int j=0;j<prr[i].size();j++){
            cout << prr[i][j] << " ";
        }
        cout << endl;
    }
}