#include<bits/stdc++.h>
using namespace std;

vector<long long> pri_fac(long long N, string mode){
    if(mode == "unique"){
        vector<long long> yakusu;
        long long now = 0; 
        long long a = 2;
        while(N >= a*a){
            if(N%a == 0){
                if (a != now){
                    yakusu.push_back(a);
                    now = a;
                }
                N /= a;
            }else{
                a++;
            }
        } 
        if(N != now & N != 1) yakusu.push_back(N);
        return yakusu;
    }else if(mode == "all"){
        vector<long long> yakusu;
        long long now = 0; 
        long long a = 2;
            while(N >= a*a){
                if(N%a == 0){
                    yakusu.push_back(a);
                    N /= a;
                }else{
                    a++;
                }
            } 
        if(N != 1) yakusu.push_back(N);
        return yakusu;
    }
}

int main(){
    long long N;
    string mode;
    cin >> N;
    cin >> mode;

    vector<long long> test;

    test = pri_fac(N,mode);

    for(int i=0;i<test.size();i++){
        cout << test[i] << endl;
    }

    return 0;
}
