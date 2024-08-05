#include <iostream>

void marcarAsiento (bool *asiento);
int main() {
bool asientos[5];
for (int i=1;i<5;i++){
    asientos[i]=false;
}
int num;
std::cout<<"¿Que asiento desea marcar?\n";
std::cin>>num;
marcarAsiento(&asientos[num]);
for (int i=1;i<5;i++){
    if(asientos[i]==true){
  std::cout<<"asiento "<<i<<" esta libre.\n";
}else{
      std::cout<<"asiento "<<i<<" esta ocuppado.\n";
    }
}
    return 0;}


    void marcarAsiento (bool *asiento){
    *asiento=true;
}
