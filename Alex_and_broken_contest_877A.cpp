#include <iostream>
#include <vector>
using namespace std;
void contest(string str)
{
    vector<string> vec = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    int ctr = 0;
    for(int i = 0;i < 5;i++)
    {
        string c = vec.at(i);
        size_t found = str.find(c);
        if (found != string::npos)
            ctr++;
        found = str.find(c, found+1);
        if (found != string::npos)
            ctr++;
    }
    if(ctr == 1)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    string s;
    cin>>s;
    contest(s);
    return 0;
}
