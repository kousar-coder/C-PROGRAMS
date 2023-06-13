#include<stdio.h>
#include<stdlib.h>

int main() {
    char a, b, c, d, e;
    int prize = 0;

    printf("\nThe term Computer is derived from__________?\nA. Latin\nB. German\nC. French\nD. Arabic");
    scanf(" %c", &a);
     if (a == 'A') {
        prize += 10000;
    }
    else {
        printf("You are out of the game");
        exit(0);
    }
    printf("\nWho is the father of Computer?\nA. Allen Turing\nB. Charles Babbage\nC. Simur Cray\nD. Augusta Adaming");
    scanf(" %c", &b);
     if (b == 'B') {
        prize += 10000;
    }
    else {
        prize -= 5000;
    }
    printf("\nThe basic operations performed by a computer are__________?\nA. Arithmetic operation\nB. Logical operation\nC. Storage and relative\nD. All the above");
    scanf(" %c", &c);
     if (c == 'D') {
        prize += 10000;
    }
    else {
        prize -= 5000;
    }
   
       if (prize == 0) {
        printf("You are out of the game");
        exit(0);
    }
    else {
    	 printf("\nWho is the father of Internet ?\nA. Chares Babbage\nB. Vint Cerf\nC. Denis Riche\nD. Martin Cooper");
         scanf(" %c", &d);
        if (d == 'B') {
            prize += 10000;
        }
        else {
            prize -= 5000;
        }
       
	    if (prize == 0) {
            printf("You are out of the game");
            exit(0);
        }
        else {
        	 printf("\nWWW stands for___________?\nA. World Whole Web\nB. Wide World Web\nC. Web World Wide\nD. World Wide Web");
             scanf(" %c", &e);

            if (e == 'D') {
                prize += 10000;
            }
            else {
                prize -= 5000;
            }
        }

        printf("Your total prize = %d", prize);
    }

    return 0;
}

