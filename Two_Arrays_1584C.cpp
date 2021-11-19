#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void compare(vector<int>a,vector<int>b,int n)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i =0; i<n;i++)
    {
        if(a.at(i) != b.at(i))
            a.at(i) += 1;
    }
    if(equal(a.begin(), a.end(),b.begin(), b.end()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
void input(int n)
{
    vector <int> a(n);
    vector <int> b(n);
    for(int i = 0; i<n;i++)
        cin>>a.at(i);
    for(int i = 0; i<n;i++)
        cin>>b.at(i);
    compare(a,b,n);
}
int main()
{
    int t;
    int n;
    cin>>t;
    for(int i = 0; i<t;i++)
    {
        cin>>n;
        input(n);
    }
        return 0;
}
