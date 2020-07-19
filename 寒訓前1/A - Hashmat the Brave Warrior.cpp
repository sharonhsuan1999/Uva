#include<bits/stdc++.h>
using namespace std;

int main(){

	long long int x,y;
	while(cin >> x >> y){
		if((x>=0)&&(y>=0)) cout << abs(y-x) << '\n';
	}

	return 0;
}