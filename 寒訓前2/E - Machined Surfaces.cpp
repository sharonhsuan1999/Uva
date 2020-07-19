#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	while(~scanf("%d\n",&n)){
		if(n==0) break;
		int cnt[n];
		int min=25;
		string str[n];
		for(int i=0;i<n;i++){
			scanf("\n",&n);
			getline(cin,str[i]);
			cnt[i]=0;
			for(int j=0;j<25;j++){				
				if(str[i][j]==' ') cnt[i]++;
			}
			//cout << "cnt[" << i << "]=" << cnt[i] <<'\n';
			if(cnt[i]<min) min=cnt[i];
			//cout << "min=" << min <<'\n';
		}

		int total=0;
		for(int k=0;k<n;k++){
			total+=cnt[k]-min;
		}

		cout << total << '\n';
	}
	return 0;
}