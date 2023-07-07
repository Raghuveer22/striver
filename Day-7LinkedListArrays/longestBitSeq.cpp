int longestSubSeg(vector<int> &arr , int n, int k){
   int i =0;
   int j=0;
   int zero_c=0;
   int max_v=1 ;
   while(j<n)
   {
      if(arr[j]!=1)
      {
          zero_c++;
          if(zero_c>k)
          {
              while(zero_c>k&&i<n)
              {
                  if(arr[i]==0)zero_c--;
                  i++;
              }
          }
      }
      max_v=max(max_v,j-i+1);
      j++;
   }
   return max_v;
}
