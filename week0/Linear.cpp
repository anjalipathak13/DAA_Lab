#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
ifstream inputfile;
inputfile.open("input.txt");
ofstream outputfile;
outputfile.open("Output.txt");
if(!inputfile){
    cout<<"Unable to open the input.txt file";
    exit(1);
}
int n,k,c;
int a[10];
while(!inputfile.eof()){
    inputfile>>n;
    for(int i=0;i<n;i++)
    {
        inputfile>>a[i];
    }
    inputfile>>k;

}c=0;
for(int i=0;i<n;i++)
{ c++;
    if(a[i]==k){
        
        outputfile<<"key element present"<<endl;
        outputfile<<"no of comparioson "<<c<<endl;
       
        return 0;

    }
    
}
    
        outputfile<<"key element not found"<<endl;
        

return 0;
}