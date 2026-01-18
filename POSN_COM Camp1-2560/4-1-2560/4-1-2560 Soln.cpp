#include <iostream>
using namespace std;

const int N = 30;
const int M = 600;
int n, a[N];
char g[N][M];

int main() {
    cin.tie(nullptr)->ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) g[i][j] = ' ';
    int now = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < a[i]; j++) g[j][now+j] = '\\';
        for (int j = 0; j < a[i]; j++) g[j][now+2*a[i]-1-j] = '/';
        now += a[i] * 2;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < now; j++) cout << g[i][j]; cout << "\n";
    }
}
