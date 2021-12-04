#include <iostream>
#include <algorithm>
using namespace std;
bool notVowel(char ch)
{
    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'y')
    {
        return false;
    }
    else
        return true;
}
void task(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i =0; i<str.size(); i++)
    {
        if(notVowel(str[i]))
        {
            cout<<"."<<str[i];
        }
    }
}
int main()
{
    string s;
    cin>>s;
    task(s);
    return 0;
}

