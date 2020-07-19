#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int T;
	cin >> T;
	for(int i=1 ; i<=T ; i++){

		int cur_d,cur_m,cur_y;
		int bir_d,bir_m,bir_y;
		char X;
		scanf("%d%c%d%c%d",&cur_d,&X,&cur_m,&X,&cur_y);
		scanf("%d%c%d%c%d",&bir_d,&X,&bir_m,&X,&bir_y);

		// printf("%d%c%d%c%d\n",cur_d,X,cur_m,X,cur_y);
		// printf("%d%c%d%c%d\n",bir_d,X,bir_m,X,bir_y);

		if(bir_y>cur_y){ 
			cout << "Case #" << i << ": Invalid birth date" << endl;
			}
		else if((bir_y==cur_y) && ((bir_m>cur_m) || ((bir_m==cur_m) && (bir_d>cur_d)))){
			cout << "Case #" << i << ": Invalid birth date" << endl;
		}
		else{
			cur_y-=bir_y;
			cur_m-=bir_m;
			cur_d-=bir_d;

			if((cur_m<0) || ((cur_m==0) && (cur_d<0))) cur_y--;

			if(cur_y>130){ 
				cout << "Case #" << i << ": Check birth date" << endl;
			}
			else{
				cout << "Case #" << i << ": " << cur_y << endl;
			}
		}
	}

	return 0;
}