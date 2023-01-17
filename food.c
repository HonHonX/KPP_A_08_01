#include<stdio.h>
#include<string.h>

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
	float preis[6] = { 0.66 , 2.59 , 2.49 , 4.59 , 2.99 , '\0' }; //in Euro
	
	//Ziel ist, eine Liste mit folgenden Werten auszugeben: Name, Packungsgröße, Kilopreis netto in Euro, Kilopreis brutto in Euro(7% Mwst.)
	for (int i=0; i<5; i++) {
		float netto = preis[i]/packungsgroesse[i]*1000;
		float brutto = netto*1.07;
		printf("\nProdukt[%d]: %s | %dg pro Einheit | %.2f€/kg(netto) | %.2f€/kg(brutto)",i+1,name[i],packungsgroesse[i],netto,brutto);
		
		//Alternative Ausgabe über einen Ausgabe-String
		char ausgabe[100];
		
		strcat(ausgabe,name[i]);
		strcat(ausgabe,",");
		
		char pg[10];
		sprintf(pg, "%d", packungsgroesse[i]); //int muss in einen String umgewandelt werden			
		strcat(ausgabe,pg);
		strcat(ausgabe,",");
		
		char n[10];
		char b[10];
		sprintf(n, "%.2f", netto); //float muss in einen String umgewandelt werden
		sprintf(b, "%.2f", brutto); //float muss in einen String umgewandelt werden
		strcat(ausgabe,n);
		strcat(ausgabe,",");
		strcat(ausgabe,b);
		strcat(ausgabe,",");
		
		printf("\n%s",ausgabe);
		
		ausgabe[0]='\0'; //array wird geleert
	}		
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
