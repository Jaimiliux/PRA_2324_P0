#include <iostream>
#include "BrazoRobotico.h"

int main(){
	BrazoRobotico BR1(1.5, 2.6, -12.1, false);
	cout << getCx() << endl;
	cout << getCy() << endl;
	cout << getCz() << endl;
	if(sujetar == flase){
		cout << El robot no esta sujetando nada << endl;
	}
	else{
		cout << El robot esta sujetando un objeto << endl;
	}
	BR1.mover(1, 2, 3);
	cojer();
	cout << getCx() << endl;
	cout << getCy() << endl;
	cout << getCz() << endl;
	if(sujetar == flase){
		cout << El robot no esta sujetando nada << endl;
	}
	else{
		cout << El robot esta sujetando un objeto << endl;
	}
	return 0;
}



