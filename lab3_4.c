#include<math.h>
#include <iostream>
using namespace std;
int main()
{
    int i, k;
    double S, D;
    D=1;
    for(i=1; i<=10; i++)
    {
        S=0;
        for(k=1; k<=i; k++)
        S+=1/k;
        D*=((i+S)/sqrt(S));
    }
    cout<<"Результат обчислення: ";
    cout<<D;
}
