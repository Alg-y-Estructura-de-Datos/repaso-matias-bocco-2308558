#include <iostream>
void cambiarVasos (double &a,double &b);
int main() {
double naranja,manzana;
   std:: cout << "Ingrese la cantidad del vaso de jugo de Naranja. \n";
   std::cin>>naranja;
   std:: cout << "Ingrese la cantidad del vaso de jugo de Manzana. \n";
   std::cin>>manzana;
   cambiarVasos(naranja,manzana);
   std::cout<<naranja<<"\n";
   std::cout<<manzana<<"\n";
    return 0;}
void cambiarVasos (double &a,double &b){
    double temp = a;
    a = b;
    b = temp;}
