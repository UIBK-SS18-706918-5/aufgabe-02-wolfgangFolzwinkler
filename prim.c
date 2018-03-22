#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a;
int b = 2;
int c;
 a = atoi(argv[1]);

if(a<0){
printf("Bitte geben sie nur positive Zahlen an!\n");
}
else if(a<2){
printf("%i ist keine Primzahl.\n", a);
}
else{
while(b<a){
c=a%b;
if(c==0){
break;
}
else{
b++;
}
}
if(a==2){
printf("%i ist eine Primzahl!\n", a);
}
else if(c==0){
printf("%i ist keine Primzahl!\n", a);
}
else{
printf("%i ist eine Primzahl!\n", a);
}
}
}
