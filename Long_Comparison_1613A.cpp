#include <iostream>
#include <math.h>
using namespace std;
void compare(int x1,int p1,int x2, int p2)
{
    char ans;
    string s1=to_string(x1), s2=to_string(x2);
    int p=p1-p2;
    if(p>0)
    {
        while(s1.size()<=s2.size() && p)
        {
          s1.push_back('0');
          p--;
        }
    }
    else if(p<0)
    {
        p=-p;
        while(s1.size()>=s2.size() && p)
        {
          s2.push_back('0');
          p--;
        }
    }
    if(s1==s2) ans='=';
    else if(s1.size()<s2.size() || (s1.size()==s2.size() && s1<s2))
        ans='<';
    else
        ans='>';
    cout<<ans<<endl;
}
int main()
{
    int t,a,b,a_,b_;
    cin>>t;
    while(t--)
    {
        cin>>a>>a_>>b>>b_;
        compare(a,a_,b,b_);
    }
    return 0;
}
