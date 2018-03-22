#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char ** argv) {
	
float a;
a = atof(argv[1]);
float b =1;
int c=1;
long d;
int e;
int f;
float g;
do{
e=c;
d=1;
while(e>0){
d=d*e;
e--;
}
f=c;
g=a;
while(f>1){
g=g*a;
f--;
}
b=b+g/d;
c++;
} while(c<13);
printf("Die Exponentialfunktion an der Stelle %f ist gleich %f.\n", a,b);
//Dieses Programm ist nur bei eingegebenen Werten zwischen -3 und 3 einigermassen verlässlich!!
}



