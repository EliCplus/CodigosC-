#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int invitados,auxiliar;
	invitados,auxiliar=0;
	bool dc,invitation;
	dc,invitation=0;
	cout<<"ingrese la cantidad de invitados ";
	cin>>invitados;
	while(auxiliar < invitados){
		cout<<"tiene invitacion? (1=si 0=no) ";
		cin>>invitation;
		cout<<"lleva codigo de vestimenta? (1=si 0=no) ";
		cin>>dc;
		if (invitation && dc){
			cout<<"entrada aceptada"<<endl;
		}
		else {
			cout<<"anda pa allá bobo"<<endl;
		}
		auxiliar++;
	}
	return 0;
}

