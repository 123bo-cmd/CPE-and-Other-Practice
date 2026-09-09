#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int final[10000];
	int truee;
	long long int i,j,n,m,temp,time,n1,n2,total;
	
	while(cin>>n>>m)
	{
		truee=0;
		i=0;
		for(temp=n;temp<=m;temp++)
		{
			n1=temp;
			time=1;
			while(n1>=10)
			{
				n1=n1/10;
				time++;
			}
			
			n2=temp;
			total=0;
			
			while(n2>0)
			{
				total=total+pow(n2%10,time);
				n2=n2/10;
			}
			
			if(total==temp)
			{
				truee=1;
				final[i]=temp;
				i++;
			}
		}
		if(truee==0)
		{
			cout<<"none"<<endl;
		}
		else
		{
			for(j=0;j<=i-1;j++)
			{
				cout<<final[j];
				cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
