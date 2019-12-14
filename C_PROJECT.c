


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct question
{
char quiz[100];
char answer1[20];
char answer2[20];
char answer3[20];
char answer4[20];
int correctAnswer;
};
int main()
{
     int count=0,rupees=1000;
     int age;
         int i,j,r,x[10];
    int ans;
   // int a=1,b=10,d=b-a;

     printf("\n\t\t WELCOME TO QUIZ COMPETITION\n\n\n");
     printf("\t\t INSTRUCTION:\n\n\t\t 1.LETS START OUR CHALLENGING ROUND\n\n");
     printf("\t\t 2.THERE ARE FIVE QUESTIONS IN FIRST ROUND\n\n");
     printf("\t\t 3.ALL THE BEST\n\n");
     printf("\n\n\nYOUR FIRST QUESTION IS THERE ON SCREEN:\n\n");
    struct question one=
    {
        "\n 1.THE NUMBER OF MOLES OF SOLUTE PRESENT IN 1 KG OF A SOLVENT IS CALLED ITS\n\n",
        " 1.MOLALITY\t",
        " 2.MOLARITY\n",
        " 3.NORMALITY\t",
        " 4.FORMALITY",
        1,
     };
     printf("%s %s %s %s %s\n\n",one.quiz,one.answer1,one.answer2,one.answer3,one.answer4);
     printf("\nCHOOSE THE CORRECT OPTION AMONG FOUR\n");
     scanf("%d",&one.correctAnswer);
             system("cls");
       if(one.correctAnswer!=1)
       {
        printf("\t\t\tSORRY YOUR ANSWER IS WRONG \n\n\t\t\t    YOUR NEXT QUESTION");
       }

       else
       {
        printf("\t\t\t    YOUR ANSWER IS CORRECT \n\n\t\t\t\t CONGRATS!!!\n\n\t\t       BE READY FOR YOUR NEXT QUESTION");
        count++;

       }

                    struct question two=
                    {
                    "\n\n 2.THE MOST ELECTRONEGATIVE ELEMENT AMONG THE FOLLOWING IS\n\n",
                    " 1.SODIUM\t",
                    " 2.BROMINE\n",
                    " 3.FLUROINE\t",
                    " 4.OXYGEN",
                    3,
                    };

                    printf("%s %s %s %s %s\n\n",two.quiz,two.answer1,two.answer2,two.answer3,two.answer4);
                    scanf("%d",&two.correctAnswer);
                    system("cls");
                   if(two.correctAnswer!=3)
                   {

                   printf("\t\t\tSORRY YOUR ANSWER IS WRONG \n\n\t\t\t   YOUR NEXT QUESTION");
                   }
                   else
                   {
                  printf("\t\t\tCONGRATS YOUR ANSWER IS CORRECT \n\n\t\t\t     YOUR NEXT QUESTION");
                  count++;
                   }


               struct question three=
               {
               "\n\n\n 3. THE LANDMASS OF WHICH OF THE FOLLOWING CONTINENTS IS THE LEAST\n\n",
               "  1.AFRICA\t",
               "  2.ASIA\n",
               "  3.AUSTRALIA\t",
               "  4.EUROPE",
                3,
                };
                printf("%s %s %s %s %s\n",three.quiz,three.answer1,three.answer2,three.answer3,three.answer4);
                scanf("%d",&three.correctAnswer);
                system("cls");
                if(three.correctAnswer!=3)
               {

                printf("\t\t\tUNFORTUNATELY YOUR ANSWER IS WRONG \n\n\t\t\t  TRY HARD IN THE NEXT QUESTION");
               }
                else
                {
                    printf("\t\t\tCONGO YOUR ANSWER IS CORRECT\n\n\t\t     ALL THE BEST FOR YOUR NEXT QUESTION");
                    count++;
                }

             struct question four=
           {
             "\n\n 4. WHO IS FATHER OF GEOMETRY\n\n",
              "  1.ARISTOTLE\t",
              "  2.EUCLID\n",
              "  3.PYTHAGORAS\t",
              "  4.KEPLER",
              2,
             };

             printf("%s %s %s %s %s\n",four.quiz,four.answer1,four.answer2,four.answer3,four.answer4);
             scanf("%d",&four.correctAnswer);
             system("cls");
             if(four.correctAnswer!=2)
             {

              printf("\t\t\tBAD LUCK YOUR ANSWER IS WRONG \n\n\t\t\t   YOUR NEXT QUESTION");
             }
              else
              {
                  printf("\t\t  WELL DONE YOUR ANSWER IS ABSOLUTELY CORRECT \n\n\t\t    PLAY PATIENTLY IN YOUR NEXT QUESTION");
                  count++;
              }

         struct question five=
        {
        "\n\n 5.THE INDIAN TO BEAT THE COMPUTERS IN MATHEMATICAL WIZARDRY IS\n\n",
        "  1.RAMANUJAM\t   ",
        "  2.RINA PANIGRAHI\n",
        "  3.RAJA RAMANNA   ",
        " 4.SHAKUNTALA DEVI",
        4,
        };

        printf("%s %s %s %s %s\n",five.quiz,five.answer1,five.answer2,five.answer3,five.answer4);
        scanf("%d",&five.correctAnswer);
        system("cls");
        if(five.correctAnswer!=4)
        {

        printf("\t\tYOUR ANSWER IS UNFORTUNATLEY WRONG\n\n");
        }
        else

        {
            printf("\t\tQUESTION WAS TOUGH BUT YOU ANSWERED IT CORRECT \n\n\t\t\t\t     WELL DONE\n");
            count++;
        }
       printf("\n\n\t\t\t YOU ANSWERED %d QUESTIONS CORRECT \n\n",count);
        if(count>=4)
        {
            printf("\n\n\t\t\tYOU HAVE QUALIFIED FOR NEXT ROUND\n\n\t\t\t\t     CONGRATS");
        }
        else
        {
            printf("\t\tSORRY YOU ARE NOT QULAIFIED FOR NEXT ROUND\n\n\t BETTER LUCK NEXT TIME");
        }

   if(count>=4)
{ printf("\n********************************************************************************\n");
  printf("################################################################################");

  printf("\n********************************************************************************\n");
printf("\nYOUR TIME STARTS FOR FULFILLING YOUR DESIRES");

 srand(time(NULL));
for(i=1;i<=10;i++)
 {
    r=(rand()%10)+1;//(d+1)+a;

 for(j=1;j<i;j++)
 {
    if(r==x[j])
        break;
 }
if(i==j)
    x[i]=r;
else
    i--;
 }
 for(i=1;i<=10;i++)
  {
    if(x[i]==1)
   {
       printf("\n\nQ.WHERE IS FORT WILLIAM LOCATED?");
       printf("\n1.CHENNAI\t2.GOA\n3.KOLKATA\t4.MYSORE\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
       system("cls");
       if(ans==3)
        {printf("\n\tANSWER IS CORRECT\n\n");
         rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
     else
        {printf("\n\t ANSWER IS WRONG\n\n");
         break;}

   }
   else if(x[i]==2)
   {
       printf("\n\nQ.NAME THIS INDIAN TENNIS PLAYER WHO HAS TURNED HOLLYWOOD FILMMAKER?");
       printf("\n1.LEANDER PAES\t\t        2.MAHESH BHUPATHI\n3.VIJAY AMRITRAJ\t\t4.ASHOK AMRITRAJ\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
       system("cls");
       if(ans==4)
        {printf("\n\tANSWER IS CORRECT\n\n");
         rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;}
   }
  else if(x[i]==3)
   {
       printf("\n\nQ.SHISHU IS THE LITERARY WORK OF WHICH INDIAN AUTHOR");
       printf("\n1.VIKRAM SETH\t\t 2.JAWAHARLAL NEHRU\n3.RABINDRANATH TAGORE\t 4.ARUNDHATI\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
       system("cls");
       if(ans==3)
        {printf("\n\tANSWER IS CORRECT\n\n");
          rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;}
    }
  else if(x[i]==4)
   {
       printf("\n\nQ.WHICH OF THESE CITIES LOCATED IN THE STATE OF GUJARAT IS FAMOUS FOR ZARI PRODUCTION");
       printf("\n1.SURAT\t\t        2.RAJKOT\n3.SURENDRANAGAR\t\t4.AHMEDABAD\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
        system("cls");
       if(ans==1)
        {printf("\n\tANSWER IS CORRECT\n\n");
         rupees=rupees*2;
        printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;}
   }
  else if(x[i]==5)
   {
       printf("\n\nQ.WHICH STATE IN INDIA IS THE LARGEST PRODUCER OF SOYABEAM?");
       printf("\n1.RAJASTHAN\t\t2.GUJARAT\n3.UTTAR PRADESH\t\t4.MADHYA PRADESH\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
        system("cls");
       if(ans==4)
        {printf("\n\tANSWER IS CORRECT\n\n");
          rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;}
   }
  else if(x[i]==6)
   {
       printf("\n\nQ.THE WESTERN GHATS IN MAHARASHTRA IS KNOWN AS..?");
       printf("\n1.NILGRIS\t\t2.SAHYADRIS\n3.CARDAMON HILLS\t4.ANNAMALAI\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
        system("cls");
       if(ans==2)
        {printf("\n\tANSWER IS CORRECT\n\n");
          rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        { printf("\n\tANSWER IS WRONG\n\n");
        break;
        }
   }
  else if(x[i]==7)
   {
       printf("\n\nQ.ON WHICH RIVERBANK IS GOA LOCATED?");
       printf("\n1.GANGA\t\t2.MANDOVI\n3.GOMATI\t4.SABARMATI\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
        system("cls");
       if(ans==2)
        {printf("\n\tANSWER IS CORRECT\n\n");
         rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;}
   }
  else if(x[i]==8)
   {
       printf("\n\nQ.WHICH STATE IS KNOWN AS INDIA'S SPICE GARDEN..?");
       printf("\n1.KERALA\t2.KARNATAKA\n3.BIHAR\t\t4.UTTARANCHAL\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
        getchar();
         system("cls");
       if(ans==1)
        {printf("\n\tANSWER IS CORRECT\n\n");
         rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;}
   }
  else if(x[i]==9)
   {
       printf("\n\nQ.THUMBA IN KERALA IS FAMOUS BECAUSE...?");
       printf("\n1.IT HAS SEVERAL INDUSTRIES\t 2.IT IS A ROCKET LAUNCHING STATION\n3.IT IS A HARBOUR\t\t 4.IS HAS AN INTERNATIONAL AIRPORT\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
        system("cls");
       if(ans==2)
        {printf("\n\tANSWER IS CORRECT\n\n");
         rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;}
   }
  else if(x[i]==10)
   {
       printf("\n\nQ.WHICH OF THESE PLACES IS NOT LOCATED IN MUMBAI..?");
       printf("\n1.THE GATEWAY OF INDIA\t\t2.THE KARNATAKA NEHRU PARK\n3.THE JUHU BEACH\t\t4.THE CHARMINAR\n");
       printf("\nENTER YOUR ANSWER ");
       scanf("%d",&ans);
       getchar();
        system("cls");
       if(ans==4)
        {printf("\n\tANSWER IS CORRECT\n\n");
        rupees=rupees*2;
         printf("YOU WON %d RUPEES ",rupees);
        }
       else
        {printf("\n\tANSWER IS WRONG\n\n");
        break;
        }
   }
   }
printf("YOU EARNED TOTAL AMOUNT OF %d",rupees-1000);
 return 0;
}
}

