#include<bits/stdc++.h>
using namespace std;
#define maxn 1000000+5

bool check[maxn];
std::vector<int> isp;
void table(){
	memset(check,1,sizeof(check));
	isp.clear();
	check[0]=0;
	check[1]=0;
	for(int i=2;i<=sqrt(maxn);i++){
		if(check[i]){
			for(int j=i*i;j<maxn;j+=i){
				check[j]=0;
			}
		}
	}
	int i=0;
	for(int k=2;k<maxn;k++){
		if(check[k]){
			//printf("%d\n",k);
			isp.push_back(k);
			//printf("isp[%d]=%d\n",i,isp[i]);
			//i++;
		} 				
		//printf("check[%d]=%d\n",check[k] );
	}
}
long long int ser(int x){
	long long int i=0,cnt=0;
	if(check[x]) return 1;
	while(x>1){
		//printf("x=%d i=%d\n",x,i);
		if(check[x]){
			cnt++;
			break;
		} 
		if((x%isp[i])==0){
			x/=isp[i];
			cnt++;
		}
		else i++;
	}
	//printf("cnt=%d\n",cnt);
	return cnt;
}
int main(){
	table();
	int in;
	while(cin >> in){
		long long ans=0;
		for(int i=in;i>=2;i--){
			ans+=ser(i);
			//printf("!!!!!ans=%d in=%d\n",ans,i );
		}
		printf("%lld\n",ans);
	}

	return 0;
}