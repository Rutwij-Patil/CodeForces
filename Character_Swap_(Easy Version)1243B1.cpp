#include <iostream>
#include <vector>
using namespace std;
string swap(int n, string str1,string str2)
{
    vector <int> id;
    int ctr = 0;
    for(int i=0; i<n; i++)
    {
        if(str1[i] != str2[i])
        {
            ctr++;
            id.push_back(i);
        }
    }
    if(ctr>2 || id.size() <2)
    {
        return "No";
    }
    else if(str1[id.at(0)]==str1[id.at(1)] && str2[id.at(1)]==str2[id.at(0)])
    {
        return "Yes";
    }
    else
        return "No";
}
int main()
{
    int t,n;
    string str1 ,str2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str1>>str2;
        cout<<swap(n,str1,str2)<<endl;
    }
    return 0;
}
