#include<iostream>
using namespace std;

int main(){
    cout<<"[";
    int polje[10], brojac=4;
    for (int i=0;i<10;i++){
        polje[i] = brojac;
        brojac += 2;
        if (i!=9)
            cout<<", ";
    }
    cout<<"]"<<endl;
    system("pause");
    return 0;
}
