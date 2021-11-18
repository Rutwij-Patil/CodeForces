#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cin>>str1;
    str2 = toupper(str1[0]);
    str1.replace(0,1,str2);
    cout<<str1;
    return 0;
}
