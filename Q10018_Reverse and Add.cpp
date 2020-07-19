#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int N;
	cin >> N;
	for(int i=0;i<N;i++){

		int cnt=0;
		unsigned int P;
		cin >> P;
		while(1){

			vector<int> v;
			unsigned int c=P;
			bool flag=false;
			while(c!=0){
				
				v.push_back(c%10);
				c/=10;
			}
			// cout<<"v.size="<<v.size()<<endl;
			// for(int i=0;i<v.size();i++){
			// 	printf("!%d ",v[i] );
			// }
			// printf("\n");
			if(cnt>0){
				for(int i=0;i<(v.size()/2);i++){
					
					if(v[i]!=v[v.size()-1-i]){
			
						flag=false;
						break;			
					}
					else flag=true;
			
					// cout << "~~~"<<v.size()-1<<endl;
				}
				if(P<10) flag=true;
			}
			if(flag==true) break;
		
			unsigned int rev_p=0;
			for(int j=0;j<v.size();j++){
	
				rev_p*=10;
				rev_p+=v[j];
			}
			P+=rev_p;
			cnt++;
			// cout << "rev_p=" << rev_p << " cnt=" << cnt << endl;
		
		}		

		cout << cnt << " " << P << endl;
	}

	return 0;
}