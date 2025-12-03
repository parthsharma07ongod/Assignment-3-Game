#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>  // Sleep()

int main() {
    int round;
    double start,end,reaction,best=9999,total=0;

    system("chcp 65001>nul"); //emoji support
    srand(time(NULL));

    printf("F1 Reaction Time Test🚦\n");
    printf("-----------------------\n\n");
    printf("JUMP START krne wale ki back ayegi🙏🏻😡\n\n");
    printf("Press ENTER to start😈");
    
    getchar();

    for (round=1;round<=5;round++){
        system("cls");
        printf("Round %d / 5\n",round);
        printf("Get Ready...\n");

        //random wait 2–5 seconds
        int wait=(rand() % 3000) + 2000;

        printf("\nRed lights:\n");
        printf("🔴 🔴 🔴 🔴 🔴\n\n");

        Sleep(wait);

        system("cls");
        printf("Round %d\n",round);
        printf("🟢🟢🟢Press ENTER Now!\n");

        start=clock();
        getchar();   //user presses ENTER
        end=clock();

        reaction=((end-start) / CLOCKS_PER_SEC)*1000;

        printf("\nYour Reaction Time: %.0f ms\n",reaction);

        // ⭐ 4 reaction categories
        if(reaction<100)
            printf("Jump Start mat kr lala🙏🏻\n");
        else if(reaction<=200)
            printf("TUTUDUDU Max Verstappen!⚡🔥\n");
        else if(reaction<=300)
            printf("Definitely good reflexes tho😏\n");
        else if(reaction<=500)
            printf("Nice reflexes, keep them hidden🤡\n");
        else
            printf("You're cooked ma boi💀\n");

        //Update best & total
        if(reaction>=100){
            if(reaction<best) best=reaction;
                total+=reaction;
        }

        // ⭐ Next-round permission
        printf("\nPress ENTER to go to the next round...");
        getchar();
    }

    //Final results
    system("cls");
    printf("----------- RESULTS -----------\n");
    printf("Fastest Time : %.0f ms⚡\n",best);
    printf("Average Time : %.0f ms🫵🏻😋\n",total / 5);
    printf("\nThanks for playing!🫶🏻💋\n");

    return 0;
}
