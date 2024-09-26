#include<bits/stdc++.h>
using namespace std;

    long long modd(long long a,long b){
        long long res = 1;
        while(b){
            if(b%2==1){
                res = (res*a)%int(1e9+7);
            }
            
            b = b/2;
            a = (a*a)%int(1e9+7);

        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long e,o;
        if(n%2 == 0) e=o=n/2;
        else{
            e = (n/2)+1;
            o = n/2;
        }
        return (modd(5,e)*modd(4,o))%int(1e9+7);
        
    }
    int main(){
        long long num;
        cin >> num;
        cout << countGoodNumbers(num);
        return 0;
    }

