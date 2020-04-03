/*
    .....:::Bismillahir rahmanir rahim:::......
*/




#include<bits/stdc++.h>

using namespace std;

int main(){
    printf("\n\t\t\t\t\t==== WELCOME TO TIC TOK TOE ====");
    printf("\n\n\t\t\t\t1st player\t\t\t      2nd player");
    printf("\n\n\n\t\t|--------------------------------------------------------------------------------|\n");
    printf("\t\t|--------------------------------------------------------------------------------|\n");
    int k=0,result=20;
    printf("\n\t\t\t\t\t====PRESS ANY KEY TO CONTINUE====");
    getchar();
    system("clear");
    printf("\n\n\n");
    char keys[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int n[9]={155,12,13,14,15,16,17,18,19};


    for(int i=0;i<3;i++){
        printf("\t\t\t\t\t\t");
        for(int j=0;j<3;j++){
            if(j!=2)printf("     |");

        }
        printf("\n");
        printf("\t\t\t\t\t\t");
        for(int j=0;j<3;j++){

            printf("  %c  ",keys[k]);
            k++;
            if(j!=3-1) printf("|");
        }

        printf("\n");
        printf("\t\t\t\t\t\t");

        if(i!=2){
            for(int j=0;j<3;j++){
                printf("_____");
                if(j!=2)printf("|");
            }

        }
        printf("\n");

    }

    k=0;
    printf("\n\n\n\n\n\n\n");
    int flag=0;
    int loop=0;


    for(int ll=0; ; ll++){
        if(loop==9)break;



        reaz:
        flag=0;
        if(ll%2==0)printf("\t\t\t1st player : ");
        else printf("\t\t\t\t\t\t\t\t\t2nd player : ");
        scanf("%d",&n[ll]);


        for(int ck=0;ck<9;ck++){
            if(n[ll]==n[ck] && ll!=ck){
                printf("\t\t\aAlready given...!\n\n");
                goto reaz;
            }
            if(n[ll]==ck+1) flag=1;
        }

        if(flag==0){
            printf("\t\t\aPlease press 1 to 9\n\n");
            goto reaz;
        }
        system("clear");

        printf("\n\n\n");


        if(ll%2==0)keys[n[ll]-1]='X';
        else keys[n[ll]-1]='O';


        for(int i=0;i<3;i++){
            printf("\t\t\t\t\t\t");


            for(int j=0;j<3;j++){
                if(j!=2)printf("     |");

            }
            printf("\n");
            printf("\t\t\t\t\t\t");
            for(int j=0;j<3;j++){

                printf("  %c  ",keys[k]);
                k++;
                if(j!=3-1) printf("|");
            }

            printf("\n");
            printf("\t\t\t\t\t\t");

            if(i!=2){
                for(int j=0;j<3;j++){
                    printf("_____");
                    if(j!=2)printf("|");
                }

            }
            printf("\n");
        }
        k=0;

        if((keys[0]==keys[1] && keys[1]==keys[2] && keys[2]!=' ') || (keys[3]==keys[4] && keys[3]==keys[5] && keys[5]!=' ') || (keys[6]==keys[7] && keys[6]==keys[8] && keys[6]!=' ')){
            result=ll%2;
            break;
        }


        else if((keys[0]==keys[3] && keys[0]==keys[6] && keys[6]!=' ') || (keys[1]==keys[4] && keys[1]==keys[7] && keys[1]!=' ') || (keys[2]==keys[5] && keys[2]==keys[8] && keys[2]!=' ')){
            result=ll%2;
            break;
        }

        else if((keys[0]==keys[4] && keys[0]==keys[8] && keys[8]!=' ') || (keys[2]==keys[4] && keys[2]==keys[6] && keys[6]!=' ')){
            result=ll%2;
            break;
        }



        printf("\n\n\n\n\n\n\n");

        loop++;

    }

    if(result==0 || result==1){
        printf("\n\n\n\t\t\t\t       \a====WINNER WINNER CHICKEN DINNER====");
        printf("\n\n\n\t\t\t\t\t     ");
        if(result==1)printf("winner is 2nd player....!!");
        else printf("winner is 1st player...!!");
    }
    else{
        printf("\n\n\n\t\t\t\t       ");
        printf("\a=========THE MATCH  IS DRAW=========");
    }
    printf("\n\n\n\n");

    //getch();
    return 0;
}
