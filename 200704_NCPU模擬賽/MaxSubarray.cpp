#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	while(cin>>n){
		if (n==0) break;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int sum=0;
		int MAX=a[0];
		for (int i = 0; i < n; ++i)
            {
                sum += a[i];
                sum = max(0, sum);
               MAX= max(sum,MAX);
            }
            if (MAX>0){
            	cout<<"The maximum winning streak is "<<MAX<<"."<<'\n';
            }
            else cout<<"Losing streak."<<'\n';
	}
	return 0;
}