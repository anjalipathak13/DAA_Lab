#include<iostream>
using namespace std;
int binary_first(int a[],int l,int h,int x)
{    int in=0;
    while(l<=h)
    {

        int mid=l+(h-l)/2;
        if(a[mid]==x)
        {
            in=mid;
            h=mid-1;
        }
        else if(a[mid]>x)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
   // cout<<"first"<<in<<endl;
    return in;
}
int binary_last(int a[],int l,int h,int x)
{
    int in=0;
    while(l<=h)
    {

        int mid=l+(h-l)/2;
        if(a[mid]==x)
        {
            in=mid;
            l=mid+1;
        }
        else if(a[mid]>x)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    // cout<<"second"<<in<<endl;
    return in;
}

int main()
{
    int t;
    cout<<"Enter the no of test cases"<<endl;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
        int x;
        cin>>x;
        int first=binary_first(a,0,n-1,x);
        int last=binary_last(a,0,n-1,x);
        int result;
        result=last-first+1;
        cout<<x<<"-"<<result<<endl;
    }
        return 0;

}







