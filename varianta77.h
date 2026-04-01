#ifndef varianta77.h
#define varianta77.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
2.Pentru definiţia alăturată a subprogramului
sub, scrieţi ce valoare are sub(4). Dar
sub(132764)? (6p.)
*/
int sub(long n){
   if (n!=0){
    if(n%2!=0){
        return n%10+sub(n/10);
    }
    else {
        return sub(n/10);
    }
   }
   else return 0;
}

/*
sub(4): 4!=0 da 4%2!=0 nu ret sub(0)
sub(0): 0!=0 nu ret 0 ------
sub(4)=0; raspuns !!


sub(132764): n!=0 da n%2!=0 nu sub(13276)
sub(13276) : n!=0 da n%2!=0 nu sub(1327)
sub(1327)  : n!=0 da n%2!=0 da 7+sub(132)
sub(132)   : n!=0 da n%2!=0 nu sub(13)
sub(13)    : n!=0 da n%2!=0 da 3+sub(1)
sub(1)     : n!=0 da n%2!=0 da 1+sub(0)
sub(0)     : n!=0 nu ret 0;-----

sub(1)=1+0=1
sub(13)=3+1=4
sub(132)=4
sub(1327)=4+7=11
sub(13276)=11
sub(132764)=11 raspuns!!
*/


/*
3. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(0<n<100, 0<k<4) şi apoi n numere reale pozitive care au cel mult 3 cifre la partea
întreagă şi cel mult 5 cifre zecimale şi afişează pe ecran numărul de valori reale citite care
au mai mult de k cifre zecimale.
Exemplu: dacă pentru n se citeşte valoarea 5 şi pentru k valoarea 2 şi apoi şirul de
numere reale 6.2 4.234 2 8.13 10.001 pe ecran se va afişa valoarea 2.
*/

int nrCIfreZecimale(double x){
    int contor=0;
    x=x-int(x);
    cout<<x;
    while(x>0.00001){

    }
}











#endif // varianta77.h
