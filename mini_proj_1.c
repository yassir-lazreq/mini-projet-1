# include <stdio.h>

int main(){
    printf("veuillez saisire les note de 5 matier : \n");
    int n1,n2,n3,n4,n5;
    printf("matier 1 : ");
    scanf("%d",&n1);
    printf("matier 2 : ");
    scanf("%d",&n2);
    printf("matier 3 : ");
    scanf("%d",&n3);
    printf("matier 4 : ");
    scanf("%d",&n4);
    printf("matier 5 : ");
    scanf("%d",&n5);
    int total = n1+n2+n3+n4+n5;
    float moyenne =(float)total/5;
    int max = 0;
    int min = n1;
    if (max < n1)
    {
        max = n1;
    }else if (max < n2)
    {
        max = n2;
    }
    else if (max < n3)
    {
        max = n3;
    }
    else if (max < n4)
    {
        max = n4;
    }
    else if (max < n5)
    {
        max = n5;
    }
    if (min > n1)
    {
        min = n1;
    }else if (min > n2)
    {
        min = n2;
    }
    else if (min > n3)
    {
        min = n3;
    }
    else if (min > n4)
    {
        min = n4;
    }
    else if (min > n5)
    {
        min = n5;
    }
    char mention;
    if (moyenne >= 90)
    {
        mention = 'A';
    }else if (80 < moyenne && moyenne > 89)
    {
        mention ='B';
    }
    else if (70 < moyenne && moyenne > 79)
    {
        mention ='C';
    }
    else if (60 <= moyenne && moyenne > 69)
    {
        mention ='D';
    }
    else if (moyenne > 60)
    {
        mention ='F';
    }
    printf(" la note de la matier 1 : %d \n",n1 );
    printf(" la note de la matier 2 : %d \n",n2);
    printf(" la note de la matier 3 : %d \n",n3);
    printf(" la note de la matier 4 : %d \n",n4);
    printf(" la note de la matier 5 : %d \n",n5);
    printf("le total des note est : %d \n",total);
    printf("la moyenne des note est : %d \n",moyenne);
    printf("la plus haute note est : %d \n",max);
    printf("la plus basse note est : %d \n",min);
    printf("la mention globale est : %c \n",mention);
    if (moyenne >= 50)
    {
        printf("l'etudiant a reussi");
    }
    else
    {
        printf("l'etudiant a echoue");
    }
}