#include<bits/stdc++.h>
using namespace std;

int main(){

	string str[105];
	int i=0,max=0;
	while(getline(cin,str[i])){
		//cout << "str[" << i << "]=" << str[i] << '\n';
		if(str[i].length()>max) max=str[i].length();
		i++;
		//cout << "i=" << i << '\n';
	}
	for(int j=0;j<max;j++){
		for(int k=i-1;k>=0;k--){
			if(j>=str[k].length()) cout << ' ';
			else cout << str[k][j];
		}
		cout << '\n';
	}

	return 0;
}