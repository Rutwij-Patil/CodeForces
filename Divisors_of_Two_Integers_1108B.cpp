#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void doti(vector<int>n, int t)
{
    sort(n.begin(),n.end(), greater<int>());
    int a = n[0], dif{0};
    vector<int> b;
    for(int i = 1; i <= sqrt(a); i++)
    {
        if(a%i == 0)
        {
            if(a/i == i)
                b.push_back(i);
            else
            {
                b.push_back(i);
                b.push_back(a/i);
            }
        }
    }
    sort(b.begin(), b.end(), greater<int>());
    for(unsigned long i{0}; i < t; i++)
        if(b[i]!=n[i])
                {
                    dif = n[i];
                    break;
                }
    if(t/2==b.size() && b[0]==n[1])
        cout<<b[0]<<" "<<b[0]<<endl;
    else
        cout<<n[0]<<" "<<dif<<endl;
}
int main()
{
    int t;
    cin>>t;
    vector<int>vec(t);
    for(int &i:vec)
        cin>>i;
    doti(vec,t);
}
