#include <iostream>
#include "BrazoRobotico.h"
using namespace std;
BrazoRobotico::BrazoRobotico(double Cx, double Cy, double Cz, bool sujetar){
	this->Cx = Cx;
	this->Cy = Cy;
	this->Cz = Cz;
	this->sujetar = sujetar;
}
double getCx(){
	return Cx;
}
double getCy(){
	return Cy;
}
double getCz(){
	return Cz;
}
bool sujetar(){
	return sujetar;
}
void coger(){
	sujetar = true;
}
void soltar(){
	sujetar = false;
}
void mover(double x, double y, double z){
	Cx+= x;
	Cy+= y;
	Cz+= z;
}
