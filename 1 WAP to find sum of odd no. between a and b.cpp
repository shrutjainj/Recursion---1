#include<iostream>
using namespace std;
int Sum(int a , int b)
{
    if(a!=0)
    {
        int sum = 0;
        sum += a;
    }
    return Sum(a+1,b);
}
int main()
{
    int a = Sum(1,15);
    cout<<a;
    return 0;
}