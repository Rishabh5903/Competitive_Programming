#include<iostream>

using namespace std;

int main(){
    string l={};

int n;
cin>>n;
for (int i = 0; i < n; i++)
{
   int m,x;
   cin>>m>>x;
   if (m<=x){
l.append("0");
 }
 else{
    if((m-x)%4==0){
        l.append(to_string ((m-x)/4));
    }
    else{
        l.append(to_string ((m-x)/4+1));
    }
 }
   }
for (int i = 0; i < l.length(); i++)
{
    cout<<l[i]<<endl;
}



return 0;
}