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
    int i,n,high,low,arr[1000];
    int count1=0, count2=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    high=arr[0];
    low=arr[0];
    for(i=0;i<n;i++){
        if(high<arr[i]){
            high=arr[i];
            count1++;
        }
        else if(low>arr[i]){
            low=arr[i];
            count2++;
        }
    }
    cout<<count1<<" "<<count2;
   
}