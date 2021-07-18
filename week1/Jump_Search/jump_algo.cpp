#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
cout<<"Enter the number of test cases"<<endl;
int t;
cin>>t;
int comp=0;
while(t>0)
{
int n,k,c;
cout<<"Enter the value of n"<<endl;
cin>>n;
int a[n];
cout<<"Enter the value of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    c=0;
    int high = sqrt(n);
    int low=0;
    while(a[high]<=k&&high<n)
    {
        low=high;
        high+=sqrt(n);


    }
    for(int i=low;i<high;i++)
        { comp++;
        if(a[i]==k)
         {

        cout<<"Present ";
        cout<<comp<<endl;
        c=1;
        break;
         }
         }
    if(c==0){
        cout<<"Not Present ";
        cout<<comp<<endl;

    }
       t--;//end of while loop of test cases
}
return 0;
}