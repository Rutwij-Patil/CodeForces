#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxofmin, diff;
void minsub(vector <int> vec)
{
    diff = 0;
    sort(vec.begin(), vec.end(), greater<int>());
    maxofmin = vec.at(vec.size()-1);
    while(vec.size() > 0)
    {
        vec.at(vec.size()-1) -= diff;
        int temp = vec.at(vec.size()-1);
        if(maxofmin < temp)
        {
            maxofmin = temp;
        }
        diff += temp;
        vec.pop_back();
    }
    cout<<maxofmin<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i =0; i<t; i++)
    {
        int n;
        cin>> n;
        vector <int> a(n);
        for(int j = 0; j<n; j++)
            cin>>a.at(j);
        minsub(a);
    }
}
