//This is Problem M in sheet 2(Loops)

#include <iostream>
using namespace std;
int main()
{
    long long A,B,proof = 0;
    cin>>A>>B;
    for(int i = A ; i <= B ; i++)
    {
        if(i < 10)
        {
            if( (i == 7) || (i == 4) )
            {
                cout<<i<<" ";
                proof++;
                continue;
            }
            else
            {
                continue;
            }
        }
        else
        {
            long long num = i,digit;
            int count_public = 0 , count_private = 0;
            while(num)
            {
                digit = num % 10;
                count_public++;
                if( (digit == 7) || (digit == 4) )
                {
                    count_private++;
                }
                else{
                    break;
                }
                
                num = num / 10;
            }
            if(count_private == count_public)
            {   
                cout<<i<<" ";
                proof++;
            }
        }
    }
    if(proof == 0)
        cout<<"-1";
}
     
