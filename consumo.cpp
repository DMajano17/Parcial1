#include<iostream>
using namespace std;

int main(){
    float consumo, d, precio, stotal, descuento, total;
    cout<<"Ingresar consumo:";
    cin>> consumo;
    
    if(consumo>100 & consumo<300){
         d = 0.8;
        precio = 0.12;
        stotal = consumo * precio ;
        descuento = stotal * d;
        total = stotal - descuento;
    }

    else if(consumo>300 & consumo<500){
        d = 0.15;
        precio = 0.12;
        stotal = consumo * precio ;
        descuento = stotal * d;
        total = stotal - descuento;

    }
    else if(consumo>500){
         d = 0.25;
        precio = 0.12;
        stotal = consumo * precio ;
        descuento = stotal * d;
        total = stotal - descuento;
    }
    else {
         total = consumo * 0.12 ;
    }
    cout<<"El total a pagar es:"<<total<<endl;
    return 0;
}
