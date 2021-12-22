#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cost(vector<int> vec)
{
    int ctr{0};
    sort(vec.begin(),vec.end());
    for(int i = 1; i<vec.size(); i++)
    {
        while(vec.at(i)<=vec.at(i-1))
        {
            vec.at(i)++;
            ctr++;
        }
    }
    return ctr;
}
int main()
{
    int n,t;
    cin>>n;
    vector<int> vec;
    while(n--)
    {
        cin>>t;
        vec.push_back(t);
    }
    cout<<cost(vec);
}
