//
//  main.c
//  Project_Domes
//
//  Created by Μυρτώ Δελυγιάννη, Ορέστης Σπυριδάκης, Ιωάννης Λουδάρος, Χριστίνα Κρατημένου on 21/5/20.
//  Copyright © 2020 Ιωάννης Λουδάρος, Χριστίνα Κρατημένου, Μυρτώ Δελυγιάννη, Ορέστης Σπυριδάκης . All rights reserved.
//

#include <stdio.h>
#include "myrto.h"
//#include "koutou.h"
#include "orestis.h"
#include "johnnylouds.h"
#include <time.h>

int main()
{
    
    
    //Εδώ θα χρειαστεί να βάλετε το μονοπάτι στο οποίο βρίσκονται τα αρχεία από τα οποία χρειάζεται να τραβηχτούν τα δεδομένα 
    chdir("/Users/giannisloudaros/Documents/Code/HW/4th Semester/Project Δομές/Project_Tsakalidis/Project_Tsakalidis");
    char end=0;
    
    
    printf("Καλώς ορίσατε στο καλύτερο Project στις δομές δεδομένων\n Από τους: Χριστίνα Κρατημένου \t Λουδάρος Ιωάννης \t Ορέστης Σπυριδάκης \t Μυρτώ Δελυγιάννη\n")
    
    do{
        
       printf("Ποιο μέρος του Project θα ήθελες να χρησιμοποιήσεις;/n 1. Μέρος Πρώτο\n 2. Μέρος 2\n 3.Έξοδος\n");
    
    //Ο χρήστης επιλέγει ποιο μέρος του project θέλει να εξετάσει
    int choice;
    int dump;
    do{
        
        
        scanf("%d",&choice);
        dump=getchar();
        if ((choice!=1) && (choice!=2) && (choice!=3)) printf("Πρέπει να επιλέξεις 1, 2 ή 3\n");
        
    }while((choice!=1) && (choice!=2)&& (choice!=3));
    
    switch (choice) {
            
        case 1: // Ο χρήστης επιλέγει το πρώτο μέρος του Project
            printf("Έχεις επιλέξει το πρώτο μέρος του Project\n");
            
            
            do{ //Τώρα ο Χρήστης επιλέγει το ερώτημα του πρώτου μέρους που τον ενδιαφέρει
                printf("Ποιο ερώτημα σας ενδιαφέρει;\n 1. Ερώτημα (1)\n 2. Ερώτημα (2)\n 3. Ερώτημα (3)\n 4. Ερώτημα (4)\n 5. Πίσω");
                scanf("%d",&choice);
                dump=getchar();
                if(choice>5 || choice<1) printf("Πρέπει να επιλέξεις από τα παρακάτω...\n");
            }while(choice>5 || choice<1);
                   
            switch (choice) {
                    
                case 1: //Quick Sort και Merge Sort
                    
                    break;
                case 2:
                    
                    
                    
                    break;
                case 3:
                    
                    
                    
                    break;
                    
                case 4:
                    
                    break;
                    
                    
                    
            }
            
            break;
        case 2: //Ο χρήστης επιλέγει το δεύτερο μέρος του Project
            
            
            break;
            
        case 3: //Έξοδος από το πρόγραμμα
            
            printf("Είσαι σίγουρος ότι θέλεις να τερματιστεί το πρόγραμμα;(y/n)\n");
            end=getchar();
            break;
            
    }
        
    }while (end!='y');
    
    
    printf("Φιλάκιααα <3");
    
    return 0;
    
    


}
