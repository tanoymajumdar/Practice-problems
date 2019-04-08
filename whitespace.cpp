#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s1;
    string s2;
    while (getline (cin, s1))
    {
        if (s1=="^D")
        break;
        s2 = s2 + s1;
    }    
    int len = s2.size();
    for (int i=0; i<len; i++)
    {
        if (ispunct(s2[i]))
        {
            s2.erase(i--,1);
            len = s2.size();
        }
        else if (s2[i]==' ')
        {
            s2.erase(i--,1);
            len = s2.size();
        }
    }
    cout << s2 << endl;
}