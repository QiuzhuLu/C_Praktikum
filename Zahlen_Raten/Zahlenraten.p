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

int main(int argc, char **argv)
{

   int storage[5] = {0};
   int random_num = 0;
   int counter = 0;
   srand(time(NULL));
   random_num = rand()%50 + 1;
   printf("Willkommen! Bitte rate eine Zahl zwischen 1 und 50.\n");
   for(counter = 0; counter < 5; counter++){
      scanf("%10d", &storage[counter]);
      printf("%d. Versuch:%d\n", counter+1, storage[counter]);
      if(storage[counter] == random_num)
      {
         printf("Glueckwunsch! Die Zahl wurde im %d. Versuch korrekt geraten!\n", counter+1);
         break;
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
   printf("Versuch:\t1\t2\t3\t4\t5\nEingabe:\t%d\t%d\t%d\t%d\t%d\n", storage[0], storage[1], storage[2], storage[3], storage[4]);
   return 0;
}

