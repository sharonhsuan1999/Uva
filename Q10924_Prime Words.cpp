#include<bits/stdc++.h>
using namespace std;

//a=97
//A=65

int prime(int n){

	for(int j=2 ; j<=sqrt(n) ; j++){

		if(n%j==0)	return 0;
	}
	return 1;
}

int main(){

	string str;

	while(cin >> str){

		int total=0;
		int lab;

		for(int i=0 ; i<str.size() ; i++){
			if(str[i]>96) total += str[i]-96;
			else total += str[i]-38;
		}

		if(prime(total)==1) cout << "It is a prime word." << endl;
		else cout << "It is not a prime word." << endl;

		// cout << total << endl;
		// for(int j=2 ; j<sqrt(total) ; j++){

		// 	if(total%j==0){
		// 		lab = 0;
		// 		break;
		// 	}
		// }
	}	

	return 0;
}
