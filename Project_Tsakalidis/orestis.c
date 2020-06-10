//
//  orestis.c
//  Project_Tsakalidis
//
//  Created by Ioannis Loudaros on 10/6/20.
//  Copyright © 2020 Ιωάννης Λουδάρος. All rights reserved.
//

#include <stdio.h>
//
//  orestis.h
//  Project_Tsakalidis
//  Εδώ υπάρχουν οι αλγόριθμοι ταξινόμισης timesort(), bintimesearch(), intertimesearch()
//  !!Φρόντισε να υπάρχει μια μικρή περιγραφή του τι κάνει ο αλγόριθμος πριν την δήλωση του <3

#ifndef orestis_h
#define orestis_h

#include <stdio.h>
#include <stdlib.h>
#include "johnnylouds.h"



//TIMESORT

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
  
void timesort(logh* p, int n) //kanw sort ton pinaka me vash ta timestamps gia na mporw meta na kanw binary search poy ematha apo to vivlio toy kyrioy tsakalidi
{
    int i, j, min_idx;
  
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (p->measurement[j].timestamp.together < p->measurement[min_idx].timestamp.together)
            min_idx = j;
  
        swap(&p->measurement[min_idx].timestamp.together, &p->measurement[i].timestamp.together);
    }
}

//BINARY

int binarySearch(logh* p, int x, int n) //psaxnw me vash to timestamp me th methodo binary search poy ematha apo to vivlio toy kyrioy tsakalidi
{
    int high = n-1;
    int low = 0;
    int mid;
    
    if (high >= low)
    {
        mid = low + (high - low)/2;

        if(p->measurement[mid].timestamp.together == x) //an einai sth mesh parto
        {
            return mid;
        }
        else if (p->measurement[mid].timestamp.together > x)//psaxnw aristera
        {
            return binarySearch(p, low, mid-1);
        }
        else //psaxnw deksia
            return binarySearch(p, mid + 1, high);
        }
    else //alliws ton poylo
        return -1;
    }

//INTERPOLATION

int interpolationSearch(logh* p, int n, int x)
{
    int low = 0;
    int high = (n - 1);
  
    while (low <= high && x >= p->measurement[low].timestamp.together && x <= p->measurement[high].timestamp.together)
    {
        if (low == high)
        {
            if (p->measurement[low].timestamp.together == x) return low;
            return -1;
        }

        //vriskw th thesh me ton typo apo to vivlio toy kyrioy tsakalidi
        int pos = low + (((double)(high - low) /
                          (p->measurement[high].timestamp.together - p->measurement[low].timestamp.together) * (x - p->measurement[low].timestamp.together)));
  
        //an to vrikame me th mia oyaoy
        if (p->measurement[pos].timestamp.together == x)
            return pos;
  
        //an to x einai megalytero apo ayto poy vrikame des deksia
        if (p->measurement[pos].timestamp.together < x)
            low = pos + 1;
  
        //an to x einai mikrotero apo ayto poy vrikame des aristera
        else
            high = pos - 1;
    }
    return -1;
}






#endif orestis_h
