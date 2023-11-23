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
void code() {
	int n; cin >> n;
	if (n == 1) {
		cout << "0" << endl; return;
	}
	if ( (n % 3)) {
		cout << "-1" << endl; return;
	}
	int temp = n;
	int two = 0, three = 0;
	for (int i = 2; i * i <= temp; i++) {
		while (temp % i == 0) {
			if (i != 2 && i != 3) {
				cout << "-1" << endl; return;
			}
			if (i == 2)two += 1;
			else three += 1;
			temp = temp / i;
		}
	}
	// if temp is prime
	if (temp > 1) { // only when prime no is n = 3
		if (temp == 3)three += 1;
		else {
			cout << "-1" << endl; return; // prime no > 3
		}
	}

	if (two == three)cout << three;
	else if ( two > three)cout << "-1";
	else {
		int aux = three - two;
		cout << aux + three;
	}
	cout << endl;
}
// codeforces approach

void code1() {
	int n; cin >> n;
	int temp = n, two = 0, three = 0;
	while (temp % 2 == 0) {
		two += 1;
		temp = temp / 2;
	}
	while (temp % 3 == 0) {
		three += 1;
		temp = temp / 3;
	}
	if (temp != 1) {
		cout << "-1" << endl; return;
	}
	if (two == three)cout << two;
	else if (two < three) {
		cout << (three - two) + three;
	}
	else cout << "-1";
	cout << endl;
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
	int t; cin >> t; while (t--)code1();

}