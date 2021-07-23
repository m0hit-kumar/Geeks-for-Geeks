
// C++ program to find the index
// of an element in a vector
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int a[]={6, 5, 1, 2, 4, 3};
vector<int> v(begin(a),end(a));
     int   n=6;

    int K = 1, b[n];
    for (int i=0;i<n;i++){
        
 auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
      b[i]=it - v.begin();
//   cout<<  it - v.begin()<<endl;
    }
    else {
        cout << "break" << endl;
    } 
    K++; 
        
    }
    int td=0;
    for(int i=0;i<n-1;i++)
    { cout<<b[i];
        td=td+abs(b[i]-b[i+1]);
        // cout<<td<<" \n";

    }
    cout<<"\n"<<td;
    return 0;
}
