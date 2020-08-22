#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

#define max_n 100
#define max_w 100000
int dp[max_n + 1][max_w + 1];
int weight[max_w + 1];
int cost[max_n + 1];
int n, CAP;
int cnt = 0;

int func(int i, int w) {
    if(i == n + 1)
        return 0;
    if(dp[i][w] != -1) {
        return dp[i][w];
    }

    ++cnt;
    int profit1 = 0, profit2 = 0;
    if(w + weight[i] <= CAP)
        profit1 = cost[i] + func(i + 1, weight[i] + w);
    profit2 = func(i + 1, w);
    dp[i][w] = max(profit1, profit2);
    return dp[i][w];
}

int main() {
    int t;
    cin>>t;
    for(int tt =1; tt<=t;tt++){
    scanf("%d %d", &n, &CAP) ; 
        memset(dp, -1, sizeof(dp));
        for(int i = 1; i <= n; ++i)
            scanf("%d %d", &weight[i], &cost[i]);
    cout<<"Case "<<tt<<": "<<func(1, 0)<<endl;
}
    return 0;
}