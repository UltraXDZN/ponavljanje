#include<iostream>
using namespace std;

int main(){
	int n, brojac = 1, zbroj = 0;
	cout<<"Unesite broj koji je veci od 2 i manji od 100: ";
	cin>>n;
	
	int a[n][n];
	
	for (int i=0; i<n; i++){
		for (int j=1; j<=n; j++){
			a[i][j] = brojac;
			cout<<a[i][j]<<" | ";
			brojac++;
		}
		cout<<endl;
	}
	for (int i=0; i<n;i++)
	{
		zbroj += a[i][i];
	}
	cout<<"Zbroj je: "<<zbroj;
}
