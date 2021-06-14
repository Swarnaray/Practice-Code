#include<bits/stdc++.h>
using namespace std;

#define ul unsigned long
#define ull unsigned long long

void space();
int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("error.txt", "w", stderr); 
   freopen("output.txt", "w", stdout); 
   #endif 
   space();
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0; 
} 
void space()
{
  char str[100];
  int length = 0, i;
  char c[1];
  int count=0;
  gets(str);
  for(i=0;i<1;i++)
  {
  	cin>>c[i];
  }
  length = strlen(str);
  
  for(int i=0;i<length;i++)
  {
      if(i==0||i==(length-1))
      {
          str[i]=toupper(str[i]);
      }
      else if(str[i]==' ')
      {
          str[i+1]=toupper(str[i+1]);
          
      }
      else if(str[i]== c[0])
      {
      	count++;
      }
  }

  cout<<str;
  cout<<"\n"<<count;

    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n', 
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
  
    string res = "";
    for (int i = 0; i < n; i++) 
        res = res + alphabet[rand() % MAX];
      
    return res;
}
}