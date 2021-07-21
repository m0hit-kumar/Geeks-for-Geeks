// Total distance travelled in an array 

// You are given an array arr[] of size N.
// The array consists of a permutation of the set {1, 2, 3, … , N} for some positive
// integer N. You have to start at the position which has 1 in the array and then travel to
// the position which has 2. Then from 2, you travel to 3 and so on till you reach the position which has N.
// When you travel from Arr[i] to Arr[j], the distance travelled is | i– j |.
// Find the total distance you have to travel to reach N when you start from 1.


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n = 5,b[n], td=0, f=1,a[]={5, 1, 4, 3, 2};
for(int i=0;i<n;i++)
{ 
    for(int j=0;j<n;j++)
    { 
        if(a[j]==f)
            {
                b[i]=j;
                
                f++;
                break;
            }
            
    }
    
}
    for(int i=0;i<n;i++)
    {
        cout<<b[i];
        td+=abs(b[i+1]-b[i]);
    
        
    }

cout<<"td"<<td;

    return 0;
}


