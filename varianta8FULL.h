#ifndef varianta8FULL.h
#define varianta8FULL.h
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Care dintre următoarele expresii C/C++ are ca valoare cel mai mare dintre numerele
naturale nenule, cu cel mult 4 cifre fiecare, memorate în variabilele întregi a şi b? (4p.)
a. (a+b+abs(a-b))/2 b. a+b+abs(a-b)/2
c. (a+b-abs(a-b))/2 d. (a+b-abs(a+b))/2

a. (a+b+abs(a-b))/2


2. Se consideră algoritmul alăturat descris în
pseudocod:
S-a notat cu [c] partea întreagă a numărului real
c, iar cu a%b restul împărţirii numărului întreg a la
numărul întreg b.
a) Scrieţi valoarea care se afişează, în urma
executării algoritmului, dacă se citeşte
pentru n valoarea 932125 şi pentru k
valoarea 3.
	n	k	n%2	Acțiune	nr	p
1	932125	3	1 (impar)	k=2	0	1

2	93212	2	0 (par)	nr←0+2*1=2	2	10
3	9321	2	1	k←1	2	10
4	932	1	0	nr=2+2*10=22	22	100
5	93	1	1	k=0	22	100

 nrÅ0
 pÅ1
┌cât timp n≠0 şi k≠0 execută
│┌dacă n%2=0 atunci
││ nrÅnr+ n%10*p
││ pÅp*10
││altfel
││ kÅk-1
│└■
│ nÅ[n/10]
└■
 scrie nr


*/


/*
Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
 2. Se consideră subprogramul f,
descris alăturat. Ce se va afişa
în urma apelului f(3);? (6p.)
void f(int n)
{ if (n!=0)
 { if (n%2==0)
 cout<<n<<’ ’; | printf("%d ",n);
 f(n-1);
 cout<<n<<’ ’; | printf("%d ",n);
 }
 else cout<<endl; | printf("\n");
}

f(3) 3!=0 3%2!=0


            n%@==0
f(3)	3	Nu	 	 f(2)	 3
f(2)	2	Da	2	 f(1)	 2
f(1)	1	Nu	–	 f(0)	 1
f(0)	0	------------	–	–
afisare
2
1 2 3


 3. Pe prima linie a fişierului text BAC.TXT se află o valoare naturală n (1<n≤50), iar pe a doua
linie n numere naturale cu maximum 4 cifre fiecare, despărţite prin câte un spaţiu. În şirul
numerelor de pe a doua linie a fişierului există cel pzâin două numere pătrate perfecte.
Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran
expresia aritmetică reprezentând suma numerelor de pe a doua linie a fişierului care au
proprietatea că sunt pătrate perfecte, cu simbolul + între ele şi, după un semn =, valoarea
acestei sume, ca în exemplu. Termenii sumei afişate se pot afla în orice ordine.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut
5
9 5 36 9 8
atunci pe ecran se poate afişa:
9+9+36=54 sau 9+36+9=54 sau 36+9+9=54 (10p.)
*/
void rezolvare5(){
    ifstream f("BAC.TXT");
    int n,x,s=0,i;
    f>>n;

    for(i=1;i<=n;i++)
    {
        f>>x;
        int r = sqrt(x);
        if(r*r==x)
        {
            if(s!=0) cout<<"+";
            cout<<x;
            s = s + x;
        }
    }

    cout<<"="<<s;
}






#endif // varianta8FULL.h
