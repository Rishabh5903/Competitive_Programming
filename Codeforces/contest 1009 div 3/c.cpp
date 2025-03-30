#include <bits/stdc++.h>
using namespace std;
int main(){ios::sync_with_stdio(false);cin.tie(nullptr);int t;cin>>t;while(t--){int x;cin>>x;if((x&(x-1))==0||(x&(x+1))==0){cout<<-1<<"\n";continue;}int m=31-__builtin_clz(x),p=-1,q=-1;for(int i=0;i<m;i++){if((x>>i)&1){if(p==-1)p=i;}}for(int i=m-1;i>=0;i--){if(!((x>>i)&1)){q=i;break;}}int y=(1<<p)+(1<<q);cout<<y<<"\n";}return 0;}
