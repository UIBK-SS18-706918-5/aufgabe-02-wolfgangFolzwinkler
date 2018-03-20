# Aufgabe 02
Die aktuelle Aufgabe wird sich mit Kontrollstrukturen beschäftigen, welche ein essentieller Bestandteil jeder Programmiersprache sind. 
Dazu gehören Verzweigungen und Schleifen. 

## Verzweigungen
Verzweigungen werden in C mit den Codewörtern `if` und `else` realisiert.
Dabei muss nach `if` immer eine Bedingung angegeben werden, falls diese zutrifft (Bedingung wird mit *Wahr* evaluiert), wird der nachgestellte Codeblock abgearbeitet. 
Wenn die Bedingung allerdings mit *Falsch* evaluiert wird, kommt der nachgestellte Codeblock nicht zur Ausführung und das Programm läuft nach diesem weiter.
Exemplarisch sieht das etwa so aus:
``` C
if (x > 10) {
    printf("x ist größer als 10!\n");
}
printf("x ist %i\n",x);
```
Hier wird überprüft ob x größer als 10 ist, falls das zutrifft wird der nachstehende Codeblock (eingefasst durch die geschwungenen Klammern `{ ... }`) ausgeführt und die Meldung *x ist größer als 10!* am Bildschirm ausgegeben.
Anschließend wird auch noch der Wert von x ausgegeben.
Falls x kleiner oder gleich 10 ist kommt der nachstehende Codeblock nicht zur Ausführung und es wird nur der Wert von x ausgegeben.

Es könnte sein dass Sie nun auch in dem Fall dass x kleiner oder gleich 10 ist eine Meldung diesbezügliche ausgeben wollen. Mit dem bereits erklärtem könnten Sie das zB. wie folgt lösen:
``` C
if (x > 10) {
    printf("x ist größer als 10!\n");
}
if (x <= 10) {
    printf("x ist kleiner oder gleich 10!\n");
}
printf("x ist %i\n",x);
```
Viel eleganter ist es allerdings wenn Sie dazu das Codewort `else` verwenden:
``` C
if (x > 10) {
    printf("x ist größer als 10!\n");
}
else {
    printf("x ist kleiner oder gleich 10!\n");
}
printf("x ist %i\n",x);
```
Mit Hilfe von `else` lässt sich also der konträre Fall zu der `if` Bedingung abfragen.
Das spart nicht nur Schreibarbeit sondern ist auch weniger Fehleranfällig. 
Zusätzlich führt die Verwendung von `else` natürlich auch zu einer kürzereren Rechenzeit, da im Vergleich zur vorherigen Implementierung mit zwei `if` Statements, nur eine Bedingung überprüft werden muss.
Bei einem derart kurzen Beispiel wird der Rechenzeitunterschied jedoch sehr gering ausfallen.

## Mehrfachverzweigungen

Es lassen sich auch mehrere `if/else` Verzweigungen hintereinander reihen, um eine feinere Abstufung erreichen zu können. Also zB. so:
``` C
if (x > 10) {
    printf("x ist größer als 10!\n");
}
else if (x < 10) {
    printf("x ist kleiner als 10!\n");
}
else {
    printf("x ist genau 10!\n");
}
```
### Teilaufgabe a)
Legen Sie eine neue Quellcodedatei mit dem Namen `vorzeichen.c` an. 
Programmieren Sie darin ein Programm, das die Information darüber zurück gibt, ob eine übergebene Gleitkommazahl positiv, negativ oder Null ist.

### Teilaufgabe b)
In diesem Repository finden Sie die Datei `quader.c` (auch zur Auflösung, falls dieses Beispiel aus dem letzten Praktikum von Ihnen nicht komplettiert wurde).
Bauen Sie eine Verzweigung in das Programm ein, die sicher stellt, dass genau drei Parameter übergeben wurden. Falls das nicht zutrifft, sollte eine Erklärung ausgegeben werden, die besagt dass genau drei Parameter nötig sind.

## Schleifen
Schleifen sind dazu da um Codeblöcke öfter ausführen zu können. 
In *C* steht Ihnen dazu unter Anderem die `while` Schleife zur Verfügung.
Sie wiederholt die Ausführung ihres nachgestellten Codeblock solange eine Bedingung mit *Wahr* evaluiert wird. Also zB. so:
```C
int number = 10;

while (number > 0) {
    printf("%i\n", number);
    number--;
}

while (number < 11){
    printf("%i\n", number);
    number++;
}
```
Falls Sie die Variable, die in der Bedingung überprüft wird nur innerhalb der Schleife, oder nur zum Zählen der Schleifendurchgänge benötigen können Sie auch eine `for` Schleife verwenden:
```C
for (int i = 0; i <= 10; i++) {
    printf("%i\n", i);
}
```
Auf den Inhalt der verwendete Variable `i` kann in diesem Fall nur innerhalb der `for` Schleife zugegriffen werden.
>Generell ist es so, dass Variablen die in übergeordneten Codeblöcken definiert wurden auch in eingebetteten Codeblöcken benutzbar sind. 
Variablen die in eingebetteten Codeblöcken definiert wurden sind jedoch in übergeordneten Codeblöcken nicht verfügbar.

### Teilaufgabe c)
Legen Sie eine neue Quellcodedatei mit dem Namen `fakultaet.c` an. 
Programmieren Sie darin ein Programm das die Fakultät einer, mittels Parameter übergebenen, ganzen Zahl berechnet. 
Überprüfen Sie vorher noch, dass genau ein Parameter übergeben wurde und geben Sie andernfalls einen Hinweis aus.
Stimmen die Ergebnisse? Ab welcher Zahl stimmt das Ergebnis nicht mehr?
Vermerken Sie diese Zahlen am Ende des Quellcodes in einem Kommentar.

Der Grund dafür ist dass eine `int` variable nur einen fix definierten Speicherbereich zur Verfügung hat.
Wie groß der Speicherbereich tatsächlich ist, hängt vom Compiler (bei uns gcc) und dessen Version ab. 
Der Speicherbereich von `int` ist aber mindestens 16 Bit groß, womit Zahlen von −32767 bis +32767 abgespeichert werden können. 
Wenn die Grenzen über- bzw unterschritten werden, fängt die Variable von der Anderen Seite zum Zählen an und das Ergebnis wird dadurch unvorhersehbar da man auch nicht weiß wie oft das schon die Runde ging.
Typischerweise stehen auf heutigen Systemen eher 4 Byte, also 32 Bit (Ein Byte sind 8 Bits), zur Verfügung. 
Um sicher zu sein können Sie die Anzahl der Bytes mit der Funktion `sizeof` ausgeben lassen.
Bauen Sie das ebenfalls in Ihr Programm ein:
```C
printf("Anzahl der Bytes von zahl: %i\n", sizeof(zahl));
```
### Teilaufgabe d)
Kopieren Sie nun Ihr Programm aus Teilaufgabe c in die Datei `fakultaet_long.c` und ersetzen Sie `int` durch `long`.
Wie verhält sich jetzt der Speicherbereich und welche maximale Fakultät können Sie berechnen?
Vermerken Sie diese Zahlen am Ende des Quellcodes in einem Kommentar.
Es gibt natürlich noch mehrere Datentypen, diese können Sie bei bedarf gerne im Internet recherchieren. 

### Teilaufgabe e)
Erstellen Sie nun ein Programm, das überprüft ob eine übergebene Zahl eine Primzahl ist.
Dazu werden Sie natürlich eine Schleife und `if/else` benötigen.
Um das Programm schneller zu machen empfiehlt es sich die Schleife mit `break;` abzubrechen wenn es den ersten Beweis dafür gibt das es sich nicht um eine Primzahl handelt.
>Tipp: Inkrementieren Sie in einer Schleife eine Variable von 2 aufwerts wobei Sie jeweils den Modulo mit der zu überprüfenden Zahl bilden.
Ist der Modulo Null, ist die zu überprüfenden Zahl durch diese teilbar, wodurch sich leicht sehen lässt ob sie eine Primzahl ist. 

### Teilaufgabe f)
Erstellen Sie ein Programm, das die Exponentialfunktion mit Hilfe der Definition:

![Exponentialfunktion](/exp_fkt.svg)

berechnet. 
Sie müssen dafür *Unendlich* natürlich mit einer Zahl ersetzen (experimentieren Sie zB. mit 100, 200, oder legen Sie eine Toleranz bzw. Genauigkeit fest), es handelt sich also um eine numerische Näherung.
Für dieses Beispiel würde sich ausserdem eine `do/while` Schleife sehr gut eignen, welche Sie natürlich im Internet nachschlagen können.