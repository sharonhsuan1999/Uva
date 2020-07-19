#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int times;
	cin >> times;
	for(int i=0 ; i<times ; i++){
		int n;
		cin >> n;
		int arr[n];
		for(int j=0 ; j<n ; j++){
			cin >> arr[j];
		}

		double ave=0;
		double cnt=0;
		for(int k=0 ; k<n ; k++){
			ave+=arr[k];
		}
		ave/=n;
		//cout << "ave=" << ave << endl;

		for(int l=0 ; l<n; l++){
			if(arr[l]>ave) cnt++;
		}
		//cout << "cnt=" << cnt << endl;

		cnt = (cnt/n)*100;

		printf("%.3lf%\n",cnt);

	}

	return 0;
}