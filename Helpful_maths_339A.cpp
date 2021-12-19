#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string a;
    cin>>a;
    vector<char> x;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != '+')
            x.push_back(a[i]);
    }
    sort(x.begin(),x.end());
    for(int i = 0; i < x.size(); i++)
    {
        if(i == 0)
            cout<<x.at(i);
        else
            cout<<"+"<<x.at(i);
    }
    return 0;
}
