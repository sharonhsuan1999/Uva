#include<bits/stdc++.h>
using namespace std;

char arr[26];
map<char, char> loc;
map<char, char> m;

int funct(char Key,char Value){
	
	m[Key]=Value;
	if(m[Value]==0){
		m[Value]=loc[Key];
		return funct(Value,loc[Key]);
	}
		
	if(m[Value]!=loc[Key]){
		return false;
	}
	else return true; 
	
}

int main(){
	
	int tc;
	while(cin >> tc){		
		for(int i=0;i<tc;i++){
			m.clear();
			for(int j=0;j<26;j++){
				cin >> arr[j];
				loc[ arr[j] ]='A'+j;
			}
			int cur=0;
			int cnt=0;
			bool lab=0;
			for(int k=0;k<26;k++){
				for(int l=0;l<26;l++){
					if(m[arr[k]]!=0) continue;
					map<char,char> temp=m;
					if(!funct(arr[k],'A'+l)){
						m=temp;
						lab=1;
					}
					else lab=0;
					
				}
			}
			if(!lab){
				for(int k=0;k<26;k++){
					if(m[m[arr[k]]]!=loc[arr[k]]) lab=1;
				}
			}

			if(lab) printf("No\n");
			else printf("Yes\n");
		}
	}

	return 0;
}