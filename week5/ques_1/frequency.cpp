#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		char a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int freq[26];
		for(int i=0;i<26;i++)
		freq[i]=0;
		for(int i=0;i<n;i++)
		freq[a[i]-'a']++;
		int max=0;
		char alpha=' ';
		for(int i=0;i<26;i++)
		{
			if(freq[i]>=max)
			{
			max=freq[i];
			alpha=char(i+'a');
		}
		
			
		}
		
		if(max<=1)
		cout<<"No Duplicates Found"<<endl;
		else
		cout<<alpha<<"-"<<max<<endl;
		t--;
	}
	return 0;
}