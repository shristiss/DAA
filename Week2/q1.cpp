#include<bits/stdc++.h>
using namespace std;
void helper(int arr[],int low,int high,int target)
{
    int start=-1,end=-1,temp,ans,mid,xurr;
    bool flag=false;
    while(low<=high)
    {
         mid=(low+high)/2;
        if(arr[mid]==target)
        {
            xurr=mid;
            temp=mid;
            while(mid>0 && arr[mid]==target)mid--;
            start=mid;
            while(temp<high && arr[temp+1]==target)temp++;
            end=temp;
            flag=true;
            ans=end-start;
            break;
        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;

    }
    if(flag)
    {
        cout<<endl<<arr[xurr]<<" "<<ans<<endl;
    }
    else cout<<"Key not present"<<endl;

}
int main()
{
 int n;
 cin>>n;
 while(n--)
 {
     int size;
     cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    int target;
    cin>>target;
    helper(arr,0,size-1,target);
 }
}
    
    
    
