#include <iostream>
#include <cmath>
using namespace std;
double e_minus_x(double x, double eps, int &count) 
{
    double S=1;
    double chys=1;
    double znam=1;
    int i=1;
    count=1;
    double a=1;
    while (fabs(a)>eps) 
    {
        chys*=-x;
        znam*=i;
        a=chys/znam;
        S+=a;
        i++;
        count++;
    }
return S;
}
int main() {
    double x_start, x_end, eps=0.0001;
    int n;
    double dx, S, chys, znam;
    cout<<"Введіть початкове значення x: ";
    cin>>x_start;
    cout<<"Введіть кінцеве значення x: ";
    cin>>x_end;
    cout << "Введіть кількість відрізків n: ";
    cin>>n;
    cout<<"Введіть точність обчислення eps: ";
    cin>>eps;
    cout<<"\n Таблиця результатів: \n";
    cout << "X\tF(x)\tСума\tКількість доданків\n";
    dx=(x_end-x_start)/n;
    for (double x=x_start; x<=x_end; x+=dx) 
    {
        int a;
        double series = e_minus_x(x, eps, a);
        cout<<x<<"\t\t"<<exp(-x)<<"\t\t"<<series<<"\t\t"<<a<< endl;
    }
}
