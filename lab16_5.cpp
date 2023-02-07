#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y,int *z){
	for(int i=0; i<2; i++){
	int k=rand()%4;	
	int r=rand()%4;
	int c[4]={*w,*x,*y,*z};
	swap(c[k],c[r]);
	*w=c[0];
	*x=c[1];
	*y=c[2];
	*z=c[3];
	}
}
