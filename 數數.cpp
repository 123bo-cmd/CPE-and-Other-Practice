#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,n,m,total,count;
	while(cin>>n>>m)
	{
		total=0;
		count=0;
		
		if((m-n)>pow(10,5))
		{
			break;
		}
		
		for(i=n;;i++)
		{
			total+=i;
			count++;
			if(total>m)
			{
				cout<<count<<endl;
				break;
			}
		}
	}
	return 0;
}