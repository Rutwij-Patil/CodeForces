#include <iostream>
#include <algorithm>
using namespace std;
int change(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int actr = 0, n = str.size();
    for(int i = 0; i<n;i++)
    {
        if(str[i] == 'a')
            actr++;
    }
    if(2*actr > n)
        return n;
    else
        return(2*actr - 1);
}
int main()
{
    string s;
    cin>>s;
    cout<<change(s);
}
