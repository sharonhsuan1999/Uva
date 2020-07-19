#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	while(getline(cin,str)){
		int cnt=0;
		int pre,now;
		if(((str[0]>='A')&&(str[0]<='Z'))||((str[0]>='a')&&(str[0]<='z'))){
			pre=1;
		}
		else pre=0;
		for(int i=1;i<str.length();i++){			
			if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))){
				now=1;
			}
			else now=0;

			//cout << "pre=" << pre << " now=" << now << '\n';
			if((pre==1)&&(now==0)) cnt++;
			
			pre=now;
		}
		cout << cnt << '\n';
	}

	return 0;
}