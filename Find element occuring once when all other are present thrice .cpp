//Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
//Find that element which occurs once.




#include <bits/stdc++.h>

using namespace std;
int main ()
{
  
int N = 10,
arr[] = {3, 2, 1, 34, 34, 1, 2, 34, 2, 1};

  unordered_map<int, int> v;
for (int i = 0; i < N; i++)
v[arr[i]]++; //incrementing the frequency

for (auto i : v)
if (i.second == 1)
return i.first ;




  return 0;
}
