#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,m;
	while(cin >> n >> m){
		
		int u,d,ans=1e9,key;
		while(m--){
			cin >> u >> d;

			key=((d*n)/(u+d))+1;
			ans=min(((u*key)-(d*(n-key))),ans);

			//printf("u=%d d=%d d*n=%d ans=%d\n",u,d,d*n,ans );
		}

		cout << ans << '\n';
	}

	return 0;
}