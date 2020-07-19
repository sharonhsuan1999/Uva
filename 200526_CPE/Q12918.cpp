#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	while(cin >> tc){
		int n,m;
		for(int i=0;i<tc;i++){
			cin >> n >> m;
			unsigned int total=0;
			for(int j=(m-1);j>=(m-n);j--){
				total+=j;
			}
			printf("%d\n",total );
		}

	}

	return 0;
}