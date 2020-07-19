#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	while(cin >> n){
		if(n<0) break;
		for(int i=0;i<n;i++){
			int f;
			cin >> f;
			int total=0;
			for(int j=0;j<f;j++){
				int x,y,z;
				cin >> x >> y >> z;
				total+=(x*z);
			}
			cout << total << '\n';
		}
	}


	return 0;
}