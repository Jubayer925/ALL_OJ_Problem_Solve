#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a,b,c,s;
	cin>>a>>b>>c;
	for(int i=0; i<a.size(); i++) {
		s+=a[i];
	}

	for(int i=0; i<b.size(); i++) {
		s+=b[i];
	}


	sort(c.begin(),c.end());
	sort(s.begin(),s.end());

	if(c==s) {
		cout<<"YES\n";
	} else {
		cout<<"NO\n";
	}

	return 0;
}