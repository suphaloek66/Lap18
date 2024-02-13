#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *A,Rect *B){
double width = max(0.0, min(A->x + A->w, B->x + B->w) - max(A->x, B->x));
double height = max(0.0, min(A->y, B->y) - max(A->y - A->h, B->y - B->h));
return width * height;
}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};

	Rect R3 = {1,1,5,5};
	Rect R4 = {7,2,3,3};
	
	Rect R5 = {-1,2,6.9,9.6};
	Rect R6 = {0,0,1.2,2.5};
	
	cout << overlap(&R1,&R2) << endl; 
	cout << overlap(&R3,&R4) << endl;
	cout << overlap(&R5,&R6) << endl;

	return 0;
}