#ifndef varianta2FULL.h
#define varianta2FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Variabilele x şi y sunt tip int. Care dintre expresiile C/C++ de mai jos are valoarea 1
dacă şi numai dacă valorile întregi nenule memorate în variabilele x şi y sunt egale? (4p.)
a. (x%y==0) && (y%x==0) && (x*y>0) b. (x<=y) && (y<x)
c. (x<=y) || (y<=x) d. x*x==y*y

a. (x%y==0) && (y%x==0) && (x*y>0)
*/
/*
2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului întreg x la
numărul întreg nenul y.
a) Scrieţi ce se va afişa dacă se citesc, în această
ordine, numerele: 17 22 13 101 2 7 5 0.
 (6p.) (
x=17
y=22  17>22 fals 22%10=2
x=22

y=13  22>13 adevărat  22%10=2
x=13

y=101  13>101 fals  101%10=1
x=101

y=2  101>2 adevărat  101%10=1
x=2

y=7  2>7 fals  7%10=7
x=7

y=5  7>5 adevărat  7%10=7
x=5

y=0  5>0 adevărat  5%10=5
x=0  stop

Se afișează:2211775
*/

/*
5. Să se scrie un program C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20
de caractere, doar litere mici ale alfabetului englez. Programul determină transformarea
cuvântului citit prin înlocuirea fiecărei vocale a cuvântului, cu un şir format din două caractere
şi anume vocala respectivă urmată de litera mare corespunzătoare, restul literelor
nemodificându-se, ca în exemplu. Programul afişează pe ecran cuvântul obţinut, pe o
singură linie. Se consideră vocale literele din mulţimea {a,e,i,o,u}.
Exemplu: pentru cuvântul bacalaureat se va afişa pe ecran: baAcaAlaAuUreEaAt
(10p.)
        */
bool esteVocala(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void rezolvare5(){
     char cuvant[21];

    cin >> cuvant;

    for (int i = 0; i < strlen(cuvant); i++) {
        if (esteVocala(cuvant[i])) {
            cout << cuvant[i];
            cout << char(cuvant[i] - 32);
        } else {
            cout << cuvant[i];
        }
    }
}
/*
Varianta 2
Ministerul Educaţiei, Cercetării şi Inovării
Centrul Naţional pentru Curriculum şi Evaluare în Învăţământul Preuniversitar
BACALAUREAT 2009 - INFORMATICĂ, limbajul C/C++ Subiectul III
Specializarea Matematică-informatică intensiv informatică
Subiectul III (30 de puncte) - Varianta 002
Pentru itemul 1, scrieţi pe foaia de examen litera corespunzătoare răspunsului corect.
1. Utilizând metoda backtracking se generează în ordine lexicografică cuvintele de câte patru
litere din mulţimea A={a,b,c,d,e}, cuvinte care nu conţin două vocale alăturate. Primele
opt cuvinte generate sunt, în ordine: abab, abac, abad, abba, abbb, abbc, abbd, abbe.
Care este ultimul cuvânt generat? (4p.)
a. edcb b. eeee c. edde d. eded
Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
2. Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(12345);? (6p.)
//C++
*/
void f(long n)
{ cout<<n%10;
 if(n!=0)
 { f(n/100); cout<<n%10;}
}
/*
f(12345)
12345 = 5
f(123) = 3
f(1) = 1
f(0) = 0

Se afișează 5310135
*/



#endif // varianta2FULL.h
