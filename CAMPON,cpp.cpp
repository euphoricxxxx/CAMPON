#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{	
		int n,q,sum;				
		cin>>n;
		int d[n][2];
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
				cin>>d[i][j];
		}
		cin>>q;
		int dead[q][2];
		for(i=0;i<q;i++)
		{
			for(j=0;j<2;j++)
				cin>>dead[i][j];
		}
		for(i=0;i<q;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			{
				if(dead[i][0]>=d[j][0])
				{
					sum+=d[i][1];
				}
			}
			if(sum>=dead[i][1])
				cout<<"Go Camp"<<endl;
			else
				cout<<"Go Sleep"<<endl;	
		}
		cout<<endl;
	}
	return 0;
}

