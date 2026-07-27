#include<iostream>
using namespace std;
int main()
{
	int n,t,i,j;
	int binary[100];
	while(cin>>n)
	{
		t=n;
		i=0;
		while(t>0)
		{
			binary[i]=t%2;
			t=t/2;
			i++;
		}
		
		for(j=i-1;j>=0;j--)
		{
			cout<<binary[j];
		}
		cout<<endl;
	}
	return 0;
}