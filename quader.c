#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float a, b, c;

	// Einlesen der Seitenlängen

	
float oberflaeche;
if (argc == 4){
        a = atof(argv[1]);
	b = atof(argv[2]);
	c = atof(argv[3]);
	// Berechnung der Oberfläche
	
	oberflaeche += 2.*a*b;
	oberflaeche += 2.*a*c;
	oberflaeche += 2.*b*c;

	// Ausgabe
	printf("Ein Quader mit den Seitenlängen %f, %f und %f hat die Oberfläche %f\n",
		a, b, c, oberflaeche);

	return 0;
}
else {
printf("Inkorrekte Eingabe! Geben sie 3 Seitenlänge an!\n");
}
}
