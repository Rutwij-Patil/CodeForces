#include <iostream>
using namespace std;
int dist(string s)
{
    int c{0};
    int hash[128]{0};
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]] = 1;
    }
    for(int i = 0; i < 128; i++)
        c += hash[i];
    return c;
}
int main()
{
    string str;
    cin>>str;
    if(dist(str)%2)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}
