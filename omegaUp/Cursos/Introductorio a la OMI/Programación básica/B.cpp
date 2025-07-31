//problem: https://omegaup.com/course/Curso-OMI/assignment/COMI-programacion#problems
#include<iostream>
int main(){
    int filas, asientosPorFila, boletosVendidos;
    std::cin>>filas>>asientosPorFila>>boletosVendidos;
    
    if(boletosVendidos < filas*asientosPorFila){
        std::cout<<boletosVendidos<<" 0\n";
        return 0;
    }
    
    int sentados=0, parados=0;
    sentados = filas*asientosPorFila;
    parados = boletosVendidos-sentados;
    std::cout<<sentados<<" "<<parados<<"\n";
    return 0;
}