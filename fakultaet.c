#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {

int b; 
int c=1; 
int a;
        a = atoi(argv[1]);
if(a>0){

b=a;
while(b>0){
c=c*b;
b--;
}
printf("Fakultät von %i ist gleich %i.\n", a , c);
} 
else if (a==0){
printf("Fakultät von %i ist gleich 1.\n", a);
}
else{ 
printf("Geben Sie bitte nur Zahlen größer gleich 0 ein.\n");
}
//Ab Zahlen größer 12 funktioniert dieses Programm nicht mehr!
}
