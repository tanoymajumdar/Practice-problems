#include<iostream>
using namespace std;
bool is_palindrome(int input[], int numOfSlots);

int main(){
    int n;
    cin >> n;
    int *input = new int[n]; // A dynamic array with n slots
    for (int i = 0 ; i < n ; i++){
        cin >> input[i];
    }

    if (is_palindrome(input,n) == true ){
        cout << "This is a palindrome.";
    }else{
        cout << "This is NOT a palindrome.";
    }
    return 0;
}

bool is_palindrome(int input[], int numOfSlots)
{
    int k=0, c=0;
    
    int *arr = new int[numOfSlots];
    
    for (int i=(numOfSlots-1); i>=0; i--)
    {
        arr[k]= input[i];
        k++;
    }
     
    for (int i = 0 ; i < numOfSlots ; i++){
        if (arr[i] == input[i])
        c++;
    }
    if (c== numOfSlots)
    {
        return true;
    }
    else
    {
        return false;
    }
}