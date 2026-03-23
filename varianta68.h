#ifndef varianta68.h
#define varianta68.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale m şi n
(1≤m≤50, 1≤n≤50) şi m* n numere naturale de cel mult 5 cifre ce reprezintă elementele
unui tablou bidimensional, şi afişează pe ecran ultima cifră a produsului elementelor pozitive
aflate pe linii cu numere de ordine pare şi coloane cu numere de ordine impare.
Numerotarea liniilor, respectiv a coloanelor, se va face începând cu valoarea 1. Dacă nu
există elemente pozitive aflate pe linii cu numere de ordine pare şi coloane cu numere de
ordine impare, se va afişa mesajul NU EXISTA. (10p.)
Exemplu: pentru m=4, n=4 şi matricea alăturată se va afişa 5
(care reprezintă ultima cifră a valorii 355=5*71).
  11 -21 31 41
  5 -61 71 -81
  91 11 21 31
 -11 31 -41 0
*/

void SUB2(){
    int m,n,a[50][50];
    int ok=0;
    int prod=1;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if((i%2==0)&&(j%2==1)&&a[i][j]>0){
                prod=prod*a[i][j];
                ok=1;
            }
        }
    }
    if(ok==0){
        cout<<"NU exista"<<endl;
    }else{
        cout<<"Raspuns: "<<prod<<prod%10;
    }
}



#endif // varianta68.h
