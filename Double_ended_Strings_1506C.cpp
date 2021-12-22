#include <iostream>
#include <algorithm>
using namespace std;
int operations(string a, string b)
{
    int a_ = a.size(), b_ = b.size();
    int ans = 0;
    for (int len = 1; len <= min(a_, b_); len++)
    {
        for (int i = 0; i + len <= a_; i++)
        {
            for (int j = 0; j + len <= b_; j++)
            {
                if(a.substr(i, len) == b.substr(j, len))
                    ans = max(ans, len);
            }
        }
    }
    return a_ + b_ - 2 * ans;
}
int main()
{
    int n;
    string a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cout<<operations(a,b)<<endl;
    }
    return 0;
}
