#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float base,altura,hipotenusa,area,perimetro;
	char decision;
	base=altura=hipotenusa=perimetro=area=0;
	cout<<"ingrese la base ";
	cin>>base;
	cout<<"ingrese la altura ";
	cin>>altura;
	cout<<"ingrese la hipotenusa ";
	cin>>hipotenusa;
	cout<<"calcular area o perimetro ";
	cin>>decision;
	if(decision=='a'|| decision=='A'){
		area=(base*altura)/2;
		cout<<"el area es "<<area;
	}
	else if(decision=='p'|| decision=='P'){
		perimetro=base+altura+hipotenusa;
		cout<<"el perimetro es "<<perimetro;
	}
	return 0;
}

