#include<stdio.h>

//Funktions Prototypen

//Hauptprogramm
int main () {
	/*
	* Programm zur Übung mit Arrays und Strings. Beispiel: Waren aus dem Supermarkt
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *    Supermarkt          * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Wareneingabe
	char* name[6] = { "Wasser" , "Kimchi" , "Gochujang" , "Miso" , "Yopokki" , '\0' };
	int packungsgroesse[6] = { 750 , 160 , 200 , 153 , 115 , '\0' }; //in Gramm
	float preis[6] = { 0.66 , 2.59 , 2.49 , 4.59 , 299 , '\0' }; //in Euro
	
	//Ziel ist, eine Liste mit folgenden Werten auszugeben: Name, Packungsgröße, Kilopreis netto in Euro, Kilopreis brutto in Euro(7% Mwst.)
	for (int i=0; i<5; i++) {
		char* netto = preis[i]/packungsgroesse[i]*1000;
		char* brutto = netto*1.07;
		printf("\nProdukt[&d]:%s | %dg pro Einheit | %s€/kg(netto) | %s€/kg(brutto)",i,name[i],packungsgroesse[i],netto,brutto);
	}		
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
