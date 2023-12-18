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
	// code here abhinay bir come on you can do it okay.
	string s; cin >> s;
	int n = s.length();
	map<char, int> mp;
	RI0n(i, n) {

		mp[s[i]] += 1;
	}
	if (mp.size() == 1) {
		cout << s << endl; return;
	}
	string ans, odd_ch;
	int odd = 0, flag = 0;
	for (auto it : mp) {
		if (it.second & 1) {
			flag = 1;
			odd += 1;
			if (odd > 1) {
				cout << "NO SOLUTION" << endl; return;
			} else {
				odd_ch = it.first;
			}
		}

		for (int i = 0; i < (it.second / 2); i++)ans += it.first;
	}

	if (flag)ans += odd_ch;
	odd = ans.length();
	if (flag)odd -= 1;
	string temp = ans;
	for (int i = odd - 1; i >= 0; i--)ans.push_back(temp[i]); cout << ans << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	code();

}