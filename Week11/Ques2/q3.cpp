bool isSubsetSum(vector<int>arr,int sum)
{
  if(sum==0)return 1;
  int n=arr.size();
  int dp[n+!][sum+1];
  for(int i=0;i<=n;i++)
    dp[i][0]=1;
  for(int i=0;i<=sum;i++)
    dp[0][i]=0;
  for(int i=0;i<=n;i++)
  {
    for(int j=1;j<=sum;j++)
    {
      dp[i][j]=dp[i-1][j];
      if(arr[i-1]<=j)
      {
        if(dp[i-1][j-arr[i-1]==1)
                   dp[i][j]=1;
      }
                   }
                   }
                   return dp[n][sum];
                   }
