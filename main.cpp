#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    int i=0;
    sort(x.begin(),x.end());
    int start=x[0],count=0,middle;

  while(i<n)
    {
        if(x[i]-start<=k)
            {
            ++i;
            if(i==n)
             count++;
            }
       else
          {
           count++;
           middle=x[i-1];
           while(x[i]-middle<=k&&i<n){
                 i++;
           }
           start=x[i];
         }
    }
    cout<<count;

    return 0;
}
