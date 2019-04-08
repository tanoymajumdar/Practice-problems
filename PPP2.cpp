#include<iostream>
using namespace std;
int main()
{
    double arr[1000];
    int n=0;
    double sum, avg;
    for (int i=0; i<=1000; i++)
    {
        cin>>arr[i];
        if (arr[i]==-1)
        {
        break;
        }
        n++;
        sum = sum + arr[i];
    }
    avg = sum/n;
    cout<<avg<<endl;
}
    
    
    
    
    
    
    
    
    
    
    
    