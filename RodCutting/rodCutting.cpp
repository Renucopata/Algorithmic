#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
int length[] = {1,3,5,7}; 
int prizes[] = {2,15,20,50}; 

int dp[100000];
int solve_dp(int barSize) {  
    if(barSize == 0) {
        return 0;
    }
    
    if(dp[barSize] == -1) { 
        int gananciaMaxima = -1;
        for(int i = 0; i < sizeof(length)/sizeof(length[0]); i++) { 
            if(barSize >= length[i]) {
                gananciaMaxima = max(gananciaMaxima,prizes[i] + solve_dp(barSize - length[i]));
            }
        }
        dp[barSize] = gananciaMaxima;
    }
    return dp[barSize];
}


int main() {
    memset(dp, -1, sizeof(dp));
    cout<<solve_dp(10)<<endl;
}   