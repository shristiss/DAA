/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)cin>>arr[i];
   int res=arr[0],count=1;
   for(int i=1;i<n;i++)
   {
       if(arr[i]==res)count++;
       else{
            count--;
           if(count==0)
           {
               res=arr[i];
               count=1;
           }
          
       }
   }
  count=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]==res)count++;
  }
  if(count>n/2)cout<<"yes"<<endl<<res;
  else cout<<"No";
    return 0;
}
