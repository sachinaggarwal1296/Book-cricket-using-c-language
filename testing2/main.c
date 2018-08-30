#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    while(1){







    int start;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /         Welcome                / /   |\n|             /            To                  / /    |\n|            /            Book                / /     |\n|           /           Cricket              / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");


    fflush(stdin);
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /         Maximize Window        / /   |\n|             /      For better view           / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");



    fflush(stdin);
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /          1 Play                / /   |\n|             /                                / /    |\n|            /           2 Help               / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
    scanf("%d",&start);
system("cls");









if(start==1){
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /    1. For single player mode   / /   |\n|             /                                / /    |\n|            /     2. For two player mode     / /     |\n|           /                                / /      |\n|          /           Your choice          / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");

int choice;
scanf("%d",&choice);

    int review_decision=0,mode=0,review=0;
    int loop=0,highscore=200,toss=0,total_balls=60;
    int batting,players=8,run_to_be_made=0,balls=0,review_no=1,runs=0;
    char input1,input2,name1[20],name2[20];
    float require_runrate,runrate;






        FILE *f;                                       //using file handling to avoid repetition of random function
    f=fopen("loop.txt","r");
   fscanf(f,"%d",&loop);
    fclose(f);


FILE *h;
    h=fopen("highscore.txt","r");
   fscanf(h,"%d",&highscore);
    fclose(h);
if(highscore==0){
    highscore=250;
}

  for(loop=loop+1;loop>=0;loop--){
    batting=rand()%11;
    run_to_be_made=rand()%50+100;
    review_decision=rand()%10;
    toss=rand()%11;
  }
loop=0;










    if(choice==1){                      //For single player mode
system("cls");
players=8;
balls=0;
run_to_be_made=0;
review_no=1;


















while(1){
    system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /         1.For easy mode        / /   |\n|             /                                / /    |\n|            /        2.For normal mode       / /     |\n|           /                                / /      |\n|          /      3.For Difficult mode      / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");

        fflush(stdin);
        scanf("%d",&mode);
if(mode==1){

    run_to_be_made=rand()%50+50;
system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /       You have to score %d     / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",run_to_be_made);
total_balls=60;
break;
}
else if(mode==2){
    run_to_be_made=rand()%50+100;
system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /      You have to score %d     / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",run_to_be_made);
total_balls=80;
break;
}
else if(mode==3){
    run_to_be_made=rand()%50+200;
system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /      You have to score %d     / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",run_to_be_made);

total_balls=100;
break;
}
else{
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /           Wrong input          / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
}
}




printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /       Enter t to open page     / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");












    while(balls<total_balls){                  //Batting options
fflush(stdin);

            scanf("%c",&input1);










      if(input1=='t'){               //For runs calculation
          system("cls");
        balls++;
    batting=rand()%11;
    if(batting>=0&&batting<=3){
        runs=runs+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);

    }
    if(batting==4){
            runs=runs+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);
        printf("It's a Four\n");
    }
    if(batting==5){
            runs=runs+batting;
            balls--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);
        printf("It's a no ball and a Four\n");
    }
    if(batting==6){
            runs=runs+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);
        printf("It's a six\n");
    }
    if(batting==7){
            runs=runs+batting;
            balls--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);
        printf("No ball and a six\n");
    }
    if(batting==8){

        balls--;
        runs++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);
        printf("it's a wide ball\n");
    }
   if(batting==9){
        balls--;
        runs++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);
        printf("it's a no ball\n");
    }
    if(batting==10){
        players--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                   Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,8-players,run_to_be_made-runs,total_balls-balls);
        printf("Player is out\n");
    }










   if(runs>run_to_be_made){                    //To take decision of winning or loosing
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /              You won           / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
   printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
   break;
   }

   if(players==0){
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /              You lost          / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
    printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
    break;
  }

      loop++;                           //To change the value of loop.txt
    FILE *f;
    f=fopen("loop.txt","w");
fprintf(f,"%d",loop);
    fclose(f);




    }












else if(input1=='p'){                     //To display help
        system("cls");
    printf("Instruction \nif 0 comes it means player score 0 runs \nif 1 comes it means player score 1 runs \nif 2 comes it means player score 2 runs");
    printf("\nif 3 comes it means player score 3 runs \nif 4 comes it means player score 4 runs \nif 5 comes it means player score 4 run wit a no ball");
    printf("\nif 6 comes it means player score 6 runs \nif 7 comes it means player score 7 runs with a no bole");
    printf("\nif 8 comes it is a wide ball \nif 9 comes it no ball \nif 10 comes it means player is out\n");
    printf("\nTo see RUNRATE enter r\nFor help enter p\nFor Highscore enter h\n");
            }








    else if(input1=='r'){             // To calculate runrate
        system("cls");
            runrate=(float)(runs/balls);
    require_runrate=(float)(run_to_be_made-runs)/(total_balls-balls);
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   Current Runrate is %.2f      / /     |\n|           /                                / /      |\n|          /   Required Runrate is %.2f     / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",runrate,require_runrate);
    }










    else if(input1=='h'){                   //To display highscore
system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /         Highscore is %d       / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",highscore);
    }










    else {
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /           Wrong input          / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
    }










    if(review_no==1){  //for review of the match
    if (batting==10){
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   You want to take review      / /     |\n|           /         1 Yes                  / /      |\n|          /        2 No                    / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
        scanf("%d",&review);
        if (review==1){
      review_decision=rand()%10;
       if(review_decision>5){
        players++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /      Player is not out         / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
       }
        else{
        review_no++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /        Player is out           / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
    }
    }
    else {
        system("cls");
    }
    }
    }


    }
    }














else if(choice==2){                      //For 2 player mode









players=5;
balls=0;
run_to_be_made=0;
review_no=1;



system("cls");




printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /         Enter your names       / /     |\n|           /     If You win the toss        / /      |\n|          /     You will bat First         / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
    scanf("%s",&name1);
    scanf("%s",&name2);


system("cls");





    if(toss<5){              //For taking toss decision
        printf("Player 1 is %s\n",name1);
    }
    else{
        printf("Player 1 is %s\n",name2);
    }

printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /      First Player 2 enter l    / /     |\n|           /           For balling          / /      |\n|          /      Player 1 enter t          / /       |\n|         /          For batting           / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");












    while(balls<60){       //For batting of player 1
     fflush(stdin);



printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /            Player 2            / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
           scanf("%s",&input2);

system("cls");








         if(input2=='r'){             // To calculate runrate
                system("cls");
            runrate=(float)(run_to_be_made/balls);
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   Current Runrate is %.2f      / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",runrate);
   printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }






    else if(input2=='p'){            //To display help
            system("cls");
    printf("Instruction \nif 0 comes it means player score 0 runs \nif 1 comes it means player score 1 runs \nif 2 comes it means player score 2 runs");
    printf("\nif 3 comes it means player score 3 runs \nif 4 comes it means player score 4 runs \nif 5 comes it means player score 4 run wit a no ball");
    printf("\nif 6 comes it means player score 6 runs \nif 7 comes it means player score 7 runs with a no bole");
    printf("\nif 8 comes it is a wide ball \nif 9 comes it no ball \nif 10 comes it means player is out\n");
    printf("\nTo see RUNRATE enter r\nFor help enter p\nFor Highscore enter h\n");
       printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
            }






            else if(input2=='h'){                //To display highscore
                    system("cls");
                    if(highscore==0){
highscore=250;
}
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /         Highscore is %d       / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",highscore);
   printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }



















system("cls");

printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /            Player 1            / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
            scanf("%s",&input1);









 if(input1=='r'){             // To calculate runrate
        system("cls");
            runrate=(float)(run_to_be_made/balls);
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   Current Runrate is %.2f      / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",runrate);
       printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }









    else if(input1=='p'){                //To display help
            system("cls");
    printf("Instruction \nif 0 comes it means player score 0 runs \nif 1 comes it means player score 1 runs \nif 2 comes it means player score 2 runs");
    printf("\nif 3 comes it means player score 3 runs \nif 4 comes it means player score 4 runs \nif 5 comes it means player score 4 run wit a no ball");
    printf("\nif 6 comes it means player score 6 runs \nif 7 comes it means player score 7 runs with a no bole");
    printf("\nif 8 comes it is a wide ball \nif 9 comes it no ball \nif 10 comes it means player is out\n");
    printf("\nTo see RUNRATE enter r\nFor help enter p\nFor Highscore enter h\n");
              printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
            }







else if(input1=='h'){          //To display highscore
        system("cls");
                         if(highscore==0){
highscore=250;
}
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /         Highscore is %d       / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",highscore);
      printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }













  else  if(input2=='l'&&input1=='t'){       //For runs calculation
          system("cls");
        balls++;
    batting=rand()%11;
    if(batting>=0&&batting<=3){
        run_to_be_made=run_to_be_made+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);

    }
    if(batting==4){
            run_to_be_made=run_to_be_made+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);
        printf("It's a Four\n");
    }
    if(batting==5){
            run_to_be_made=run_to_be_made+batting;
            balls--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);
        printf("It's a no ball and a Four\n");
    }
    if(batting==6){
            run_to_be_made=run_to_be_made+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);
        printf("It's a six\n");
    }
    if(batting==7){
            run_to_be_made=run_to_be_made+batting;
            balls--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);
        printf("No ball and a six\n");
    }
    if(batting==8){

        balls--;
        run_to_be_made++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);
        printf("it's a wide ball\n");
    }
   if(batting==9){
        balls--;
        run_to_be_made++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);
        printf("it's a no ball\n");
    }
    if(batting==10){
        players--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                   Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nNo. of balls remaning %d\n",batting,run_to_be_made,5-players,total_balls-balls);
        printf("Player is out\n");
    }







loop++;
    FILE *f;
    f=fopen("loop.txt","w");
fprintf(f,"%d",loop);
    fclose(f);    }

else {
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /           Wrong input          / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
   printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
}








    if(review_no==1){  //for review of the match
    if (batting==10){
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   You want to take review      / /     |\n|           /         1 Yes                  / /      |\n|          /        2 No                    / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
        scanf("%d",&review);
        if (review==1){
      review_decision=rand()%10;
       if(review_decision>5){
        players++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /      Player is not out         / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
       }
        else{
        review_no++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /        Player is out           / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
    }
    }
    else {
        system("cls");
    }
    }
    }









   if(players==0){                                  //If player 1 players are out then to start Player 2 turn
        system("cls");
    printf("Your turn is over Player 2 Turn To bat\n");
    break;
  }



    }









players=5;
balls=0;
review_no=1;









while(balls<=60){




     fflush(stdin);


printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /            Player 1            / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
           scanf("%s",&input2);

system("cls");










    if(input2=='r'){             // To calculate runrate
            system("cls");
            runrate=(float)(runs/balls);
    require_runrate=(float)(run_to_be_made-runs)/(60-balls);
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   Current Runrate is %.2f      / /     |\n|           /                                / /      |\n|          /   Required Runrate is %.2f     / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",runrate,require_runrate);
      printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }













    else if(input2=='p'){              //To display help
            system("cls");
    printf("Instruction \nif 0 comes it means player score 0 runs \nif 1 comes it means player score 1 runs \nif 2 comes it means player score 2 runs");
    printf("\nif 3 comes it means player score 3 runs \nif 4 comes it means player score 4 runs \nif 5 comes it means player score 4 run wit a no ball");
    printf("\nif 6 comes it means player score 6 runs \nif 7 comes it means player score 7 runs with a no bole");
    printf("\nif 8 comes it is a wide ball \nif 9 comes it no ball \nif 10 comes it means player is out\n");
    printf("\nTo see RUNRATE enter r\nFor help enter p\nFor Highscore enter h\n");
              printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
            }









            else if(input2=='h'){             //TO display highscore
                    system("cls");
                                     if(highscore==0){
highscore=250;
}
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /         Highscore is %d       / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",highscore);
     printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }








system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /            Player 2            / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
            scanf("%s",&input1);









     if(input1=='r'){             // To calculate runrate
            system("cls");
            runrate=(float)(runs/balls);
    require_runrate=(float)(run_to_be_made-runs)/(60-balls);
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   Current Runrate is %.2f      / /     |\n|           /                                / /      |\n|          /   Required Runrate is %.2f     / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",runrate,require_runrate);
     printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }










    else if(input1=='p'){                  //TO display help
            system("cls");
    printf("Instruction \nif 0 comes it means player score 0 runs \nif 1 comes it means player score 1 runs \nif 2 comes it means player score 2 runs");
    printf("\nif 3 comes it means player score 3 runs \nif 4 comes it means player score 4 runs \nif 5 comes it means player score 4 run wit a no ball");
    printf("\nif 6 comes it means player score 6 runs \nif 7 comes it means player score 7 runs with a no bole");
    printf("\nif 8 comes it is a wide ball \nif 9 comes it no ball \nif 10 comes it means player is out\n");
    printf("\nTo see RUNRATE enter r\nFor help enter p\nFor Highscore enter h\n");
             printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
            }











            else if(input1=='h'){            //TO display highscore
                    system("cls");
                                     if(highscore==0){
highscore=250;
}
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /         Highscore is %d       / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n",highscore);
      printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
fflush(stdin);
    }















  else  if(input2=='l'&&input1=='t'){       //For runs calculation
          system("cls");
        balls++;
    batting=rand()%11;
    if(batting>=0&&batting<=3){
        runs=runs+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);

    }
    if(batting==4){
            runs=runs+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);
        printf("It's a Four\n");
    }
    if(batting==5){
            runs=runs+batting;
            balls--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);
        printf("It's a no ball and a Four\n");
    }
    if(batting==6){
            runs=runs+batting;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);
        printf("It's a six\n");
    }
    if(batting==7){
            runs=runs+batting;
            balls--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);
        printf("No ball and a six\n");
    }
    if(batting==8){

        balls--;
        runs++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);
        printf("it's a wide ball\n");
    }
   if(batting==9){
        balls--;
        runs++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                    Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);
        printf("it's a no ball\n");
    }
    if(batting==10){
        players--;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /                                / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                   Page NO. %d  / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\nTotal runs %d-%d\nYou need %d runs to win.\nNo. of balls remaning %d\n",batting,runs,5-players,run_to_be_made-runs,total_balls-balls);
        printf("Player is out\n");
    }










loop++;
    FILE *f;
    f=fopen("loop.txt","w");
fprintf(f,"%d",loop);
    fclose(f);
    }

else {
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /           Wrong input          / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
   printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
}









    if(review_no==1){  //for review of the match
    if (batting==10){
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /   You want to take review      / /     |\n|           /         1 Yes                  / /      |\n|          /        2 No                    / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
        scanf("%d",&review);
        if (review==1){
      review_decision=rand()%10;
       if(review_decision>5){
        players++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /      Player is not out         / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
       }
        else{
        review_no++;
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /        Player is out           / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
    }
    }
    else {
        system("cls");
    }
    }
    }











   if(runs>run_to_be_made){                    //To take decision of winning or loosing
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /              You won           / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
   }

   if(players==0){
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /              You lost          / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
  }






}

}

else {
        system("cls");
printf(" _____________________________________________________\n|                                                     |\n|                 __________________________________  |\n|                /                                / | |\n|               /                                / /  |\n|              /                                / /   |\n|             /                                / /    |\n|            /           Wrong input          / /     |\n|           /                                / /      |\n|          /                                / /       |\n|         /                                / /        |\n|        /                                / /         |\n|       /                                / /          |\n|      /                                / /           |\n|     /                                / /            |\n|    /                                / /             |\n|   /________________________________/ /              |\n|   |________________________________|/               |\n|                                                     |\n|_____________________________________________________|\n");
   printf("             Enter anything to continue               ");
scanf("%d",&start);
system("cls");
    break;
}












if(runs>highscore){                             //To store highscore
FILE *h;
    h=fopen("highscore.txt","w");
   fprintf(h,"%d",runs);
   printf("New Highscore");
    fclose(h);
}
else if(run_to_be_made>highscore){
FILE *h;
    h=fopen("highscore.txt","w");
   fprintf(h,"%d",run_to_be_made);
   printf("New Highscore");
    fclose(h);
}



system("cls");  //To clear the screen
    }












    if(start==2){
    printf("Instruction \nif 0 comes it means player score 0 runs \nif 1 comes it means player score 1 runs \nif 2 comes it means player score 2 runs");
    printf("\nif 3 comes it means player score 3 runs \nif 4 comes it means player score 4 runs \nif 5 comes it means player score 4 run wit a no ball");
    printf("\nif 6 comes it means player score 6 runs \nif 7 comes it means player score 7 runs with a no bole");
    printf("\nif 8 comes it is a wide ball \nif 9 comes it no ball \nif 10 comes it means player is out\n");
    printf("\nTo see RUNRATE enter r\nFor help enter p\nFor Highscore enter h\n\nEnter play to continue\n");
scanf("%d",&start);
}

}
     return 0;
}
