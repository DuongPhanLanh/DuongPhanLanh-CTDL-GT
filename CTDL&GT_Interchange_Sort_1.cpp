#include <iostream>
using namespace std;

void HOANVI(int &x, int &y) {
	int tam = x;
	x = y;
	y = tam;
}

void Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				HOANVI(a[i],a[j]);
			}
		}
	}
}



int main()
{
	int a[7] = {8, 4, 1, 6, 5, 3, 9};
	Interchange_Sort(a, 7);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
}
