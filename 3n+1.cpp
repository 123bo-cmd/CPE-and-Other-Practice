#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int maxlength,cyclelength;
	long long int i,j,k,n,start,end;
	
	while(cin>>i>>j)
	{	
		start=min(i,j);
		end=max(i,j);
		
		maxlength=0;
		
		for(k=start;k<=end;k++)
		{
			n=k;
			cyclelength=1;
			
			while(n>1)
			{
				if(n%2==0)
				{
					n=n/2;
				}
				else
				{
					n=3*n+1;
				}
				cyclelength++;
			}
			
			if(cyclelength>maxlength)
			{
				maxlength=cyclelength;
			}
		}
		cout<<i<<" "<<j<<" "<<maxlength<<endl;
	}
	return 0;
}