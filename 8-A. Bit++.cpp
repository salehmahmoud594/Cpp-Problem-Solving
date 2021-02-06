
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n,res=0;
    cin >> n;
    string op;

    for (int i = 0 ; i < n ; i++ )
    {
        cin >> op;
        if(op[0] == 'x' || op[0] == 'X')
        {
            if(op[1] == '+')
            {
                res++;
            }
            else
            {
                res--;
            }
        }
        else
        {
            if(op[1] == '+')
            {
                ++res;
            }
            else
            {
                --res;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
