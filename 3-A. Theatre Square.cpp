#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long a,m,n,x,y;
    cin >>n >>m>>a;
    x = n/a;
    y = m/a;
    if(n%a != 0)
    {
        x++;
    }
    if(m%a!=0)
    {
        y++;
    }
    cout<<x*y<<endl;
    return 0;
}
