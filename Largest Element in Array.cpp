// Given an array A[] of size n. The task is to find the largest element in it.


#include <bits/stdc++.h> 

using namespace std;


int largest(int arr[], int n) ;

int main () 
{
 int arr[1000],n;
 
 cin>>n;
 
          for (int i = 0; i < n; i++)
           {
             cin>>arr[i];
            }
   
cout<<largest(arr,n);
return 0; 
}

int largest(int arr[], int n) 
{
  int max=0;
    for(int i=0;i<n;i++)
        {
    
        if (arr[i] > max) 
          max = arr[i];
   
        }
    
return max; 
   
}
