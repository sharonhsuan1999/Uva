#include<bits/stdc++.h>
using namespace std;

struct Car{
	string m;
	int l;
	int h;
};

int main(){
	int tc;
	bool flag=0;
	while(cin >> tc){
		//printf("flag=%d\n",flag );
		for(int i=0;i<tc;i++){
			if(flag) cout << '\n';
			flag=1;
			int d;
			cin >> d;
			Car car[d];
			for(int j=0;j<d;j++){
				// string str;
				// getline(cin,str);
				// stringstream ss;
				// ss<<str;
				// ss>>str>>car[j].l>>car[j].h;
				//string str;
				cin >> car[j].m >> car[j].l >> car[j].h;
				//printf("%s\n",str );
				//cout << str << " abc" << '\n';
			}
			int q;
			cin >> q;
			int arr[q];
			for(int k=0;k<q;k++){
				cin >> arr[k];
				string cur_m;
				int cnt=0;
				for(int j=0;j<d;j++){
					if(arr[k]<=car[j].h && arr[k]>=car[j].l){
						cur_m=car[j].m;
						cnt++;
					}
					if(cnt>1){
						printf("UNDETERMINED\n");
						break;
					}
				}
				if(cnt==0) printf("UNDETERMINED\n");
				if(cnt==1) cout << cur_m << '\n';
			}
		}
		
	}

	return 0;
}