#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fourseg(vector<int>vec)
{
    sort(vec.begin(),vec.end());
    cout<<vec.at(0)*vec.at(2)<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        vector<int>vec{0,0,0,0};
        cin>>vec.at(0)>>vec.at(1)>>vec.at(2)>>vec.at(3);
        fourseg(vec);
    }
    return 0;
}
