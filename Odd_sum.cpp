#include<iostream>
using namespace std;
int main()
{
	int t,i,j,a,b,start,end,sum;
	cin>>t;
	
	for(i=1;i<=t;i++)
	{
		cin>>a;
		cin>>b;
		
		if(a%2==0)
		{
			start=a+1;
		}
		else
		{
			start=a;
		}
		
		if(b%2==0)
		{
			end=b-1;
		}
		else
		{
			end=b;
		}
		
		sum=0;
		
		for(j=start;j<=end;j=j+2)
		{
			sum=sum+j;
		}
		
		cout<<"Case "<<i<<": "<<sum<<endl;
	}
	return 0;
}