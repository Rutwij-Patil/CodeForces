#include <iostream>
#include <vector>
using namespace std;
int amazingp(vector<int>n)
{
    int max{n[0]},min{n[0]},ctr{0};
    for(int i=1; i<n.size(); i++)
    {
        if(n.at(i)<min)
        {
            ctr++;
            min = n.at(i);
        }
        else if(n.at(i)>max)
        {
            ctr++;
            max = n.at(i);
        }
    }
    return ctr;
}
int main()
{
    int t,n;
    vector<int>vec;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vec.push_back(n);
    }
    cout<<amazingp(vec);
}
