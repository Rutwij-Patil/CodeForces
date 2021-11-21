#include <iostream>
#include <math.h>
using namespace std;
void calc(int n)
{
    if(fmod(sqrt(n),1.0) == 0.0)
        cout<<sqrt(n)<< " "<< 1<< endl;
    else if(fmod(sqrt(n),1.0) > 0.0)
    {
        int sq = (int)sqrt(n) + 1;
        int sqr = sq*sq;
        if((sqr - n+1)>=sq)
        {
            cout<<(sq*2 -(sqr-n +1))<<" "<<sq<<endl;
        }
        else
        {
            cout<<sq<<" "<<(sqr - n + 1)<<endl;
        }
    }
    
}
int main()
{
    int t;
    int n;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>n;
        calc(n);
    }
}
