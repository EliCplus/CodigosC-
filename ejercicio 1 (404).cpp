#include <iostream>
using namespace std;

void transformer(char a[],int b, char c, int v){
	
	switch(a[b]){
	case '0':v=v+0;
	break;
	case'1':v=v+1;
	break;
	case'2':v=v+2;
	break;
	case'3':v=v+3;
	break;
	case'4':v=v+4;
	break;
	case'5':v=v+5;
	break;
	case'6':v=v+6;
	break;
	case'7':v=v+7;
	break;
	case'8':v=v+8;
	break;
	case'9':v=v+9;
	break;
	}
	if(c=='d'){
		v==v*10;
	}
}


int main(int argc, char *argv[]) {
	string mes[12]= {"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
	char fecha[6],nc;
	int month, anio;
	nc='u';
	month=anio=0;
	
	cout<<"ingrese la fecha: ";
	cin>>fecha;
	
	if(fecha[2]=='0'){
		month=0;
	}
	else if(fecha[2]=='1'){
		month=10;
	}
	
	transformer(fecha,3,nc,month);
	nc='d';
	transformer(fecha,4,nc,anio);
	nc='u';
	transformer(fecha,5,nc,anio);
	month=-1;
	
	if(anio>=25&&anio<=99){
		anio+=1000;
	}
	else{
		anio+2000;
	}
	
	cout<<fecha[0]+ fecha[1]<<" de "<<mes[month]<<" de "<<anio;
	return 0;
}

