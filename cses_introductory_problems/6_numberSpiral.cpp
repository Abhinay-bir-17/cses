#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(auto i = (a); i < (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define RI0n(i,n) FOR(i,0,(n))
#define RI1n(i,n) FOR(i,1,(n))
#define RI0n1(i,n) FOR(i,0,(n)-1)
#define RDn10(i,n) FORD(i,(n)-1,0)
// #define push_back pb;
typedef long long ll;
typedef vector<int> vi;
const ll inf = 1e9 + 7;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
ll fact[N];
void code() {

    ll row, col; cin >> row >> col;
    ll ans;
    if (row == col) {
        ans = row * col - (row - 1);
    } else if (row > col) {
        if (row & 1) {
            ans = row * row - (row - 1) - (row - col);
        } else {
            ans = row * row - (row - 1) + (row - col);
        }
    } else {
        if (col & 1) {
            ans = col * col - (col - 1) + (col - row);
        } else {
            ans = col * col - (col - 1) - (col - row);
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
        code();
}
