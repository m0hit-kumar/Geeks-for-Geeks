#include <bits/stdc++.h> 
using namespace std;
  int main () 
  {
    
      string str,str2;
    
cin >> str;
for(int i = 0; i < str.length(); i++)
    {
         
        char ch = str[i];
 
        auto x = str2.find(ch);
       // cout<<"x"<<x;
       // cout<<"\nstd::string::npos"<<std::string::npos;
        if (x == std::string::npos)
        {
             
            str2 += ch;
        }
    }
    
    cout<<str2;
    return 0;
  
}
  
