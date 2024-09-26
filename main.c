#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>
int main()
{

srand(time(NULL));
int random_number = rand() % 100 + 1;
int utulisateur;
int u = 0;

while(u==0){
        printf("Choisissez un nombre:\n");
        scanf("%d", &utulisateur);
        if (utulisateur<random_number){
                printf("C'est un nombre plus elevé\n");
                u=0;}
        else if (utulisateur>random_number){
                printf("C'est un nombre moins elevé!\n");
                u=0;}
        else {
                printf("Vous avez trouvez\n");
                u=1;}}
exit(0);
}
