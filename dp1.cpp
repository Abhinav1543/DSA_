#include<bits/stdc++.h>
using namespace std;
    int dp[51];
    int dpmaker(string &s,int pos,unordered_set<string>& dict){
        if(pos >= s.size()) return 0;
        if(dp[pos] != -1) return dp[pos];



        string la;
        int m,miin = INT_MAX;
        for(int i=pos;i<s.size();++i){
            m = 0;
            la.push_back(s[i]);
            if(dict.count(la) == 0){m += i-pos+1;}
            
            m += dpmaker(s,i+1,dict);
            miin = min(miin,m);
            
        }
        return dp[pos] = miin;
    }

    
    int main(){
        string s;
        
        cin >> s;
        string x;
        
        // Creating a dictionaty in accordance with the question
        vector<string>dictionary;
        while (cin >> x && x != "END") {
        
        dictionary.push_back(x);
    }
        memset(dp,-1,sizeof(dp));
        // creating an unordered set to  in o(1)
        unordered_set<string>map(dictionary.begin(),dictionary.end());
        cout << dpmaker(s,0,map);
        return 0;

    }
    

