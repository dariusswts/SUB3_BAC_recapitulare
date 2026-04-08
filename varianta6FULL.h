#ifndef varianta6FULL.h
#define varianta6FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Care dintre următoarele expresii C/C++, are ca valoare cel mai mic dintre numerele
naturale nenule, cu cel mult 4 cifre fiecare, memorate în variabilele întregi x şi y? (4p.)
a. (x+y-abs(x-y))/2 b. x+y-abs(x-y)/2
c. (x+y+abs(x-y))/2 d. (x+y+abs(x+y))/2

(x+y-abs(x-y))/2
*/

/*
2. Se consideră algoritmul alăturat, descris în pseudocod:
S-a notat cu [c] partea întreagă a numărului real c, iar cu a%b
restul împărţirii numărului întreg a la numărul întreg nenul b.
a) Scrieţi valoarea care se afişează, în urma executării
algoritmului, dacă se citeşte numărul 9321. (6p.)
n      n%10     comparație          s
9321     1      1>-1  adevărat      1
932      2      2>1   adevărat      2
93       3      3>2   adevărat      3
9        9      9>3   adevărat      9
citeşte n (număr natural)
sÅ-1
┌cât timp n>0 execută
│┌dacă n%10>s atunci
││ sÅn%10
││altfel
││ sÅ11
│└■
│ nÅ[n/10]
└■
scrie s
*/
/*
1. Care dintre următoarele expresii reprezintă un element al tabloului
bidimensional a, declarat alăturat? (4p.)
int a[5][6];
a. a[40] b. a[6][7] c. a[2][3] d. a[10*5]

*/
/*
 5. Se consideră un text cu maximum 255 de caractere în care cuvintele sunt separate prin
unul sau mai multe spaţii. Primul caracter din textul citit este o literă, iar cuvintele sunt
formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi îl transformă, înlocuind prima literă a fiecărui cuvânt cu litera mare
corespunzătoare, restul caracterelor rămânând nemodificate. Textul astfel transformat va fi
afişat pe ecran.
Exemplu: dacă de la tastatură se introduce textul: mare frig rosu
se va afişa pe ecran: Mare Frig Rosu (10p.)
Varianta 6
Ministerul Educaţiei, Cercetării şi Inovării
Centrul Naţional pentru Curriculum şi Evaluare în Învăţământul Preuniversitar
BACALAUREAT 2009 - INFORMATICĂ, limbajul C/C++ Subiectul III
Specializarea Matematică-informatică intensiv informatică
Subiectul III (30 de puncte) - Varianta 006
*/
void rezolvare5(){
    char s[256];
    cin.getline(s,256);

    if(s[0]>='a' && s[0]<='z'){
        s[0]=s[0]-32;
    }

    for(int i=1;i<strlen(s);i++){
        if(s[i]==' ' && s[i+1]>='a' && s[i+1]<='z')
            s[i+1]=s[i+1]-32;
    }

    cout<<s;
}


//2. Se consideră subprogramul alăturat:
//Ce valoare are f(15,2)? Dar f(128,2)?
int f(int a, int b){
 if (b<1) return -1;
 else
 if (a%b==0)
 return 1+f(a/b,b);
else
 return 0; }

 //f(15,2) =0
 //f(128,2) 128 > 64 > 32 > 16 > 8 > 4 > 2 > 1
 //se imparte de 7 ori

/*

4. Se consideră fişierul BAC.TXT ce conţine un şir crescător cu cel mult un milion de numere
naturale de cel mult nouă cifre fiecare, separate prin câte un spaţiu.
a) Să se scrie un program C/C++ care, folosind un algoritm eficient din punct de vedere al
memoriei utilizate şi al timpului de executare, citeşte din fişier toţi termenii şirului şi afişează
pe ecran, pe o singură linie, fiecare termen distinct al şirului urmat de numărul de apariţii ale
acestuia în şir. Valorile afişate sunt separate prin câte un spaţiu.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut:
1 1 1 5 5 5 5 9 9 11 20 20 20
programul va afişa:
1 3 5 4 9 2 11 1 20 3
deoarece 1 apare de 3 ori, 5 apare de 4 ori, etc. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri).
*/
void rezolvare4(){
    ifstream f("BAC.TXT");
    int x,prev;
    if(f>>prev){
        int cnt=1;
        while(f>>x){
            if(x==prev)
                cnt++;
            else
            {
                cout<<prev<<" "<<cnt<<" ";
                prev=x;
                cnt=1;
            }
        }
        cout<<prev<<" "<<cnt;
    }

}




#endif // varianta6FULL.h
