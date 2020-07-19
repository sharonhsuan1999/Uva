#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int poi;
	while(cin >> poi){
		if(poi==0) break;

		bool arr[poi+5][poi+5];
		for(int i=1;i<=poi;i++){
			for(int j=1;j<=poi;j++){
				arr[i][j]=0;
			}
		}
		int n1,n2;
		while(cin >> n1){
			//cout << "~abc" << n1 << '\n';
			if(n1==0) break;

			while(cin >> n2){
				if(n2==0) break;

				arr[n1][n2]=1;
			}
		}
		for(int l=1;l<=sqrt(poi);l++){
			for(int i=1;i<=poi;i++){
				for(int j=1;j<=poi;j++){
					if(arr[i][j] && i!=j){
						for(int k=1;k<=poi;k++){
							if(arr[j][k]==1) arr[i][k]=1;
						}					
					} 
				}
			}
		}

		int t,outp;
		cin >> t;		
		while(t--){
			cin >> outp;
			
			int cnt=0;
			std::vector<int> v;
			for(int l=1;l<=poi;l++){
				if(arr[outp][l]==0){ 
					v.push_back(l);
					cnt++;
				}
			}
			cout << cnt;
			for(int m=0;m<cnt;m++){
				cout << " " << v[m];
			}
			cout << '\n';
		}
	}

	return 0;
}