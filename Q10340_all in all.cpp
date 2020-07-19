#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str1;
	string str2;

	while(cin >> str1 >> str2){

		int cnt = 0;
		char arr[str1.size()];
		for(int i=0, j=0 ; i<str1.size(), j<str2.size() ; ){
				
				if(str1[i] == str2[j]){
					//cout << endl << str1[i] << "j=" << j << endl;
					arr[i] = str1[i];
					i++;
					j++;
				}
				else j++;
			
		}

		for(int k=0 ; k<str1.size() ; k++){

			if(str1[k] == arr[k]){ 
				//cout << str1[k];
				cnt++;
			}
		}

		
		if(cnt == str1.size()) cout << "Yes" << endl;	
		else cout << "No" << endl;
	}

	return 0;
}