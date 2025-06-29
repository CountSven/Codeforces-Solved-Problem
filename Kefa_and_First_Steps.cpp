#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int a[n];

	for ( int i = 0; i < n; i++ ) cin >> a[i];

	int cnt = 1, maxCnt = 1;

	for ( int i = 1; i < n; i++ ) {
		if ( a[i] >= a[i-1] ) {
			cnt++;
			maxCnt = max( maxCnt, cnt );
		}
		else cnt = 1;
	}

	cout << maxCnt << "\n";

	return 0;
}