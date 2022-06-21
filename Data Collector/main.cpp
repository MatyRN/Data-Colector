#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string Lista[100];
    int opc = 0, i=0;
    while(opc !=4){
    system("cls");
    cout <<"1-Nuevo en Lista"<<endl;
    cout <<"2-Modificar Nombre"<< endl;
    cout <<"3-Mostrar Productos"<<endl;
    cout <<"4-Salir"<<endl;
    cin>>opc;
    string Nombre;
    string Nuevo;
    switch(opc){
case 1:
    cout<<"Ingrese nombre del Enlistado: ";
    cin>>Nombre;
    Lista[i]=Nombre;
    i++;
    cout<<"Se agrego exitosamente";
    break;
case 2:
    cout<<"Ingrese nombre del Enlistado a modificar: ";
    cin>>Nombre;
    cout<<"Ingrese nuevo nombre: ";
    cin>>Nuevo;
    for(int j=0;j<i;j++){
    if(Lista[j]==Nombre){
     Lista[j]= Nuevo;
     cout<<"Se Modifico exitosamente";
     break;
    }
}
case 3:
for(int j=0;j<i;j++){
    cout<< "->"<<(j+1)<<Lista[j]<<endl;
}
break;
    }
}
    return 0;
}
