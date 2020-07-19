#include<bits/stdc++.h>
using namespace std;
#define maxn 46340+5

bool check[maxn];
std::vector<int> isp;
std::vector<long long int> ans;
void table(){
	memset(check,1,sizeof(check));
	isp.clear();
	check[0]=0;
	check[1]=0;
	for(int i=2;i<=maxn;i++){
		if(check[i]){
			for(int j=i*i;j<maxn;j+=i){
				check[j]=0;
			}
		}
	}
	int i=0;
	for(int k=2;k<maxn;k++){
		if(check[k]){
			isp.push_back(k);
		} 				
	}
}
int main(){
	table();
	long long int in;
	while(cin >> in){
		if(in==0) break;
		ans.clear();
		long long int n=in;
		if(in<0){
			ans.push_back(-1);
			n*=(-1);
		}
		long long int i=0;
		while(n>1 && i<isp.size()){
			// if(check[n]){
			// 	ans.push_back(n);
			// 	break;
			// }
			if((n%isp[i])==0){
				n/=isp[i];
				ans.push_back(isp[i]);
			}
			else i++;
		}

		if(n!=1){
			ans.push_back(n);
		}

		printf("%lld = %lld",in,ans[0]);
		if(ans.size()>1){
			for(int j=1;j<ans.size();j++){
				printf(" x %lld",ans[j]);
			}
		}
		printf("\n");
	}

	return 0;
}