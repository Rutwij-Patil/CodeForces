#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int revsort(int n, string str)
{
    string chk = str;
    sort(chk.begin(),chk.end());
    vector<int> index;
    if(str==chk)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<"1"<<endl;
    for(int i=0;i<n;i++)
    {
        if(str[i] != chk[i])
            index.push_back(i+1);
    }
    cout<<index.size()<<" ";
    for(int i = 0; i < index.size(); i++)
    {
        cout<<index.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}
int main()
{
    int n,t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>n>>str;
        revsort(n,str);
    }
    return 0;
        
}
