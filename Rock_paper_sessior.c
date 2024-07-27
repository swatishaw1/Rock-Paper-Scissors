#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generatearandumnumber()
{
    srand(time(NULL));
    return rand() %3;
}
int main()
{
    int a,i,scofplayer = 0,n,scofcomputer = 0;
    char *ptr;
    ptr = (char *)malloc(10 * sizeof(char));
    printf("Enter the name of your: ");
    scanf("%s", ptr);
    number:
    printf("Enter how many times you want to play : ");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("Please Enter odd input then we could decide the winner.\n");
        goto number;
    }
    printf("The name of your is: %s \n", ptr);
    printf("\n");
    printf("The score of %s round is: %d\n", ptr,scofplayer);
    printf("The score of computer round is: %d\n", scofcomputer);
    printf("Press \n0.Rock\n1.Paper\n2.Sessiors\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter your input: ");
    label:
        scanf("%d", &a);
        printf("\n");
        printf("The input by the computer is: %d\n",generatearandumnumber());
        generatearandumnumber();
        switch (a)
        {
        case 0:
            if (generatearandumnumber() == 0)
            {
                printf("\nDraw match \n");
                scofplayer = scofplayer + 0;
                scofcomputer = scofcomputer + 0;
            }
            else if (generatearandumnumber() == 1)
            {
                printf("\n Computer wins \n");
                scofplayer = scofplayer + 0;
                scofcomputer = scofcomputer + 1;
            }
            else
            {
                printf("%s wins\n", ptr);
                scofplayer = scofplayer + 1;
                scofcomputer = scofcomputer + 0;
            }
            goto score;
            case 1:
            if (generatearandumnumber() == 0)
            {
                printf("%s wins\n", ptr);
                scofplayer = scofplayer + 1;
                scofcomputer = scofcomputer + 0;
            }
            else if (generatearandumnumber() == 1)
            {
                printf("\nDraw match \n");
                scofplayer = scofplayer + 0;
                scofcomputer = scofcomputer + 0;
            }
            else
            {
                printf("\n Computer wins \n");
                scofplayer = scofplayer + 0;
                scofcomputer = scofcomputer + 1;
            }
            goto score;
            case 2:
            if (generatearandumnumber() == 0)
            {
                printf("\n Computer wins \n");
                scofplayer = scofplayer + 0;
                scofcomputer = scofcomputer + 1;
            }
            else if (generatearandumnumber() == 1)
            {
                printf("%s wins\n", ptr);
                scofplayer = scofplayer + 1;
                scofcomputer = scofcomputer + 0;
            }
            else
            {
                printf("\nDraw match \n");
                scofplayer = scofplayer + 0;
                scofcomputer = scofcomputer + 0;
            }
            goto score;
        default:
            printf("Wrong input\n");
            printf("Give correct input: \n");
            goto label;
        }
        score:
        printf("\n");
        printf("The score of %s after %d round is: %d\n", ptr, i + 1, scofplayer);
        printf("The score of computer after %d round is: %d\n", i + 1, scofcomputer);
        continue;
        printf("\n");
    
    }
    printf("The score of %s round is: %d\n", ptr,scofplayer);
    printf("The score of computer round is: %d\n", scofcomputer);
    printf("\n");
    if (scofplayer>scofcomputer)
    {
        printf("\nThe winner is: %s\n",ptr);
        printf("CONGRATULATIONS ");
    }
    else if (scofplayer < scofcomputer)
    {
        printf("\nThe winner is: computer\n");
    }
    else
    printf("The match is Draw.");
    return 0;
}