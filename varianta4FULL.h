#ifndef varianta4FULL.h
#define varianta4FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
1. Care este rezultatul evaluării expresiei C/C++ alăturate? (4p.) 11*3/2*2/3
a. 2 b. 10 c. 2.75 d. 11

11*3 = 33
33/2 = 16
16*2 = 32
32/3 = 10
 b. 10
*/

/*
2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului întreg x la
numărul întreg nenul y şi cu x↔y operaţia de
interschimbare a valorilor variabilelor x şi y.
 Scrieţi ce se afişează pentru a=5 şi b=17. (6p.)
 citeşte a,b (numere întregi)
┌dacă a<b atunci
│ a↔b
└■
┌pentru xÅa,b,-1 execută
│ ┌dacă x%2≠0 atunci
│ │ scrie x,’ ’
│ └■
└■

17 15 13 11 9 7 5
*/

/*
3. Fie s o variabilă ce memorează un şir de caractere, format doar din litere ale alfabetului
englez, şi i o variabilă de tip int. Scrieţi instrucţiunile ce pot înlocui punctele de suspensie
din secvenţa de program alăturată astfel încât
executarea ei să determine eliminarea tuturor
literelor mici din şirul s şi apoi afişarea şirului
obţinut. (6p.)
 i=0;
while (i<strlen(s))
if(s[i]>='a' && s[i]<='z')
    strcpy(s+i,s+i+1);
else
    i++;
printf("%s",s); | cout<<s;
*/
/*
4. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează:
- elementele aflate pe diagonala secundară a matricei vor primi valoarea 0
- elementele de pe prima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n
- elementele de pe a doua linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n-1
...
- elementele de pe ultima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii (ca
în exemplu).
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
 4 4 4 0
 3 3 0 3
 2 0 2 2
0 1 1 1
*/



#endif // varianta4FULL.h
