#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int people[n+1];
		int size[n+1];
		for(int i=1;i<(n+1);i++){
			people[i]=i;
			size[i]=1;
		}
		
		int max_size=0;

		while(m--){
			int p1,p2;
			cin >> p1 >> p2;
			int p_max=people[max(p1,p2)];
			int p_min=people[min(p1,p2)];
			if (people[p1]==people[p2])
			{
				continue;
			}
			for(int k=1;k<(n+1);k++){
				if(people[k]==p_max){
					people[k]=p_min;
					size[p_max]--;
					size[p_min]++;
				}
			}

			// for(int j=1;j<(n+1);j++){
			// 	printf("%d ",size[j] );
			// }
			// printf("\n");
			// for(int j=1;j<(n+1);j++){
			// 	printf("%d ",people[j] );
			// }
			// printf("\n");printf("\n");
	
			// cout << '!'<<max_size<<'~' << '\n';
		}

		
		for(int j=1;j<(n+1);j++){
			max_size = max(max_size,size[j]);
		}

		cout << max_size << '\n';
	}

	return 0;
}