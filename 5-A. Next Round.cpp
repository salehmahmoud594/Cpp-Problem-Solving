#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, k ;
    cin >> n >>k;
    int arr[n];
    int win = 0;
    for (int i = 0 ; i < n ; i++ )
    {
        cin>>arr[i];
    }
    for (int i = 0 ; i < n ; i++ )
    {
        if (arr[i] == 0)
        {
            continue;
        }
        if (arr[i]>=arr[k-1])
        {
            win++;
        }
    }
    cout<<win<<endl;
    return 0;
}
