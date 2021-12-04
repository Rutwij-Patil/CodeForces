#include <iostream>
using namespace std;
bool isVowel(char ch)
{
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
    {
        return true;
    }
    else
        return false;
}
int check_transform(string s, string t)
{
    if(s.size() != t.size())
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i = 0; i< s.size(); i++)
    {
        if(isVowel(s[i]) && isVowel(t[i]))
        {
            continue;
        }
        else if(isVowel(s[i])==false && isVowel(t[i])==false)
        {
            continue;
        }
        else
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
int main()
{
    string s, t;
    cin>>s>>t;
    check_transform(s, t);
    return 0;
}
