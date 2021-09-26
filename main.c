#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int main() {

   int enx;
   int ftype;
   char namefile[100];
   //Unused Content//
   int cfile = 1;
   int mfile = 2;
   int bin = 3;
   //Will be added Later//

   printf("                                Welcome to the MSM Converter! Please input your option. ");
   printf("\n1 - Extract Files\n2 - Compress Files\n3 - About & FAQ\n\nChoice: ");
   scanf("%d", & enx);

   if (enx == 1) {
      printf("\n1 - Menu\n2 - Tour\n\nWhat file are you trying to compress: ");
      scanf("%d", & ftype);

      if (ftype == 1) {
         if (access("Menu.mdl", F_OK) != -1) {
            printf("\nPlease wait your file is being compressed\n");
            system("n Menu.mdl -x");
            printf("\nDone! Your file has been compressed to a usable state.\n");
            sleep(100);
         } else {
            printf("\nSomething went wrong, make sure your file is named \"Menu.mdl\"");
            sleep(100);
         }
      } else if (ftype == 2) {
         if (access("Tour.mdl", F_OK) != -1) {
            printf("\nPlease wait your file is being compressed\n");
            system("n Tour.mdl -x");
            printf("\nDone! Your file has been compressed to a usable state.\n");
            sleep(100);
         } else {
            printf("\nSomething went wrong, make sure your file is named \"Tour.mdl\"");
            sleep(100);
         }
      } else if (ftype == 3) {
         printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHi you found my secret! Either that or stop being a stalker and looking at this messy source code.");
         sleep(100);
      } else {
         printf("You did not enter 1 or 2. Please exit and try again");
         sleep(100);
      }
   } else if (enx == 2) {

      printf("\n1 - Menu\n2 - Tour\n\nWhat file are you trying to extract: ");
      scanf("%d", & ftype);

      if (ftype == 1) {
         if (access("Menu_DECOMP.bin", F_OK) != -1) {
            printf("\nPlease wait your file is being compressed\n");
            system("n Menu_DECOMP.bin -lh -o Menu.mdl\n");
            printf("\nDone! Your file has been compressed to an playable state. ");
            sleep(100);
         } else {
            printf("\nCould not find file, make sure your file is named \"Menu_DECOMP.bin\"");
            sleep(100);
         }
      } else if (ftype == 2) {
         if (access("Tour_DECOMP.bin", F_OK) != -1) {
            printf("\nPlease wait your file is being compressed\n");
            system("n Tour_DECOMP.bin -lh -o Tour.mdl\n");
            printf("\nDone! Your file has been compressed to an playable state. ");
            sleep(100);
         } else {
            printf("\nCould not find file, make sure your file is named \"Tour_DECOMP.bin\"");
            sleep(100);
         }
      } else if (ftype == 3) {
         printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\Hi you found my secret! Either that or stop being a stalker and looking at this messy source code.");
         sleep(100);
      } else {
         printf("You did not enter 1 or 2. Please exit and try again");
         sleep(100);
      }

   } else if (enx == 3) {

      printf("\n\n\n     Thanks so much for downloading my tool! I really hope this program will help you. Made by TheN00b21.\n\n\t\t\t\t\t\t\t   FAQ\n\n");
      printf("Why is my file not extracting/compressing?\nThis may be multiple problems, 1. Your file is not named the original name it was in the game or when it was extracted, 2. Your file is not in the directory of this program, 3. Wiimm's szs tools are not installed.\n\n");
      printf("How do I control this program?\nWell you probably already figured it out by now but you press 1, 2, or 3 on your keyboard and press enter to navigate.\n\n");
      printf("Why did you create this program?\nGood Question! There are many reasons but the main reason is to have a more lightweight and accessible version of converting MSM files.\n\n");
      printf("This didn't help me, AT ALL!\nNo problem, you can contact me on discord at TheN00b21#2050, or email me at npforcier@gmail.com\n\n");
      printf("Thanks for Reading! Special Thanks to the MSM Discord!(\https://discord.gg/3dAeH5k)\ LONG LIVE MSM!");
      sleep(100);
   } else {
      printf("You did not press 1, 2, or 3. Close the program and try again.");
      sleep(100);
   }

   return 0;
}
