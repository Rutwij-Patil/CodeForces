#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int size{};
    vector <string> vec(n);
    for(int i = 0; i<n; i++)
    {
        cin>>vec.at(i);
    }
    for(int i = 0; i<n; i++)
    {
        size = vec.at(i).size();
        if(size >10)
        {
            cout<<vec.at(i)[0]<< (size - 2) <<(vec.at(i))[size-1]<<endl;
        }
        else
            cout<<vec.at(i)<<endl;
    }
}
