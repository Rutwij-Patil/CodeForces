#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t{};
    cin>>t;
    vector <int> n(t);
    for(int i = 0; i<t;i++)
    {
        cin>>n.at(i);
    }
    for(int i = 0; i<t;i++)
    {
        if(n.at(i)>2019)
        {
            int mod, div;
            mod = (n.at(i))%2020;
            div = n.at(i)/2020;
            if(div >= mod )
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
