#include <iostream>
#include <numeric>
using namespace std;
string check(string s, int k)
{
     string r="";
     while(k--)
     {
          r+=s;
     }
     return r;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s>>t;
        int hcf = gcd(s.length(),t.length());
        if(check(s,t.length()/hcf)== check(t,s.length()/hcf))
            cout<<check(s,t.length()/hcf)<<endl;
        else
            cout<<-1<<endl;
    }
}
