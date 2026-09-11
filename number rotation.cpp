#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	int final;
	
	while(cin>>s)
	{
		reverse(s.begin(),s.end());
		final=stoi(s);
		cout<<final<<endl;
	}

	return 0;
}