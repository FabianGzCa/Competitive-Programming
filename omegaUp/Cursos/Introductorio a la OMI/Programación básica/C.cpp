//Problem: https://omegaup.com/course/Curso-OMI/assignment/COMI-programacion#problems/comi-Fraccion-mixta
#include<iostream>
int main(){
    int numerador, denominador;
    std::cin>>numerador>>denominador;
    int resultado = numerador/denominador;
    int residuo = numerador%denominador;

    if(resultado==0 && residuo==0){
        std::cout<<"0/"<<denominador<<"\n";
        return 0;
    }

    if(resultado!=0){
        std::cout<<resultado<<" ";
    }
    if(residuo != 0){
        std::cout<<residuo<<"/"<<denominador<<"\n";
    }else{
        std::cout<<"\n";
    }
    return 0;
}