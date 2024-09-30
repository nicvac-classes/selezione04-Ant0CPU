#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, massimo;

    cout<<"Inserisci tre numeri"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

    if (num1>num2)
    {
        if (num1>num3)
        {
            massimo=num1;
        }
        else
        {
            massimo=num3;
        }
    }
    else
    {
        if (num2>num3)
        {
            massimo=num2;
        }
        else
        {
            massimo=num3;
        }
    }
    cout<<"Il maggiore è " <<massimo<<endl;
}
