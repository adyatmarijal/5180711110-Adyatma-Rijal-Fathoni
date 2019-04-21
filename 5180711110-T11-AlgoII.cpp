#include <iostream>
using namespace::std;

double rekursif(int a, int b);
double iterasi(int a,int b);

main (){
    int a,b;
    cout<<"MODULUS YOUNG"<<endl;
    cin>>a;
    cin>>b;
    rekursif(a,b);
    iterasi (a,b);
}

double rekursif(int a, int b){
double total;

    if      (a==0){
        return 0;
    }
    else if (a>=0){
        total=a%b;
    }
    else if (a<=0){
        total=a%b;
    }
        cout<<"SISA DARI MODULUS (REKURSIF) : "<<total;
}

double iterasi (int a, int b){
int hasil=1;

for(int i =0;i<1;i++)
{
    hasil=hasil*a%b;
    cout<<"\nSISA DARI MODULUS (ITERASI) : "<<hasil;
}
}
