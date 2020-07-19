#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T;
	cin >> T;
	for(int i=1;i<=T;i++){
		
		int a,b;
		int n;
		cin >> a >> b;
		if(a%2==0) a++;
		if(b%2==0) b--;
		n=((b-a)/2)+1;
		a=((a+b)*n)/2;

		//cout << n << endl;
		cout << "Case " << i << ": " << a << endl;
	}

	return 0;
}