#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector <int> vec(n);
    int temp{0};
    for(int i = 0; i < n; i++)
    {
        cin>>vec.at(i);
        if(vec.at(i) > 0 && i<k)
            temp++;
        else if(i >= k && vec.at(i) == vec.at(k-1) && vec.at(k-1) > 0)
            temp++;
    }
    cout << temp;
    return 0;
}
