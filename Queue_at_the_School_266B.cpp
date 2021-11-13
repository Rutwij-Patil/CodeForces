#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
vector <char> split(string str)
{
    int i = 0;
    vector<char> vec(str.size());
    while(i<str.size())
    {
        vec.at(i)=str[i];
        i++;
    }
    return vec;
}
int main()
{
    int x,y;
    cin>>x>>y;
    string a;
    cin>>a;
    vector <char> b = split(a);
    for(int i = 0; i<y;i++)
    {
        for(int j= 1; j<x;j++)
        {
            if(b.at(j-1) == 'B' && b.at(j) == 'G' )
            {
                char temp = 0 ;
                temp = b.at(j-1) ;
                b.at(j-1) = b.at(j);
                b.at(j) = temp;
                j++;
            }
        }
    }
    for(int j= 0; j<x;j++)
        cout<<b.at(j);
}
