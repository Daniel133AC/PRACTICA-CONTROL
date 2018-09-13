#include <iostream>
using namespace std;

int main()
{
    cout<<"Ejercicio 1.1"<<endl;
    cout<<"Limite: ";
    long long a,sum;
    cin>>a;
    sum=0;
    for(int x=1;x<a;++x){
        if(x%5==0||x%3==0){
            sum=sum+x;
        }
    }
    cout<<sum;
    cout<<endl<<endl;

    cout<<"Ejercicio 1.2"<<endl;
    cout<<"Límite: ";
    int n;
    cin>>n;
    for(int x=1;x<=n;++x){
        if(x%2){
            if(x+2<=n){
                cout<<x<<",";}else
                {cout<<x<<endl;}}
        }
    cout<<endl<<endl;

    cout<<"Ejercicio 1.3"<<endl;
    cout<<"Límite: ";
    int limit;
    cin>>limit;
    int i=2;
    int div=2;
    int pal=0;
    while(i<limit){
        while(div<=i/2){
            if(i%div==0){
                pal++;
            }
            div++;
        }
        if(pal==0){
            cout<<i<<endl;}
        div=2;
        i++;
        pal=0;
    }
    cout<<endl<<endl;

    cout<<"Ejercicio 1.4"<<endl;
    cout<<"Ingrese un numero: ";
    long long divs1=1;
    long long sumdiv1=0;
    long long num1;
    cin>>num1;
    while(divs1<=num1/2){
        if(num1%divs1==0){
        sumdiv1=sumdiv1+divs1;}
        divs1++;}
    if(sumdiv1==num1){
        cout<<"Es perfecto"<<endl;}else{
        cout<<"No es perfecto"<<endl;}
    cout<<endl<<endl;

    cout<<"Ejercicio 1.5"<<endl;
    cout<<"Ingrese un numero: ";
    long long limit1;
    cin>>limit1;
    long long m=limit1-1;
    long long div1=2;
    long long pal1=0;
    bool nopri=false;
    while(nopri==false){
        while(div1<=m/2){
            if(m%div1==0){
                pal1++;
            }
            div1++;}
        if(pal1==0&&limit1%m==0){
            nopri=true;
            cout<<"Su máximo factor primo es "<<m;}else{nopri=false;}
        div1=2;
        pal1=0;
        m=m-1;
    }
    cout<<endl<<endl;

    cout<<"Ejercicio 2.1"<<endl;
    cout<<"Ingrese un numero: ";
    int ano;
    cin>>ano;
    if(ano%4==0||ano%400==0&&ano%100!=0){
    cout<<"El "<<ano<<" es bisiesto";
    }else{cout<<"El "<<ano<<" no es bisiesto";}
    cout<<endl<<endl;

    cout<<"Ejercicio 2.2"<<endl;
    cout<<"Limite: ";
    int valormax;
    cin>>valormax;
    for(int i=2;i<=valormax;i++){
        if (i%2==0){
            if(i==valormax||i==valormax-1){
            cout<<i;}else{
            cout<<i<<",";}
        }
    }
    cout<<endl<<endl;

    cout<<"Ejercicio 2.3"<<endl;
    cout<<"Ingrese cantidad de numeros fibonacci: ";
    int f0=1;
    int f1=1;
    int f;
    int cantfib;
    cin>>cantfib;
    for(int i=0;i<=cantfib-1;i++){
        if(i!=cantfib-1){
        cout<<f0<<",";}else{cout<<f0;}
        f=f1;
        f1=f1+f0;
        f0=f;
    }
    cout<<endl<<endl;

    cout<<"Ejercicio 2.4"<<endl;
    cout<<"Ingrese cantidad de numeros perfectos: ";
    int cantnum;
    cin>>cantnum;
    long long divs=1;
    long long sumdiv=0;
    long long num=6;
    long long j=0;
    while(j<cantnum){
        while(divs<=num/2){
        if(num%divs==0){
            sumdiv=sumdiv+divs;
        }
        divs++;
        }
        if(sumdiv==num){
            j++;
            cout<<num<<endl;
        }
        sumdiv=0;
        num=num+2 ;
        divs=1;}
    cout<<endl<<endl;

    cout<<"Ejercicio 2.5"<<endl;
    cout<<"Limite: ";
    long long limit2;
    cin>>limit2;
    long long p=2;
    long long div2=2;
    long long pal2=0;
    long long sumt=0;
    while(p<limit2){
        while(div2<=p/2){
            if(p%div2==0){
                pal2++;
            }
            div2++;}
        if(pal2==0){
            sumt=sumt+p;}
        div2=2;
        pal2=0;
        p++;
    }
    cout<<"La suma total es "<<sumt;





    return 0;
}

