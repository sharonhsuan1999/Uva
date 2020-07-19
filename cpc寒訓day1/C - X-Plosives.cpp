#include<bits/stdc++.h>
using namespace std;

int s[100005];
int cnt=0;

int fi(int n){
	if(s[n]<0) return n;
	
	return s[n] = fi(s[n]);	
}

void uni(int a,int b){
	int ha = fi(a);
	int hb = fi(b);

	// printf("ha=%d a=%d\n",ha,a);
	// printf("hb=%d b=%d\n",hb,b);

	if(ha==hb){
		//cout << "abc" << '\n';
		cnt++;
	}
	else{
		if(s[ha]<=s[hb]){
			s[ha]+=s[hb];
			s[hb]=ha;
		}
		else{
			s[hb]+=s[ha];
			s[ha]=hb;
		}
	}

}

int main(){
	
	int p1,p2;
	memset(s,-1,sizeof(s));
	while(~scanf("%d",&p1)){

		if(p1==(-1)){ 
			cout << cnt << '\n';
			cnt=0;
			memset(s,-1,sizeof(s));
			continue;
		}
		scanf("%d",&p2);

		uni(p1,p2);

		//cout << '~' << cnt << '\n';
	}

	return 0;
}