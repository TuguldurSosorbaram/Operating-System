#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete(char filename[30]){
     FILE *fptr;
    fptr = fopen(filename,"a+");

    if(fptr == NULL)
    {
      printf("Error!");
      exit(1);
    }
    char name[30];
    printf("Please enter name of bunny to DELETE \n");
    fgets(name, 30, stdin);
    int len = strlen(name);
    name[len - 1] = '\0';
    char str[256];
    int j =0;
    int k=0;
    while (!feof(fptr)){
            k++;
        strcpy(str, "\0");
        fgets(str,256,fptr);
        if(NULL != strstr(str,name)){
            j=k;
            printf("\n SUCCESSFULLY FOUND ENTERED BUNNY FROM THE DATABASE\n\n");        }
    }
    fclose(fptr);
    if (j!=0)
    {
        FILE *fptr;
        fptr = fopen(filename,"r");
        if(fptr == NULL)
        {
          printf("Error!");
          exit(1);
        }
        FILE *fptr2;
        fptr2 = fopen("temp.txt","w");
        if(fptr2 == NULL)
        {
          printf("Error!");
          exit(1);
        }
        int linectr =0;
        while (!feof(fptr))
        {
            strcpy(str, "\0");
            fgets(str, 256, fptr);
            if (!feof(fptr))
            {
                linectr++;
                if (linectr != j)
                    {
                        fprintf(fptr2, "%s", str);
                    }
                }
        }

        fclose(fptr);
        fclose(fptr2);
        remove(filename);
        rename("temp.txt", filename);
    }
}



void add(char filename[30]){

FILE *fptr;
fptr = fopen(filename,"a+");

    if(fptr == NULL)
    {
      printf("Error!");
      exit(1);
    }
    char name[30];
    printf("Please Enter bunny name \n");
    fgets(name, 30, stdin);
    int len = strlen(name);
    name[len - 1] = '\0';
    fprintf(fptr, "%s ", name);
    int kingdom;
    printf("Please Enter the number of bunny kingdom \n");
    printf("1. Barátfa\n2. Lovas\n3. Szula\n4. Kígyós-patak\n5. Malom telek\n6. Páskom\n7. Káposztás kert\n");

    char temp[10];
    fgets(temp, 10, stdin);
    len = strlen(temp);
    temp[len - 1] = '\0';
    kingdom = atoi(temp);
    switch(kingdom) {
    case 1:
         fprintf(fptr, "%s ", "Barátfa");
         break;
    case 2:
         fprintf(fptr, "%s ", "Lovas");
         break;
    case 3 :
         fprintf(fptr, "%s ", "Szula");
         break;
    case 4 :
         fprintf(fptr, "%s ", "Kígyós-patak");
         break;
    case 5 :
         fprintf(fptr, "%s ", "Malom telek");
         break;
    case 6 :
         fprintf(fptr, "%s ", "Páskom");
         break;
    case 7 :
         fprintf(fptr, "%s ", "Káposztás kert");
         break;
      default :
         fprintf(fptr, "%s ", "");
   }
    int comp;
    printf("Please Enter bunny competition number \n");

    char temp2[10];
    fgets(temp2, 10, stdin);
    len = strlen(temp2);
    temp2[len - 1] = '\0';
    comp = atoi(temp2);
    fprintf(fptr, "%d \n", comp);

    fclose(fptr);

	printf("\n SUCCESSFULLY ADDED BUNNY TO DATABASE\n\n");

}


void modify(char filename[30]){
     FILE *fptr;
    fptr = fopen(filename,"a+");

    if(fptr == NULL)
    {
      printf("Error!");
      exit(1);
    }
    char name[30];
    printf("Please enter name of bunny to MODIFY \n");
    fgets(name, 30, stdin);
    int len = strlen(name);
    name[len - 1] = '\0';
    char str[256];
    int j =0;
    int k=0;
    while (!feof(fptr)){
            k++;
        strcpy(str, "\0");
        fgets(str,256,fptr);
        if(NULL != strstr(str,name)){
            j=k;
            printf("\n SUCCESSFULLY FOUND ENTERED BUNNY FROM THE DATABASE\n\n");
        }
    }
    fclose(fptr);
    if (j!=0)
    {
        FILE *fptr;
        fptr = fopen(filename,"r");
        if(fptr == NULL)
        {
          printf("Error!");
          exit(1);
        }
        FILE *fptr2;
        fptr2 = fopen("temp.txt","w");
        if(fptr2 == NULL)
        {
          printf("Error!");
          exit(1);
        }
        int linectr =0;
        while (!feof(fptr))
        {
            strcpy(str, "\0");
            fgets(str, 256, fptr);
            if (!feof(fptr))
            {
                linectr++;
                if (linectr != j)
                    {
                        fprintf(fptr2, "%s", str);
                    }
                    else
                    {
                        char mName[30];
                        printf("Enter new data for the modifying bunny \n");
                        printf("Please Enter bunny name \n");
                        fgets(mName, 30, stdin);
                        int mLen = strlen(mName);
                        mName[mLen - 1] = '\0';
                        fprintf(fptr2, "%s ", mName);
                        int mkingdom;
                        printf("Please Enter the number of bunny kingdom \n");
                        printf("1. Barátfa\n2. Lovas\n3. Szula\n4. Kígyós-patak\n5. Malom telek\n6. Páskom\n7. Káposztás kert\n");

                        char temp3[10];
                        fgets(temp3, 10, stdin);
                        len = strlen(temp3);
                        temp3[len - 1] = '\0';
                        mkingdom = atoi(temp3);

                        switch(mkingdom) {
                        case 1:
                             fprintf(fptr2, "%s ", "Barátfa");
                             break;
                        case 2:
                             fprintf(fptr2, "%s ", "Lovas");
                             break;
                        case 3 :
                             fprintf(fptr2, "%s ", "Szula");
                             break;
                        case 4 :
                             fprintf(fptr2, "%s ", "Kígyós-patak");
                             break;
                        case 5 :
                             fprintf(fptr2, "%s ", "Malom telek");
                             break;
                        case 6 :
                             fprintf(fptr2, "%s ", "Páskom");
                             break;
                        case 7 :
                             fprintf(fptr2, "%s ", "Káposztás kert");
                             break;
                          default :
                             fprintf(fptr2, "%s ", "");
                       }
                        int mComp;
                        printf("Please Enter bunny competition number \n");

                        char temp[10];
                        fgets(temp, 10, stdin);
                        len = strlen(temp);
                        temp[len - 1] = '\0';
                        mComp = atoi(temp);
                        fprintf(fptr2, "%d \n", mComp);
                    }
                }
        }

        fclose(fptr);
        fclose(fptr2);
        remove(filename);
        rename("temp.txt", filename);
    }
}

void print(char filename[30]){
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	FILE *f;
        f = fopen(filename,"r");
	char s;
	if((s=fgetc(f))==EOF)
        {
          printf("File is empty for now!\n");
        }
	else{
	rewind(f);
        while((s=fgetc(f))!=EOF) {
          printf("%c",s);
       }
	}

        fclose(f);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

}
void printByKingdom(char filename[30]){
    printf("Please enter number of kingdom that you want to print.\n");
    printf("1. Barátfa\n2. Lovas\n3. Szula\n4. Kígyós-patak\n5. Malom telek\n6. Páskom\n7. Káposztás kert\n");
    char temp[10];
    int kingdomNum;
    fgets(temp, 10, stdin);
    int len = strlen(temp);
    temp[len - 1] = '\0';
    kingdomNum = atoi(temp);
    char kingdom[10];

            switch(kingdomNum) {
                    case 1:
                        strcpy(kingdom,"Barátfa");
                        break;
                    case 2:
                        strcpy(kingdom,"Lovas");
                        break;
                    case 3 :
                        strcpy(kingdom,"Szula");
                        break;
                    case 4 :
                        strcpy(kingdom,"Kígyós-patak");
                        break;
                    case 5 :
                        strcpy(kingdom,"Malom telek");
                        break;
                    case 6 :
                        strcpy(kingdom,"Páskom");
                        break;
                    case 7 :
                        strcpy(kingdom,"Káposztás kert");
                        break;
                    default :
                        strcpy(kingdom,NULL);
                       }
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    FILE *fptr;
    fptr = fopen(filename,"r");
    char s;
    int k=0;
    if((s=fgetc(fptr))==EOF)
        {
          printf("File is empty for now!\n");
        }
	else{
	rewind(fptr);
	char str[256];
    while (!feof(fptr)){
        strcpy(str, "\0");
        fgets(str,256,fptr);
        if(NULL != strstr(str,kingdom)){
            printf(str);
            k++;
            }
    }
	}
	if (k==0){
        printf("\nThere is no bunny entering competition from kingdom %s\n",kingdom);
	}
	else {
        printf("\nThere is %d bunny entering competition from kingdom %s\n",k,kingdom);
	}

    fclose(fptr);
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

}



int main () {
    int choice;
	char fileName[30];
	printf("Please enter filename\n");

	fgets(fileName, 30, stdin);
	int len = strlen(fileName);
	fileName[len - 1] = '\0';
	FILE *fptr;
        fptr = fopen(fileName,"a");
        if(fptr == NULL)
        {
          printf("File name does not exist");
          exit(1);
        }
fclose(fptr);





do{
    printf("Please choose from menu\n");
    printf(" 1. for adding new bunny to database\n 2. for modifying database\n 3. for deleting from database\n 4. for printing database\n 5. for printing database by kingdom\n");
    printf(" 9. for exiting the program\n");
    char temp[10];
    fgets(temp, 10, stdin);
    int len = strlen(temp);
    temp[len - 1] = '\0';
    choice = atoi(temp);
   switch(choice) {
      case 1:
         printf("ADDING TO THE DATABASE...\n");
         add(fileName);
         break;
      case 2:
         printf("MODIFYING DATABASE...\n" );
         modify(fileName);
         break;
      case 3 :
         printf("DELETING FROM DATABASE...\n" );
         delete(fileName);
         break;
    case 4 :
         printf("PRINTING DATABASE...\n" );
         print(fileName);
         break;
    case 5 :
        printf("PRINTING DATABASE BY KINGDOM...\n");
        printByKingdom(fileName);
      default :
         printf("EXITING PROGRAM...\n" );
   }
}while(choice !=9);




   return 0;
}


