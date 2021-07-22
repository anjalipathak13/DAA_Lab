#include<iostream>
#include<cmath>
using namespace std;
void difference_pair(int a[],int n,int k)
{   int c=0;
    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==k)
                c++;

        }
    }
    cout<<c<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {

        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        difference_pair(a,n,k);
    }
    return 0;

}
