#include<stdio.h>
#include<string.h>
int main()
{
    /*Initial Stage(Prologue)*/
    char e;
    char s[15];
    char n[20];
    char a;
    printf("Dungeons & Dragons(Demo)\n\n");
    printf("Pick any Race\n\n");
    printf("H - Human   Rouge       Nicknamed Shadow\n");
    printf("E - Elf     Mage        Nicknamed Wretch \n");
    printf("O - Orc     Melee       Nicknamed Berserk\n");
    printf("D - Dwarf   Archer      Nicknamed EagleEye\n\n");
    scanf("%c", &a);
    /*Human*/
    if (a=='H' || a=='h')
    {

       printf("\nYour Sex?\n\n");
       scanf("%s", &s);
       printf("\nYour name?(As Small as possible)\n\n");
       scanf("%s", &n);
       printf("\nYou Are a %s human called %s\n\n", s,n);
       printf("      Welcome to \n\"Dungeons and Dragons\"\n\n\n\n");
       printf("Year 3000 B.C. A time of magic and mystery,a time where the world was still beilived to be flat.\n\n");
       printf("You are a royal knight,you swore your royality to your king and to the well-bieng of your people.As all the other knights did.\n");
       printf("And now the time has finally come to prove your royality and your worth.\n\n\n\n");
       printf("\"%s!! that's enough ale for one night, I won't have you sleeping the whole way tomorrow\" says the tough looking orc and your captain.\n\n", n);
       printf("A - \"Oh fuck off!, that's precisely why I'm drinking like hell\"\n");
       printf("B - You agree and stop drinking\n");
       printf("C - You ignore him completely\n\n");
       scanf("%s", &e);
       if(e=='A' || e=='a' || e=='B' || e=='b' || e=='C' || e=='c')
       {
           printf("\n\nThe cute elf girl in the back\(Reading some spell book\) says\"Nobody can stop shadow from his drinks, better leave him be cap'n.\"\n");
           printf("\"Who'd have thought!! that bitch taking my side\" you think to yourself.");
       }



    }


    /*Elf*/
    else if (a=='E' || a=='e')
    {
        printf("\nYou are a Elf");
        printf("\nElves are a beatiful race.You're");
    }
    /*Orc*/
    else if (a=='O' || a=='o')
    {
        printf("\nYou are a Orc");
        printf("\nSorry! not done yet.");
    }
    /*Dwarf*/
    else if (a=='D' || a=='d')
    {
        printf("\nYou are a Dwarf");
        printf("\nSorry! not done yet.");
    }
    else
        printf("\nInvalid Race");

}
