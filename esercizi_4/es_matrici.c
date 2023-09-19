#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define R 10
#define C 10

int menu();
void casualiMat (int m [ ] [ C ]);
/*Si avvalori tutta la matrice con numeri casuali compresi fra 10 e 20*/
void stampaMat (int m [ ] [ C ]);
/*Stampi sul monitor tutta la matrice per righe (si vada a capo per ogni nuova riga)*/
void dispari(int m [ ] [ C ], int y);
/*Si sostituisca ogni elemento dispari presente nella matrice con il valore Y (2° parametro)*/
int pariMat(int m [ ] [ C ]);
/*La funzione restituisce 1 se la matrice contiene solo numeri pari, zero altrimenti*/
int conta (int m [ ] [ C ], int k, int x);
/*Si contino quanti elementi della colonna k (2° parametro) sono divisori di x (3° parametro).
Nel main si richiami la funzione per tutte le colonne della matrice*/
void ScambiaMat (int m [ ] [ C ], int x);
/*Si scambi il valore più grande presente nella riga di indice x (2° parametro) con il valore più piccolo
presente nella stessa riga
Nel main si chiami la funzione per tutte le righe della matrice*/
void Diagonale(int m [ ] [ C ]);
/*Si mettano degli zero negli elementi corrispondenti alla diagonale principale e 1 negli elementi
corrispondenti alla diagonale secondaria*/
void PitagoricaMat(int m [ ] [ C ]);
/*Nella prima riga (indice zero) si mettano i multipli di 1; nella 2° riga (indice 1) i multipli di 2 e così
via.*/

int main()
{
    int m[R][C],r=0,y,k,x;
    do
    {
        r=menu();
        switch(r)
        {
            case 0: printf("Fine programma");
                    break;
            case 1:casualiMat(m);
                    break;
            case 2: stampaMat(m);
                    break;
            case 3: printf("inserisci un numero il quale verro sostituito della matrice a tutti i numeri dispari\n");
                    scanf("%d",&y);
                    dispari(m,y);
                    break;
            case 4: r=pariMat(m);
                    printf("%d\n",r);
                    break;
            case 5: printf("inserisci il numero della colonna che si vuole controllare\n");
                    scanf("%d",&k);
                    printf("inserisci il numero che verra usato per conrollare quanti numeri sono divisori di esso\n");
                    scanf("%d",&x);
                    r=conta(m,k,x);
                    printf("sono stati trovati %d divisori di %d",r,x);
                    break;
            case 6: printf("inserisci un numero\n");
                    scanf("%d",&x);
                    ScambiaMat(m,x);
                    break;
            case 7: Diagonale(m);
                break;
            default: printf("hai inserito un numero sbagliato");    
        }
    }   
    while(r!=0);
}

int menu()
{
    int risp;
    printf("\n\n\ndigita 0 se vuoi uscire dal programma\n");
    printf("digita 1 per caricare randomicamente la matrice\n");
    printf("digita 2 per stampare la matrice\n");
    printf("digita 3 per scambiare tutti i numei dispari\n");
    printf("digita 4 per trovare se nella matrice ci sono solo numeri pari o dispari\n");
    printf("digita 5 per controllare quali numeri sono divisibili per un numero inserito dall'utente\n");
    printf("digita 6 per scambiare il numero più grande del vettore con il più piccolo\n");
    printf("digita 7 per scambiare le due diagonali con 1 e 0\n");
    scanf("%d",&risp);
    return risp;
}

void casualiMat(int m[][C])
{
    int i,j;
    for (i = 0; i<R; i++)
    {
        for(j=0;j<C;j++)
        {
            m[i][j] = rand() % 10 + 11;
        }
    }
}

void stampaMat (int m [ ] [ C ])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}

void dispari(int m [ ] [ C ], int y)
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if(m[i][j]%2!=0)
            {
                m[i][j]=y;
            }
        }
    }
}

int pariMat(int m [ ] [ C ])
{
   int i,j;
   for(i=0;i<R;i++)
   {
        for(j=0;j<C;j++)
        {
            if(m[i][j]%2==1)
            {
                return 0;
            }
        }

   }
   return 1; 
}

int conta (int m [ ] [ C ], int k, int x)
{
    int i,j,cont=0;
    for(i=0;i<R;i++)
    {
        if(m[i][k]%x==0)
        {
            cont++;
        }
    }
    return cont;
}

void ScambiaMat (int m [ ] [ C ], int x)
{
    int max = 0, min = 0, y;

    for(int j = 0; j<C; j++)
    {
        if(m[x][j]>m[x][max]) max = j;
        if(m[x][j]<m[x][min]) min = j;
    }

    printf("%d\t%d\n\n", max, min);
    y = m[x][max];
    m[x][max] = m[x][min];
    m[x][min] = y;
}

void Diagonale(int m [ ] [ C ])
{
    for(int i=0, j=C-1; i<C; i++, j--)
    {
        m[i][i] = 0;
        m[j][i] = 1;
    }
}