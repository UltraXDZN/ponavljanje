#include<iostream>
using namespace std;

int main(){
    int polje[10];
    
    for (int j=0;j<20;j+=2){
        for (int i=4+j;i<24;i+2){
            polje[j] = i;
            
            //cout<<j<<"  -  "<<polje[j]<<endl;
            break;
        }
    }
    cout<<"[";
    for(int i=0;i<17;i+=2){
        cout<<polje[i]<<", ";
    }
    cout<<polje[-1]<<"]"<<endl;
    
    system("pause");
    return 0;
}
