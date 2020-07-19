#include<bits/stdc++.h>
using namespace std;
#define maxn 1299709+5

bool prime_check[maxn];
vector<int> is_prime;
void table(){
	memset(prime_check,1,sizeof(prime_check));
	is_prime.clear();
	prime_check[0]=0;
	prime_check[1]=0;
	for(int i=2;i<=sqrt(maxn);i++){
		if(prime_check[i]){
			for(int j=i*i;j<maxn;j+=i){
				prime_check[j]=0;
			}
		}
	}

	for(int k=2;k<maxn;k++){
		if(prime_check[k]) is_prime.push_back(k); 
	}
}

int main(){
	table();
	//for(int i=0;i<is_prime.size();i++) printf("%-10d\n",is_prime[i] );
	int in;
	while(cin >> in){
		if(!in) break;
		if(prime_check[in]){
			cout << 0 << '\n';
			continue;
		}
		int L=0;
		int R=is_prime.size();
		int mid;
		while(L<=R){
			mid=(R-L)/2+L;
			if(is_prime[mid]>in) R=mid-1;
			else L=mid+1;
			//printf("L=%d R=%d mid=%d\n",L,R,mid );
			//printf("is_prime[mid]=%d\n",is_prime[mid] );
		}
		int ans;
		if(is_prime[mid]>in) ans=is_prime[mid]-is_prime[mid-1];
		else ans=is_prime[mid+1]-is_prime[mid];
		cout << ans << '\n';
	}

	return 0;
}