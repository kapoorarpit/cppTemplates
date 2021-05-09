#include <iostream>
using namespace std;

int main()
{
    int n;
    n=4;
    int count=0;
    while(n)
    {
        n<<1;
        if(n&1)
        count++;        
    }
    cout<<count;
}
