#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	while(cin >> tc){
		if(tc<=0) continue;
		for(int i=1;i<=tc;i++){
			string str;
			cin >> str;
			std::vector<char> v;
			int cnt=1,total=0;
			for(int j=0;j<str.length();j++){
				v.push_back(str[j]);
				total+=str[j]-'0';
			}
			bool lab=0;
			while(!v.empty()){
				//printf("cnt=%d\n",cnt);
				lab=0;			
				for(int j=0;j<v.size();j++){
					if(!((total-v[j])%3)){
						//printf("v[%d]=%c\n",j,v[j] );
						total-=v[j];
						v.erase(v.begin()+j);
						cnt++;
						lab=1;
						break;
					}
				}
				if(!lab) break;
			}
			if(cnt%2) printf("Case %d: T\n",i );
			else printf("Case %d: S\n",i );
		}
	}

	return 0;
}