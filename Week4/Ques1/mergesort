#include<bits/stdc++.h>

using namespace std;
void merge(vector<int>&v,int s,int mid,int e)
{
    vector<int>nums;
    int i=s,j=mid+1;
    while(i<=mid && j<=e)
    {
        if(v[i]<=v[j])
        {
            nums.push_back(v[i]);
            i++;
        }
        else{
            nums.push_back(v[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        nums.push_back(v[i]);
        i++;
    }
    while(j<=e)
    {
        nums.push_back(v[j]);
        j++;
    }
    for(int x=s;x<=e;x++)v[x]=nums[x-s];
}
void mergesort(vector<int>&v,int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        mergesort(v,s,mid);
        mergesort(v,mid+1,e);
        merge(v,s,mid,e);
        
    }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,val;
       cin>>n;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           cin>>val;
           v.push_back(val);
       }
       mergesort(v,0,n-1);
      for(int i=0;i<n;i++)cout<<v[i]<<" ";
   }

    return 0;
}
