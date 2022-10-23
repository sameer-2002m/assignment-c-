#include<iostream>
using namespace std;
int main()
{
    int no1, no2;
    cout << "Input the values for Number1 and Number2 :";
    cin >> no1 >> no2;
    if (no1 == no2)
    {
        cout << "Number1 and Number2 are equal";
    }
    else
    {
        cout << "Number1 and Number2 are not equal";
    }
}