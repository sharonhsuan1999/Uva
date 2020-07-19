#include<bits/stdc++.h>
using namespace std;

int cas(int n){

	int count=1; 
	while(n!=1){
		if(n%2) n=(3*n)+1;
		else n/=2;
		count++;
	}
	return count;
}

int main(){
	
	int i,j;
	while(cin >> i >> j){

		if(i<1 || i>1000000 || j<1 || j>1000000) break;

		int min, max, cnt=0;
		min=i;
		max=j;
		if(i>j) swap(min,max);

		while(min<=max){
			if(cas(min)>cnt) cnt=cas(min);
			min++;
			//cout << "min=" << min << " cnt=" << cnt;
		}
		cout << i << " " << j << " " << cnt << endl;
	}

	return 0;
}