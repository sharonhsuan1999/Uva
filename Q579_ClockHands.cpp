#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int h;
	char dontcare;
	int m;
	int h_ang;
	int m_ang;
	float ang;
	while(cin >> h >> dontcare >> m){

		if((h==0)&&(m==0)) break;
		else if((h>12)||(h<1)||(m<0)||(m>59)) break;

		//h_ang = 30 * h + 30 * (m/60);
		//m_ang = 6 * m;
		h_ang = 60 * 30 * h + 30 * m;
		m_ang = 60 * 6 * m;
		ang = abs(m_ang - h_ang);
		ang /= 60;
		ang = min(ang,(360-ang));

		//cout << "h=" << h << "m=" << m << endl; 
		//cout << "h_ang=" << h_ang << endl; 
		printf("%.3f\n",ang);
		//cout << min(ang,(360-ang)) << endl;

	}

	return 0;
}