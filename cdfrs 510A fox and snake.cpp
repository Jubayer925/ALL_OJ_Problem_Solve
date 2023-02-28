#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,a,b,c; cin>>t; while(t--) {
		cin>>a>>b>>c;
		if(a<b && b<c || c<b && b<a) {
			cout<<b<<'\n';
		} else if(b<a && a<c || c<a && a<b) {
			cout<<a<<'\n';
		} else if(a<c && c<b || b<c && c<a) {
			cout<<c<<'\n';
		}
	}

	return 0;
}