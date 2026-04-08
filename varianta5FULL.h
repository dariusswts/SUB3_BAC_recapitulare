#ifndef varianta5FULL.h
#define varianta5FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Variabila x este de tip real. Care dintre următoarele expresii C/C++ are valoarea 1 dacă şi
numai dacă numărul real memorat în variabila x nu aparţine intervalului (2,9]? (4p.)
a. (x>2) && (x<=9) b. (x<=2) && (x>9)
c. (x<=2) || (x>9) d. (x<2) || (x>9)

(x<=2) || (x>9)
*/


/*
2. Se consideră algoritmul alăturat,
descris în pseudocod.
S-a notat cu x%y restul împărţirii numărului
întreg x la numărul întreg nenul y şi cu [a]
partea întreagă a numărului real a.
a) Scrieţi ce se va afişa dacă se citesc,
în această ordine, valorile 729385 şi
532. (6p.)

y=0*10+5=5 ; x=7293
y=5*10+3=53 ; x=72
y=53*10+2=532 ; x=0 → stop

Rezultat:y=532

┌repetă
│ yÅy*10+x%10
│ xÅ[x/100]
└până când x=0
┌cât timp y*z>0 şi y%10=z%10 execută
│ yÅ[y/10]
│ zÅ[z/10]
└■
┌dacă y+z=0 atunci
│ scrie 1
│altfel
│ scrie 0
└■
*/
/*
4. Fie s o variabilă ce memorează un şir de caractere, c o variabilă
de tip char, iar i şi j două variabile de tip int. Scrieţi
instrucţiunile ce pot înlocui punctele de suspensie din secvenţa
de program alăturată astfel încât executarea ei să determine
modificarea conţinutul şirului s prin interschimbarea caracterelor
aflate pe poziţii simetrice faţă de mijlocul şirului (primului caracter
cu ultimul, al doilea cu penultimul, etc). (6p.)
 i=0;
 j=strlen(s)-1;
 while (i<j)
 {
     c=s[i];
     s[i]=s[j];
     s[j]=c;
     i++;
     j--;
 }
 */

//2. Pentru subprogramul f definit mai jos, ce se afişează ca urmare a apelului f(3,17)?(6p.)
//C++
void f ( int a, int b)
{ if(a<=b)
 { f(a+1,b-2); cout<<’*’;}
 else cout<<b;
}
/*
3<=17 da f(4,15) *
4<=15 da f(5,13) *
5<=13 da f(6,11) *
6<=11 da f(7,9)  *
7<=9 da  f(8,7)
reaspuns ****
*/


/*
3. Scrieţi un program C/C++ care citeşte de la tastură un număr natural n cu cel mult 8 cifre
(n≥10) şi care creează fişierul text NR.TXT ce conţine numărul n şi toate prefixele nenule
ale acestuia, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a
valorii lor.
Exemplu: pentru n=10305 fişierul NR.TXT va conţine numerele:
10305 1030 103 10 1 (10p.)
*/
void rezolvare3(){
    int n;
    cin>>n;

    ofstream f("NR.TXT");

    while(n>0)
    {
        f<<n<<" ";
        n=n/10;
    }
}
/*
4. Subprogramul f, cu un parametru:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 8 cifre (a>1)
- returnează cel mai mic divizor prim al valorii parametrului a.
Exemplu: pentru valoarea 45 a parametrului a, subprogramul va returna valoarea 3
deoarece a=32
*5, iar cel mai mic divizor prim al său este 3.
a) Scrieţi definiţia completă a subprogramului f. (4p.)
b) Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din
şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va
determina şi va afişa pe ecran toate numerele prime din şirul citit. Numerele determinate se
vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor. Dacă nu
există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru n=7, şirul: 1125, 2, 314, 101, 37, 225, 12 pe ecran se va afişa:
2 37 101
*/
//a
int f(int a)
{
    for(int d=2; d*d<=a; d++)
        if(a%d==0)
            return d;
    return a;
}









#endif // varianta5FULL.h
