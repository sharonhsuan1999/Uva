#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		if (a==0&b==0) break;

		int n,m;			
		n=(int)sqrt(a);  
		m=(int)sqrt(b); 

		if (sqrt(a)>n){
			cout<<m-n<<'\n';
		}
		else{
			cout<<m-n+1<<'\n';
		}

	}		
	return 0;
}


