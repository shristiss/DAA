#include<bits/stdc++.h>
using namespace std;

void findmax(vector<char>&v,int &max,char &rak)
{
   vector<int>count(256,0);
 
   for(int i=0;i<v.size();i++)
   {
       int xx=v[i];
      
       count[xx]++;
       if(max<count[xx])
       {
           max=count[xx];
           rak=xx;
           
       }
   }
  
 }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=0;
        char rak;
        cin>>n;
        vector<char>v;
        for(int i=0;i<n;i++)
        {
            char val;
            cin>>val;
            v.push_back(val);
        }
          findmax(v,max,rak);
          if(max<=1)cout<<"No duplicate found!"<<endl;
          else cout<<rak<<" "<<max<<endl;
    }
}