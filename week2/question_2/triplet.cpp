#include<iostream>
using namespace std;

void triplet(int a[],int n){

        for(int i=n-1;i>=0;i--)
        {
            int  start=0;
             int last=i-1;
             while(start<last)
                {
             if(a[start]+a[last]==a[i])
             {
                 cout<<start+1<<","<<last+1<<","<<i+1<<endl;
                return;
             }else if(a[i]>a[start]+a[last])

                 start++;
             else
                 last--;

                }

    }
    cout<<"No Sequence Found"<<endl;
    }
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        triplet(a,n);
    }
    return 0;

}

