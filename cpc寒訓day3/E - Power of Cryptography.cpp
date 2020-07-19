#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	double p;
	while(cin >> n >> p){
		p=pow(p,(1.0/n));
		printf("%.0lf\n",p);
	}

	return 0;
}