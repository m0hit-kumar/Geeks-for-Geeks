
//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(N)

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main ()
{
  int a[]={6, 5, 1, 2, 4, 3},n=6,
  
  K=1,b[n];
 
unordered_map <int, int> v;

for (int i = 0; i < n; i++) {v.insert({ a[i], i });}
    
    
     for (int i = 0; i < n; i++) {  
    
    auto it=v.find(K);   
   
         

    b[i]=it->second;

         K++;
         
     }
    
    
int td=0;
    for(int i=0;i<n-1;i++)
    { 
       td=td+abs(b[i]-b[i+1]);
    }
      cout<< td;  
    

  return 0;
}
