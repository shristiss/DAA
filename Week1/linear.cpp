#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        int num;
        cin>>num;
        int comparison=0,flag=0;
        for(int i=0;i<n;i++){
            comparison++;
            if(num == arr[i]){
                flag=1;
                break;
            }
        }     
        if(flag==1)
            cout<<"Present "<<comparison<<endl;
        else
            cout<<"Not Present "<<comparison<<endl;
    }    
    return 0;
}