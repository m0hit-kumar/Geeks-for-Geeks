// Game with nos

/******************************************************************************
 You are given an array arr[], you have to re-construct an array arr[].
The values in arr[] are obtained by doing Xor of consecutive elements in the array.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int arr[ ] = {5, 9, 7, 6},n=4,b[n];

for (int i=0;i<n;i++)
if(i!=(n-1))
b[i]=arr[i]^arr[i+1];

else
b[i]=arr[i];


for (int i=0;i<n;i++)
cout<<b[i]<<" ";

    return 0;
}
