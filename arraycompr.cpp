#include<bits/stdc++.h>
using namespace std;

#define ul unsigned long
#define ull unsigned long long

void solve();
int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("error.txt", "w", stderr); 
   freopen("output.txt", "w", stdout); 
   #endif 

   solve();
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0; 
} 
void solve()
{
int a=0,b=0,i,x[3],y[3];

for(i=0;i<3;i++)
{
   cin>>x[i];
}

for(i=0;i<3;i++)
{
   cin>>y[i];
}
for(i=0;i<3;i++)
{
   cout<<x[i]<<" ";
}
cout<<"\n";
for(i=0;i<3;i++)
{
   cout<<y[i]<<" ";
}
for(i=0;i<3;i++)
{
   if(x[i]>y[i])
   	a+=1;
   else if(x[i]<y[i])
   	b+=1;
}
cout<<"\n"<<a<<" "<<b;
}