#include <bits/stdc++.h>
using namespace std;

bool SubsetSum(vector<long long> vec, long long S){
    long long N = vec.size();
    long long dp[N+5][S+5];
    memset(dp, 0, sizeof(dp)); 
    dp[0][0] = 1;
    for(long long i=0; i<N;i++){
        for(long long j=0;j<=S;j++){
            dp[i+1][j] = dp[i][j];
            if(j >= vec[i]) dp[i+1][j] |= dp[i][j-vec[i]];
        }
    }
    return dp[N][S];
}

int main(){
    int N;
    int S;
    cin >> N >> S;
    vector<long long> vec(N);
    for(int i=0;i<N;i++) cin >> vec[i];
    cout << SubsetSum(vec,S) << endl;
    return 0;
}