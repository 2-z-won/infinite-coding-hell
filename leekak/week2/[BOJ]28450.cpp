#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int map[N][M];
    long long dp[N][M];
    memset(map, 0, sizeof(map));
    memset(dp, 0, sizeof(dp));
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++)
            cin >> map[i][j];
    }
    int H;
    cin >> H;

    dp[0][0] = map[0][0];
    for(int i=1; i<N; i++) {
        dp[i][0] = dp[i-1][0] + map[i][0];
    }
    for(int j=1; j<M; j++) {
        dp[0][j] = dp[0][j-1] + map[0][j];
    }

    for(int i=1; i<N; i++) {
        for(int j=1; j<M; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + map[i][j];
        }
    }
    /*
    cout<<"\n";
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
     */

    if(dp[N-1][M-1] > H) cout << "NO";
    else cout << "YES" << "\n" << dp[N-1][M-1];

    return 0;
}
