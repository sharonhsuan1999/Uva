#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	while(getline(cin,str)){
		int cnt=0;
		for(int i=0;i<str.length();i++){
			if((str[i]>='0')&&(str[i]<='9')){
				cnt+=str[i]-'0';
			}
			else{
				if(str[i]=='b'){
					for(int j=0;j<cnt;j++){
						cout << " ";
					}
				}
				else if(str[i]=='!'){
					cout << '\n';
				}
				else{
					for(int j=0;j<cnt;j++){
						cout << str[i];
					}
				}

				cnt=0;
			}
		}
		cout << '\n';
	}

	return 0;
}