//This is problem j in sheet 2(Loops)
/*Given a number N. Print all prime numbers between 1 and N inclusive.
A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
In other words : prime number divisible only by 1 and itself.
Be careful that 1 is not prime .*/


#include <iostream>
using namespace std;
int main()
{
    long long N,sum;
    cin>>N;
    for(int i = 2 ; i <= N ; i++)
    {
        sum = 0;
        for(int j = 2; j < i ; j++)
        {
            if(i % j == 0)
            {   
                break;
            }
            else
            {
                sum++;
            }
        }
        if(sum == i-2)
            cout<<i<<" ";
    }
}
