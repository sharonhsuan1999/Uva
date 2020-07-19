#include<bits/stdc++.h>
using namespace std;

// int cas(int cnt,int n,int l){
// 	if(n<=1) return cnt;
// 	if(n>l) {
// 		cnt--;
// 		return cnt;
// 	}

// 	if(n%2==0){
// 		n/=2;
// 		cnt++;
// 	}
// 	else{
// 		n=(3*n)+1;
// 		cnt++;
// 	}
// 	cas(cnt,n,l);
// }

int main(){

	int a,l,count=0;
	while(cin >> a >> l){
		if((a<0)||(l<0)) break;
		long long int n = a;
		count++;
		int cnt=1;		
		if(a==0){
			printf("Case %d: A = %d, limit = %d, number of terms = %d\n",count,a,l,cnt);
			continue;
		}

		//cout << n << " " << l << " " << cnt;
		while(n!=1){
			if(n>l){
				cnt--;
				break;
			}
		
			if(n%2==0){
				n/=2;
				cnt++;
			}
			else{
				n=(3*n)+1;
				cnt++;
			}
			
		}
		//cnt = cas(cnt,n,l);
		printf("Case %d: A = %d, limit = %d, number of terms = %d\n",count,a,l,cnt);
		//cout << "Case " << count << ": A = " << a << ", limit = " << l << ", number of terms = " << cnt << '\n';
	}

	return 0;
}