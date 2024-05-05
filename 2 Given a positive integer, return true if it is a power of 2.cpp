#include<iostream>
using namespace std;
void power(int n)
{
    int a = 1;
    for(int i=1; i<n; i++)
    {
        int b = 2**a;
        if(b <= n)
        {
            if(b == n)
            {
                cout<<true;
                break;
            }
            a++;
        }
        else
        {
            cout<<"Number is not power of 2 ";
            break;
        }
    }
}
int main()
{
    power(4);
}