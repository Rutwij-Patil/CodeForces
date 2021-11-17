#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int diff{999};
    vector <int> fn(m);
    for(int i = 0;i<m;i++)
    {
        cin>>fn.at(i);
    }
    sort(fn.begin(),fn.end());
    for(int i = 0;i<=m-n;i++)
    {
        if(abs(fn.at(i)-fn.at(i+n-1)) < diff)
        {
            diff = abs(fn.at(i)-fn.at(i+n-1));
        }
    }
    cout<<diff;
    return 0;
}
