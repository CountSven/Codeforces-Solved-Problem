#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, b, d;
	cin >> n >> b >> d;
	int a[n];

	long long sum = 0, req = 0;

	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
		if ( a[i] <= b ) sum += a[i];
		if ( sum > d ) {
			req++;
			sum = 0;
		}
	}

	cout << req << "\n";

	return 0;
}