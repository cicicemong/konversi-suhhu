#include<iostream>
using namespace std;
int main ()
{
    float C,F,K,R;
    cout<<"Program Konversi Suhu"<<endl;
    cout<<"Masukan nilai Celcius =";
    cin>>C;
    F=C*9/5+32;
    K=C+273.15;
    R=C*4/5;
    cout<<"Nilai Fahrenheit ="<<F<<endl<<"Nilai Kelvin ="<<K<<endl<<"Nilai Reamur ="<<R;
    return 0;
}
