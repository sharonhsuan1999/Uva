#include<bits/stdc++.h>
using namespace std;

int main(){
	int in;
	while(cin >> in){
		if(!in) break;
		printf("Original number was %d\n",in );
		int arr[15];
		std::vector<int> circle;
		int cnt=0;

		while(1){
			int now=in,i=0;
			while(now){
				arr[i]=now%10;
				now/=10;
				i++;
			}
			sort(arr,arr+i);
			int maxn=0,minn=0;
			for(int j=0,k=(i-1);j<i;j++,k--){
				maxn*=10;
				maxn+=arr[k];
				minn*=10;
				minn+=arr[j];
			}
			int subn=maxn-minn;
			printf("%d - %d = %d\n",maxn,minn,subn);
			cnt++;
			bool flag=0;
			if(!circle.empty()){

				for(int j=0;j<circle.size();j++){
					if(subn==circle[j]){ 
						flag=1;
						break;
					}
				}
			}
			if(flag){
				printf("Chain length %d\n\n",cnt );
				break;
			}
			circle.push_back(subn);
			in=subn;
		}
	} 	

	return 0;
}