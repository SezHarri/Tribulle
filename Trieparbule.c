/***************************************Le Tri a bulle***************************************/
#include <stdio.h>

int main ()
{
    int tab [5], SIZE, i, j, tmp ;

    //afficher les element du tableau

    for (i = 0 ; i < SIZE ; ++i)
    {
        printf(" Tab[%d]: ", i+1) ;
        scanf("%d", &tab[i]) ;
    }

    for (i = 0 ; i < SIZE-1 ; i++)
    {
        for (j = 0 ; j < SIZE-i-1 ; j++)
        {
            if (tab[j] > tab[j+1])
              {
                tab[j] = tab[j+1] ;
                tab[j+1] = tmp ;
              }
        }
    }

    printf("\n-------le tableau trier par ordre croissant-------") ;

    //afficher les element du tableau trier

    for (i = 0 ; i < SIZE ; ++i)
    {
        printf(" %d ", tab[i]) ;
    }

    return 0 ;

}

