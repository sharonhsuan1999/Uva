#include <bits/stdc++.h>
using namespace std;

string one_to_ten[10]={"one","two","three","four","five","six","seven","eight","nine","ten"};
std::map<string, int> m;
// std::map<"one", 1> map;
// std::map<"two", 2> map;
// std::map<"three", 3> map;
// std::map<"four", 4> map;
// std::map<"five", 5> map;
// std::map<"six", 6> map;
// std::map<"seven", 7> map;
// std::map<"eight", 8> map;
// std::map<"nine", 9> map;
// std::map<"ten", 10> map;
int main(int argc, char const *argv[])
{
	string input;
	for(int i=0;i<10;i++){
		m[one_to_ten[i]]=i+1;
	}
	int cases;
	cin >> cases;
	while(cases--)
	{
		cin >> input;
		int k=0;
		while(k>=0)
		{
			//cout << "?";
			if (one_to_ten[k].length()==input.length())
			{
				int fal=0;
				for (int i = 0; i < input.length(); ++i)
				{
					if (input[i]!=one_to_ten[k][i])
					{
						fal++;
					}
				}
				if (fal<=1)
				{
					cout << m[one_to_ten[k]] << '\n';
					break;				
				}
			}
			k++;
		}
			
		
	}
	return 0;
}

