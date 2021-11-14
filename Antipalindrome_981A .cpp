#include <iostream>
#include <string>
using namespace std;

bool pal(string s)
{
    string st{""};
    for(int i =(s.size()-1);i>=0;i--)
    {
        st += s[i];
    }
    if(st == s)
    {
        //cout<<"true";
        return true;}
    else{
        //cout<<"false";
        return false;}
        
}
int main()
{
    string stri{};
    string str{};
    int maxsize{0};
    cin>>str;
    for(int i=0; i<str.size();i++)
    {
        for(int j=2;j<=(str.size());j++)
        {
            stri = str.substr(i,j);
            if(pal(stri)==false)
            {
                if(stri.size()>maxsize)
                    maxsize = stri.size();
            }
        }
    }
    cout<<maxsize;
}
