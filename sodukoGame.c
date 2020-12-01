#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
void load();
void gotoxy(int x,int y);
void Life(int life);
int main()
{
    load();
    
	system("cls");
    char choise,level;
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
    char ch;
    FILE *fp;
    while(1)
    {
        system("cls");
        int life=3;
        gotoxy(40,10);
        printf("=>  PRESS 1 TO START THE GAME \n\n\t\t\t\t\t=>PRESS 2 FOR HELP\n\n\t\t\t\t\t=> PRESS 3 FOR EXIT\n\n ");
        choise = getch();
        switch(choise)
        {
        case '1':
            while(life!=0)
            {
                system("cls");
                Life(life);
                gotoxy(40,10);
                printf(" Enter the level number (1 to 9)\n\n\t\t\t\t\tfor quite game press 0\n\n");
                level =getch();
                switch(level)
                {
                case '1':
                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level1.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);
                    gotoxy(28,10);
                    scanf("%d",&a);
                    gotoxy(39,14);
                    scanf("%d",&b);
                    gotoxy(39,20);
                    scanf("%d",&c);
                    gotoxy(1,24);
                    if(a==7&&b==5&&c==7)
                        printf("\n\n\n\n.........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n\n\n\n....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;
              case '2':
          system("cls");
          load();
          system("cls");
                Life(life);
             fp=fopen("Level2.txt","r");
            while((ch=fgetc(fp))!=EOF)
            printf("%c",ch);
              fclose(fp);

           gotoxy(28,8);
           scanf("%d",&a);
           gotoxy(28,14);
           scanf("%d",&b);
           gotoxy(28,20);
           scanf("%d",&c);
           gotoxy(44,20);
           scanf("%d",&d);
           gotoxy(1,24);
           if(a==2&&b==7&&c==9&&d==3)
               printf("\n\n.........................Right answer..............\n\n");
               else{
                    printf("\a\n\n...................Wrong answer..............\n\n");
                    --life;
               }
               printf("\t\t\tPress any key to continue\n");
               getch();
            break;


                case '3':
                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level3.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);

                    gotoxy(28,6);
                    scanf("%d",&a);
                    gotoxy(28,10);
                    scanf("%d",&b);
                    gotoxy(55,12);
                    scanf("%d",&c);
                    gotoxy(28,16);
                    scanf("%d",&d);
                    gotoxy(55,16);
                    scanf("%d",&e);
                    gotoxy(28,22);
                    scanf("%d",&f);
                    gotoxy(1,24);
                    if(a==3&&b==1&&c==2&&d==2&&e==3&&f==6)
                        printf("\n\n.........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;
                case '4':

                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level4.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);
                    gotoxy(19,6);
                    scanf("%d",&a);
                    gotoxy(44,6);
                    scanf("%d",&b);
                    gotoxy(59,6);
                    scanf("%d",&c);
                    gotoxy(34,10);
                    scanf("%d",&d);
                    gotoxy(59,10);
                    scanf("%d",&e);
                    gotoxy(28,14);
                    scanf("%d",&f);
                    gotoxy(28,16);
                    scanf("%d",&g);
                    gotoxy(50,16);
                    scanf("%d",&h);
                    gotoxy(50,22);
                    scanf("%d",&i);

                    gotoxy(1,24);


                    if(a==4&&b==1&&c==8&&d==9&&e==2&&f==3&&g==2&&h==9&&i==8)
                        printf("\n\n...........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n.....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;
                case '5':
                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level5.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);
                    gotoxy(28,8);
                    scanf("%d",&a);
                    gotoxy(39,8);
                    scanf("%d",&b);
                    gotoxy(55,8);
                    scanf("%d",&c);
                    gotoxy(50,10);
                    scanf("%d",&d);
                    gotoxy(28,12);
                    scanf("%d",&e);
                    gotoxy(50,12);
                    scanf("%d",&f);
                    gotoxy(28,16);
                    scanf("%d",&g);
                    gotoxy(44,16);
                    scanf("%d",&h);
                    gotoxy(60,16);
                    scanf("%d",&i);
                    gotoxy(28,20);
                    scanf("%d",&j);
                    gotoxy(1,24);
                    if(a==3&&b==1&&c==8&&d==2&&e==5&&f==9&&g==9&&h==1&&i==8&&j==4)
                        printf("\n\n...........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n.....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;

                case '6':
                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level6.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);
                    gotoxy(39,6);
                    scanf("%d",&a);
                    gotoxy(28,8);
                    scanf("%d",&b);
                    gotoxy(50,8);
                    scanf("%d",&c);
                    gotoxy(23,10);
                    scanf("%d",&d);
                    gotoxy(44,10);
                    scanf("%d",&e);
                    gotoxy(34,12);
                    scanf("%d",&f);
                    gotoxy(23,14);
                    scanf("%d",&g);
                    gotoxy(39,20);
                    scanf("%d",&h);
                    gotoxy(55,20);
                    scanf("%d",&i);
                    gotoxy(28,22 );
                    scanf("%d",&j);
                    gotoxy(50,24);
                    if(a==4&&b==5&&c==8&&d==7&&e==8&&f==8&&g==3&&h==8&&i==5&&j==8)
                        printf("\n\n...........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n.....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;

                case '7':
                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level7.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);
                    gotoxy(23,6);
                    scanf("%d",&a);
                    gotoxy(39,8);
                    scanf("%d",&b);
                    gotoxy(55,8);
                    scanf("%d",&c);
                    gotoxy(28,10);
                    scanf("%d",&d);
                    gotoxy(23,12);
                    scanf("%d",&e);
                    gotoxy(28,14);
                    scanf("%d",&f);
                    gotoxy(55,14);
                    scanf("%d",&g);
                    gotoxy(34,16);
                    scanf("%d",&h);
                    gotoxy(23,18);
                    scanf("%d",&i);
                    gotoxy(60,20 );
                    scanf("%d",&j);
                    gotoxy(18,22);
                    scanf("%d",&k);
                    gotoxy(50,22 );
                    scanf("%d",&l);
                    gotoxy(50,24);
                    if(a==4&&b==5&&c==2&&d==5&&e==7&&f==3&&g==4&&h==7&&i==5&&j==9&&k==7&&l==3)
                        printf("\n\n...........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n.....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;

                case '8':
                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level8.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);
                    gotoxy(39,6);
                    scanf("%d",&a);
                    gotoxy(28,8);
                    scanf("%d",&b);
                    gotoxy(50,8);
                    scanf("%d",&c);
                    gotoxy(23,10);
                    scanf("%d",&d);
                    gotoxy(44,10);
                    scanf("%d",&e);
                    gotoxy(34,12);
                    scanf("%d",&f);
                    gotoxy(60,12);
                    scanf("%d",&g);
                    gotoxy(23,14);
                    scanf("%d",&h);
                    gotoxy(44,14);
                    scanf("%d",&i);
                    gotoxy(34,16 );
                    scanf("%d",&j);
                    gotoxy(55,16);
                    scanf("%d",&k);
                    gotoxy(44,18 );
                    scanf("%d",&l);
                    gotoxy(18,20 );
                    scanf("%d",&m);
                    gotoxy(39,20);
                    scanf("%d",&n);
                    gotoxy(55,20 );
                    scanf("%d",&o);


                    gotoxy(1,24);
                    if(a==1&&b==4&&c==9&&d==6&&e==4&&f==1&&g==9&&h==2&&i==5&&j==4&&k==6&&l==7&&m==5&&n==8&&o==4)
                        printf("\n\n...........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n.....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;

                case '9':
                    system("cls");
                    load();
                    system("cls");
                    Life(life);
                    fp=fopen("Level9.txt","r");
                    while((ch=fgetc(fp))!=EOF)
                        printf("%c",ch);
                    fclose(fp);
                    gotoxy(23,6);
                    scanf("%d",&a);
                    gotoxy(39,8);
                    scanf("%d",&b);
                    gotoxy(55,8);
                    scanf("%d",&c);
                    gotoxy(28,10);
                    scanf("%d",&d);
                    gotoxy(23,12);
                    scanf("%d",&e);
                    gotoxy(28,14);
                    scanf("%d",&f);
                    gotoxy(39,14);
                    scanf("%d",&g);
                    gotoxy(55,14);
                    scanf("%d",&h);
                    gotoxy(34,16);
                    scanf("%d",&i);
                    gotoxy(23,18 );
                    scanf("%d",&j);
                    gotoxy(44,20);
                    scanf("%d",&k);
                    gotoxy(60,20 );
                    scanf("%d",&l);
                    gotoxy(18,22 );
                    scanf("%d",&m);
                    gotoxy(34,22);
                    scanf("%d",&n);
                    gotoxy(50,22 );
                    scanf("%d",&o);
                    gotoxy(1,24);
                    if(a==2&&b==8&&c==2&&d==6&&e==7&&f==1&&g==2&&h==6&&i==4&&j==8&&k==8&&l==1&&m==1&&n==5&&o==8)
                        printf("\n\n...........................Right answer..............\n\n");
                    else
                    {
                        printf("\a\n\n.....................Wrong answer..............\n\n");
                        --life;
                    }
                    printf("\t\t\tPress any key to continue\n");
                    getch();
                    break;

                case '0':
                    exit(1);

                default :
                    printf("              There is no level number of this number \n    ");
                    break;
                }
            }
            break;
        case '2':
            system("cls");
            gotoxy(30,10);
            printf("\n\t\t***********************************************************************************************************\n\n\t\tTHE RULES FOR PLAYING THIS GAME:\n\n\n");
            printf("\t\tSTEP 1: YOU HAVE TO USE THE NUMBER 1 TO 9 IN EVERY ROW AND COLUMN\n\t      BUT NO REPEAT OF A NUMBER\n\n\t\tSTEP 2: IN EVERY 3X3 BOXES YOU HAVE TO USE\n\t\t   1 TO 9 NUMBERS ONCE\n\n");
            printf("\t\t************************************************************************************************************\n\n");
            printf("\n\t\t\t\t....Press any key to go to main Menu.......");
            getch();
            break;
        case '3':
            exit(1);
        default:
            printf("\n\nYOU HAVE CHOSEN WRONG  !!!\n\nPRESS 1 , 2 OR 3\n\n");
        }
    }
    getch();
    return 0;
}
void load()
{
    int row,col,r,c,q;
    gotoxy(45,13);
    printf("        loading...");

    for(r=1; r<=25; r++)
    {
        for(q=0; q<=100000000; q++); //to display the character slowly
        gotoxy(36+r,15);
        printf("%c",178);
        gotoxy(70,15);
        printf("%d",4*r);
    }
}
 void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void Life(int life)
{
    int i;
    gotoxy(80,2);
    printf("Life:");
    for(i=0; i<life; i++)
    {
        printf(" 0 ");
    }
}
