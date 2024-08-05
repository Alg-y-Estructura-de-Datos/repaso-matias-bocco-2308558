#include <iostream>
int factorial (int n);
int main() {
int n;
 std::   cout << "Ingrese el numero al cual desea calcular el factorial\n";
 std::cin>>n;
 std::cout<<factorial(n);
    return 0;
}
int factorial (int n){
    int factorial=1;
    if (n!=0){
    for (int i=1;i<=n;i++){
        factorial=factorial*i;
    }}
    return factorial;
}