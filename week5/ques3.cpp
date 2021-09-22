#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m;
	int a[m];
	for(int i=0;i<m;i++)
	cin>>a[i];
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++)
	cin>>b[i];
	int i=0,j=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
         	
         	i++;
		
		else if(b[j]<a[i])
         	j++;
						
		else if(a[i]==b[j])
		{
			cout<<b[j]<<" ";
			i++;
			j++;
		}
		
	}
	return 0;
	
}
	