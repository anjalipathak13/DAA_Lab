#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t>0)
    {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int key;
	cin>>key;
    sort(a,a+n);
    int i=0;
    int j=n-1;
    int f=0;
    while(i<j)
    {
    	if(a[i]+a[j]<key)
    	i++;
    	else if(a[i]+a[j]>key)
    	j--;
    	else if(a[i]+a[j]==key)
    	{ f=1;
    	cout<<a[i]<<" "<<a[j]<<","<<" ";
    	i++;
    	j--;
    }
	}
        if(f==0)
    	cout<<"No such pair exist";	
	t--;	
}
	return 0;
	
}