#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'a'|| word[i] == 'o'||  word[i] == 'y'|| word[i] == 'e'||  word[i] == 'u'||  word[i] == 'i')
        {
            word[i] ='.';
        }
        else
        {
            cout <<'.' <<word[i];
        }
    }
    return 0;
}
