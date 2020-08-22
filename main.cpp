//Created by -> Sudo Hero
//Date -> 22/8/20
//****************************************************

//Headers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main () {

  //Declaration
  char fname[20],skip='\n',ch,ofname[20];
  int i=0;

  //Descrip
  system("dir");
  system("cls");
  printf("Email Extractor\n\n\n");
  printf("It is adviced to read README before starting\n");
  //Start
  printf("\n\nEnter File Name\n");
  printf("ENTER->");
  scanf("%s",fname);
  fflush(stdin);
  printf("\t(Remember the file should be in same directory)\n");
  printf("\n\nEnter Output File Name\n");
  printf("ENTER->");
  scanf("%s",ofname);
  fflush(stdin);
  FILE *fp,*of;
  fp=fopen(fname,"r");
  printf("\n\nOpening File...");
  if(fp==NULL)
  {
    printf("\nFile Could'nt be opened\n");
    getch();
    exit(1);
  }
  printf("\nFile Opened Sucessfully...\n");
  printf("Process Started...");

  //Process
   printf("Please Choose a 'Skip Point'");
   printf("\t(If you don't know what is SKIP POINT please check my tutorial b'cause it is important)\n\n");
   printf("SKIP->");
   scanf("%c",&skip);
   printf("\nSKIP POINT -----> %c",skip);
   of=fopen(ofname,"w+");
   while(1)
   {
     ch=fgetc(fp);
     if(ch==EOF)
     {
        printf("\nFile Has Ended");
        break;
     }
     if(ch==skip)
     {
       for(;ch!='\n';)
       {
         ch=fgetc(fp);
         continue;
       }
     }
     fputc(ch,of);
   }
  fclose(fp);
  fclose(of);
  return 0;
}
