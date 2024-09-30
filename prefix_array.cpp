#include<bits/stdc++.h>
using namespace std;

    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>ans(101,0);
        for(auto &a:logs){
            ans[a[0]-1950]++;
            ans[a[1]-1950]--;
        }

        int m=ans[0],ind=0;
        
        for(int i=1;i<101;i++){
            ans[i] = ans[i-1]+ans[i];
            if(m < ans[i]){
                ind = i;
                m = ans[i];
            }          
            
        }
        return ind+1950;
        
    }
    int main(){
        vector<vector<int>>inpu;
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int x,y;
            cin >> x >> y;
            inpu.push_back({x,y});
        }
        cout << maximumPopulation(inpu);
        return 0;
    }
