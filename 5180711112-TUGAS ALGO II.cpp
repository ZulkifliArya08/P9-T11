#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace::std;

int Modulus (int nilai, int x)
{
    if (nilai==0) {
        return (nilai%x);
    }
    else if (x==nilai){
        return (0);
    }
    else {
        return (nilai%x);
    }
}
main()
{
    int p, q;

    cout<<"======= MENGHITUNG MODULUS ( SISA BAGI )========";
    cout<<"\nMasukkan Nilai p = "; cin>>p;
    cout<<"\nMasukkan nilai modulus = "; cin>>q;
    cout<<"\nHasilnya = "<<p<<" % "<<q<<" : "<<Modulus(p, q);
}

