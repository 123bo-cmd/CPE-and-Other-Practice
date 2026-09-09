#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str1,str2;
	
	while(getline(cin,str1))
	{
		str2=str1;
	
		reverse(str1.begin(),str1.end());
	
		if(str1==str2)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}