#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
typedef struct pecahan
{
    int pb;
    int py;
};

int main(int argc, char*argv[])
{
    pecahan P1, P2;
    cout<<" -------Mengubah Bilangan Pecahan Ke Bilangan Bulat------- \n \n \n";
    cout<<"Masukkan Pembilang : ";
    cin>>P1.pb;
    cout<<"Masukkan Penyebut  : ";
    cin>>P1.py;
    cout<<"\t"   <<P1.pb<<endl;
    cout<<"P1 =    -"<<endl;
    cout<<"\t"   <<P1.py<<endl;
    if("/")
        {
            cout<<"Hailnya = "<<P1.pb/P2.py<<endl;
        }
        return 0;
}
