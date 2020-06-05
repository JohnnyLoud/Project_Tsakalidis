//
//  johnnylouds.c
//  Project_Tsakalidis
//
//  Created by Ioannis Loudaros on 5/6/20.
//  Copyright © 2020 Ιωάννης Λουδάρος. All rights reserved.
//

#include <stdio.h>

//Χρόνος, για την εύκολη διαχείρηση των timestamps, ενδιαφέρον έχει το int together, σκοπός του είναι να κάνει ευκολότερο το sorting
typedef struct{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int together;
} time;



//Τύποι δεδομένων για την καταγραφή των μετρήσεων. Ένας από τους δύο θα μπορούσε να παραληφθεί αλλά χρησιμοποιούνται για λόγους ευαναγνωσιμότητας
typedef struct{
    int temp;
    time timestamp;
} measuret;

typedef struct{
    int hum;
    time timestamp;
} measureh;


//Τύποι δεδομένων για την διατήρηση πολλών μετρήσεων των παραπάνω τύπων
typedef struct{
    measureh* measurement;
    int size;
} logh;

typedef struct{
    measuret* measurement;
    int size;
} logt;







//Οι parsers

void loadh(FILE* fp,logh log){
    fp = fopen( "hum.txt", "r");
    
    
    
    
    
}