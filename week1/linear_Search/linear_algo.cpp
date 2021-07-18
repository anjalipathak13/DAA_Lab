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

c=0;
int f=0;
for(int i=0;i<n;i++)
{ c++;
    if(a[i]==k){

        cout<<"Present";
        cout<<c<<endl;
        f=1;



    }

}
         if(f==0){
        cout<<"Not Present";
         }
        t--;
}
return 0;

}