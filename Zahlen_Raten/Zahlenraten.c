/*
 * Zahlenraten.c
 * 
 * Copyright 2021 Administrator <Administrator@AB-201904231713>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	srand(time(NULL));

	const int anzahl_Versuche = 5;
	const int min_zahl = 1;
	const int max_zahl = 50;
	int storage[anzahl_Versuche] = {0};
	int counter = 0;
	int random_num = rand()%max_zahl + min_zahl;
	bool found = false;
	printf("Willkommen! Bitte rate eine Zahl zwischen %d und %d.\n", min_zahl, max_zahl);
	for(counter = 0; counter < 5 && !found; counter++){
		scanf("%10d", &storage[counter]); //INT_MAX: 2147483647
		printf("%d. Versuch:%d\n", counter+1, storage[counter]);
		if(storage[counter] == random_num) 
		{ 
			printf("Glueckwunsch! Die Zahl wurde im %d. Versuch korrekt geraten!\n", counter+1);
			found = true;  
		}
		else if(storage[counter] < random_num) 
		{ 
			printf("Die Zahl ist leider zu klein!\n");
		}
		else
		{ 
			printf("Die Zahl ist leider zu gross!\n");
		}	
	}
	printf("Versuch:");
	for (counter = 0; counter < 5; counter++){
		printf("\t%d", counter+1);
	}
	printf("\nEingabe:");
	for (counter = 0; counter < 5; counter++){
		printf("\t%d", storage[counter]);
	}
	return 0;
}

