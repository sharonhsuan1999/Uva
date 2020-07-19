#include <bits/stdc++.h>
using namespace std;

int p[30000+5];
int maxn = 1;

int fi(int a){
	return p[a]<0?a:p[a]=fi(p[a]);
}

void uni(int a, int b){
	int fa=fi(a);
	int fb=fi(b);
	if (fa!=fb){
		if (p[fa]<p[fb]){ //a big		
			p[fa]+=p[fb];
			maxn = max(-p[fa],maxn);
			p[fb]=fa;
		}
		else{
			p[fb]+=p[fa];
			maxn = max(-p[fb],maxn);
			p[fa]=fb;
		}
	}
}

int main(int argc, char const *argv[]){
	int t,n,m,a,b;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i){
		memset(p,-1,sizeof(p));
		maxn = 1;
		scanf("%d %d",&n,&m);
		for (int j = 0; j < m; ++j){
			scanf("%d %d",&a,&b);
			uni(a,b);
		}
		printf("%d\n",maxn );
	}
	return 0;
}