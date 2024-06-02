#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 5

char parola [MAX+1];
int i, y, v, c;
int lunghezza;
int main (void){

for(y=0; i<lunghezza; i++){

}
printf("Inserisci una serie di lettere:\n");
scanf ("%s",parola);

lunghezza =((int)strlen(parola)-1);

    for(i=0; i<lunghezza; i++){
        if (isalpha(parola[i])!=0){               
            if (parola[i]=='a'||parola[i]=='e'||parola[i]=='i'||parola[i]=='o'||parola[i]=='u'||parola[i]=='A'||parola[i]=='E'||parola[i]=='I'||parola[i]=='O'||parola[i]=='U') {
                v++;
            } else {
                c++;
                }
            }
    }

printf ("le vocali sono:%d\n",v);
printf("Le consonanti sono:%d\n",c);

    return 0;
}
