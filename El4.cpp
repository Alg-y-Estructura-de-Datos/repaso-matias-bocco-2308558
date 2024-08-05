#include "iostream"
int sumarEnteros (int a,int b);
int areaCirculo (int radio);
int potencia (int a, int pot);
int main(){
    int opcion;
    do{
        std::cout<<"Ingrese un numero del menu para: \n";
        std::cout<<"1) Para sumar enteros. \n";
        std::cout<<"2) Para calcular el area de un circulo.\n";
        std::cout<<"3) Para calcular la potencia de un numero.\n";
        std::cout<<"4) Para finalizar.\n";
        std::cin>>opcion;
    switch (opcion) {
        case 1:{
            int a,b;
            std::cout<<"Ingrese los numeros que desea sumar.\n";
            std::cin>>a;
            std::cin>>b;
            std::cout<<sumarEnteros(a,b)<<"\n";
            break;
        }
        case 2:{
            int radio;
            std::cout<<"Ingrese el radio del ciruclo.\n";
            std::cin>>radio;
            std::cout<<areaCirculo(radio);
            break;
        }
        case 3:{
                int n,pot;
                std::cout<<"Ingrese el numero \n";
                std::cin>>n;
                std::cout<<"Ingrese la potencia \n";
                std::cin>>pot;
                std::cout<<potencia(n,pot);
            break;
        }


    }    
        
    }while(opcion!=4);

}
int sumarEnteros (int a,int b){
return a+b;
}
int areaCirculo (int radio){
return (radio*radio)*3.14;
}
int potencia (int a, int pot){
    int resultado=1;
    for (int i=1;i<pot;i++){
        resultado*= a;
    }
    return resultado;
}