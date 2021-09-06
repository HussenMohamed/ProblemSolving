//This is Problem I-Palindrome in sheet 2(Loops)

#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    
    long long count = N;
    long long count_extra = N;
    long long Array_count = N;



    long long size_N = 0,size_result = 0;

    int zeros = 0;
    
    while ( count_extra )
    {
        size_N++;
        count_extra = count_extra / 10;
    }
    
    long long N_array[size_N];
    long long result_array[size_N] = {5};
    
    for(int i = 0 ; i < size_N ; i++)
    {
        N_array[i] = Array_count % 10;
        Array_count = Array_count /10;
    }
    

    for(int i = 0 ; count > 0 ; i++)
    {
        int digit = count % 10;
        count = count / 10;
        if ( (digit == 0) && (i == 0))
            zeros++;
        if ((digit == 0) && (zeros > 0))
            continue;
        else
            zeros = -10;
        cout<<digit;
        result_array[i] = digit;
    }
    long long proof = 0;

    for(int i = 0, j = size_N -1 ; i < size_N ; i++ , j--)
    {
        if (N_array[i] == result_array[j])
        {
            proof++;
        }
        else
        {
            break;
        }
    }
    if(proof == size_N)
        cout<<"\nYES";
    else
        cout<<"\nNO";
        

}
