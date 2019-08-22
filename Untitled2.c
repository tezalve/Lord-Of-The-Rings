#include<stdio.h>
int main()
{
    /*Initial Stage(Prologue)*/
    char s,a;
    printf("Dungeons & Dragons\n\n");
    printf("Pick any Race\n\n");
    printf("H - Human\n");
    printf("E - Elf\n");
    printf("O - Orc\n");
    printf("D - Dwarf\n\n");
    scanf("%s", &s);
    /*Human*/
    if (s=='H' || s=='h')
    {


        printf("\nYou are a Human\n");
        printf("\n You Suddenly wake up hearing a horrifying roar.Afraid to open your eyes, you think to yourself \"Do I Open My Eyes!.\"");
        printf("\n\nA - You don't open your eyes, you just lie there for the rest of your life.");
        printf("\nB - You open your eyes.");
        printf("\nC - You start jerking off.\( Warning 18+ Content \)");
        printf("\nD - You don't like this programmer.\(Be Aware!\)\n\n");
        scanf("%s", &s);
        if (s=='A' || s=='a')
            printf("\nYou fall back asleep after some time and your adventure ends there");
        /*Scene 1*/
        else if (s=='B' || s=='b')
        {

            printf("\n As you're opening your eyes you feel a slash on the right side of your face.In extreme pain you lose your consciousness");
            printf("\n\n You Wake up again in a dark place. You realize your right eye sight is gone, and then you see something coming towards you");
            printf("\n What The fudge is that!!!!");
            printf(" What do you see?");
            printf("\nA - A Dragon?");
            printf("\nB - A Giant Eagle?");
            printf("\nC - A Cat?");
            printf("\nD - A Tiger?");
            printf("\nE - A Beautiful Women?");
            printf("\nF - Our Teacher?");
            printf("\nG - Clown Or A Zombie Maybe?\(Lol Taif\) ");
            printf("\nH - You See Nothing");
            printf("\nI - None Of These\n\n");
            scanf("%s", &s);
            if (s=='F' || s=='f')
                printf("\nHe looks at you and asks you why are you sleeping in his class, you look around you and see everyone staring at you smirking.\nHe asks you again \"Why are you sleeping in my class?\" \nYou awkwardly ans \"Sorry sir, didn't get much sleep last night\" and he says with a scary smile  \"How is that any of my business?\"");

            else if (s=='A' || s=='a' || s=='B' || s=='b' || s=='D' || s=='d' || s=='E' || s=='e' || s=='G' || s=='g' || s=='H' || s=='h' || s=='I' || s=='i')
            {
                printf("\nWrong.It stops in front of you,so it was a cat!, and a large one at that!!");
                printf("\nYou see some blood on it's palm, maybe it was the one that injured you?");
                printf("\nWhat do you think?");
                printf("\nY - It is the culprit");
                printf("\nN - It's not the culprit\n\n");
                scanf("%s", &s);
                if (s=='N' || s=='n')
                printf("\nActually it is.");
                else if (s=='Y' || s=='y')
                printf("\nYou guessed correct");


            }


        }
        /*Extra Scene*/
        else if (s=='C' || s=='c')
        {

            printf("\nYou're so scared that you can't even get a erection and suddenly you feel your penis being ripped of along with your balls.\n");
            printf("\nWhat do you do next?\n\n");
            printf("A - You Just want to die,you take your knife and cut your throat\n");
            printf("B - You think \"So what I'll just change myself into a girl\" as you're gonna get a pair of boobies in your own body!\n");
            printf("C - You think \"I'm a queer so it hardly matters\"\n\n");
            scanf("%s", &s);
            if (s=='A' || s=='a')
                printf("\nUmm..... do I have to say what happens?");
            else if (s=='B' || s=='b')
                printf("\nToo bad you're poor to make such changes,so you live a miserable life until you kill yourself");
            else if (s=='C' || s=='c')
                printf("\nIt does'nt really matter what you think, after ripping off your dick it brutalizes you");

        }
        else if (s=='D' || s=='d')
            printf("\nWell, Fuck off then!");


    }

    /*Elf*/
    else if (s=='E' || s=='e')
    {


        printf("\nYou are a Elf");
        printf("\nSorry! not done yet.");
    }
    /*Orc*/
    else if (s=='O' || s=='o')
    {


        printf("\nYou are a Orc");
        printf("\nSorry! not done yet.");
    }
    /*Dwarf*/
    else if (s=='D' || s=='d')
    {


        printf("\nYou are a Dwarf");
        printf("\nSorry! not done yet.");
    }
    else
        printf("\nInvalid Race");

}
