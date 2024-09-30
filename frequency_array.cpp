#include<bits/stdc++.h>
using namespace std;
    int largestAltitude(vector<int>& gain) {
        vector<int>pre(gain.size()+1);
        pre[0] = 0;
        int m=0;
        for(int i=0;i<gain.size();i++){
            pre[i+1] = pre[i] + gain[i];
            m = max(pre[i+1],m);
        }
        return m;
    }
    int main(){
        int n;
        cout << "Number of elements:";
        cin >> n;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            ans.push_back(a);
        }
        cout << largestAltitude(ans);
        return 0;
    }
