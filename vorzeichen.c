#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float x;
	x = atof(argv[1]);
	if(x<0){
printf("%f ist negativ!\n",x);
}
else if(x>0){
printf("%f ist positiv!\n",x);
}
else {
printf("%f ist genau 0!\n",x);
}
}
