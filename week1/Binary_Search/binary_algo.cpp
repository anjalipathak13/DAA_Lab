#include<iostream>
using namespace std;
int main(){
cout<<"Enter the number of test cases"<<endl;
int t;
cin>>t;
while(t>0)
{
int n,k,c;
cout<<"Enter the value of n"<<endl;
cin>>n;
int a[10];
cout<<"Enter the value of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;
      int mid;
      int l=0;
      int r=n-1;
       c=0;
       int comp=0;
      while(l<=r)
      {
          comp++;
         mid=l+(r-l)/2;

         if(a[mid]==k)
         {
             cout<<"Present ";
             c=1;
             break;

         }
         else if(k<a[mid])
         {
             r=mid-1;

         }else{
             l=mid+1;

         }
      }
     if(c==0)
        cout<<"Not Present ";
        cout<<comp<<endl;

        t--;
}
return 0;

}