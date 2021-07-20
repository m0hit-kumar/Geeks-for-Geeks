#include <bits/stdc++.h> 
using namespace std;
  int main () 
  {
    
      string str,str2;
    
cin >> str;
for(int i = 0; i < str.length(); i++)
    {
         
        char c = str[i];
 
        auto found = str2.find(c);
       // cout<<"found"<<found;
       // cout<<"\nstd::string::npos"<<std::string::npos;
        if (found == std::string::npos)
        {
             
            str2 += c;
        }
    }
    
    cout<<str2;
    return 0;
  
}
  
