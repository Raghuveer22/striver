#include <bits/stdc++.h> 
using namespace std;
long getTrappedWater(long *arr, int n){
 
    int left=0;
    int right=n-1;
    int max_left=left;
    int max_right=right;
    long rain=0;
    long temp=0;
    while(left<=right)
    {
        if(arr[left]<=arr[right])
        {
            if(arr[left]>=arr[max_left])
            {
                max_left=left;
            }
            else
            {
                rain+=arr[max_left]-arr[left];
            }
            left++;
        }
        else{
            if(arr[right]>=arr[max_right])
            {
                max_right=right;
            }
            else
            {
                rain+=arr[max_right]-arr[right];
            }
            right--;
        }

    }
   return rain;
}