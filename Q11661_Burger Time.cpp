#include<bits/stdc++.h>
using namespace std;

int main(){
		
	int road;
	while(cin >> road){
		
		if(road==0) break;

		char arr[road];
		int des = road;
		for(int i=0 ; i<road ; i++)	cin >> arr[i];

		int r=-1;
		int d=-1;

		for(int j=0 ; j<road ; j++){

			if(arr[j]=='Z'){
				des = 0;
				j = road;
				break;
			}
			else if(arr[j]=='D') r = j;
			else if(arr[j]=='R') d = j;

			if((r!=-1)&&(d!=-1)&&(abs(d-r)<des)) des = abs(d-r);
			
		}
		cout << des << endl;
	}

	return 0;
}