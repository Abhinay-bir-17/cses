#include <bits/stdc++.h>
void fastscan(int &number)
{	bool negative = false;
	register int c;
	number = 0;
	c = getchar();
	if (c == '-')
	{	negative = true;
		c = getchar();
	} for (; (c > 47 && c < 58); c = getchar())
		number = number * 10 + c - 48;
	if (negative)
		number *= -1;
}
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
// my way
void code() {

	int n; cin >> n;

	map<int, int> mp;
	int unos = 0;
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		if (mp[temp] == 0)unos += 1;
		mp[temp] += 1;
	}
	if (n < 2) {cout << "0" << endl; return;}
	map<int, int>::iterator it = mp.begin();
	int max_no = INT_MIN;
	while (it != mp.end()) {
		if (it->second > max_no)max_no = it->second;
		++it;
	}
	unos -= 1; // to remove the el with highest count
	if (max_no <= unos) {cout << max_no << endl; }
	else {
		if ((unos + 1) <= (max_no - 1)) {
			cout << unos + 1 << endl;
		} else {
			cout << unos << endl;
		}
	}
}
int main()
{
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input_2023.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output_2023.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t--)code();

}