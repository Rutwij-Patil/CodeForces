#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void grannies(int n, vector<int> vec)
{
    int i, temp = -1;
    sort(vec.begin(),vec.end());
    for( i = n - 1; i >= 0; i--)
    {
        
        if(i + 2 > vec.at(i))
        {
            temp = i;
            break;
        }
    }
    cout<<(temp + 2)<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> vec;
        for(int i = 0; i<n; i++)
        {
            int inp;
            cin>>inp;
            vec.push_back(inp);
        }
        grannies(n,vec);
    }
    return 0;
}
