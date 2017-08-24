#include <stdio.h>
#include <stdlib.h> 
#define red   "\033[0;31m"        /* 0 -> normal ;  31 -> red */
#define cyan  "\033[1;36m"        /* 1 -> bold ;  36 -> cyan */
#define green "\033[4;32m"        /* 4 -> underline ;  32 -> green */
#define blue  "\033[9;34m"        /* 9 -> strike ;  34 -> blue */
 
#define black  "\033[0;30m"
#define brown  "\033[0;33m"
#define magenta  "\033[0;35m"
#define gray  "\033[0;37m"
 
#define none   "\033[0m"        /* to flush the previous property */
void waitFun()
 {
 int i;
   for(i=0;i<20;i++)
   {
   printf(".");
   myDelay(1000);
   printf("%c",96);
 } 
 } 
 
 
 void myDelay()
 { int c = 1, d = 1;
    printf("just wait....\n");
   for ( c = 1 ; c <= 32767 ; c++ )
       for ( d = 1 ; d <= 32767 ; d++ )
       {
       }
 }
 
 
 void askQue()
 {
 char temp[50];
  printf("okkyyyy....\n ");
  myDelay(1000);
  printf("%slet me ask some quetions...based on which we decide you have your fovourite gadget <EGo> or not!!!!!!\n",gray);
  
  
  printf("ummmmm...\n");
  myDelay(1000);
  printf("ookay ans in yes|no\n");
  printf("%s1. kya aapne kabhi AUTO chalaya hai..., %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s2. kya aapko TOPPER banna acha lagta hai..., %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s3. kya ye sahi he ki aap BARGAINING ki <rapchik riya> hai..., %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s4. Kya ye sahi he ki aap dedh-do sal ke bache se bhi rasta puch leti hai... %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s5. Kya aapko lagta hai dinchak pooja hi rapchik riya hai... %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s6. Kya aapko dosa-sambhar ko fork se khane me lajja nahi aati... %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s7. Kya rapchik riya ke status and hashtags aapke status aur hashtags ke roll model hai... %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s8. Kya aapki latest bestie(M>E> 1st year) aapke notes se prabhawit hai... %s\n", red, none);
  scanf("%s",&temp);
 
  printf("%s9. kya %sADITI chinki hai.. %s\n", red, gray);
  scanf("%s",&temp);
 
  printf("%s10. kya %sCHHHAYA aur %sADITI ke beech me aditi dwara banai gai EGO-WALL hai... %s\n", red, gray,magenta,black);
  scanf("%s",&temp);
 
  printf("%s11. nanhi didi kisi fight-club ki member hai... %s\n", red, gray);
  scanf("%s",&temp);
 
   printf("%s12. Kya traffic lights ke %sred hone par aapki AKAD hurt hoti hai  %s\n", red,red, gray,magenta,black);
  scanf("%s",&temp);
 
  printf("%s13. Kya aapke EGO me namak hai... %s\n", red, gray,magenta,black);
  scanf("%s",&temp);
 

  printf("wait....\n");
  myDelay(500);
 
// waitFun(); 
 printf("okay ....yes | no is enough now we have MCQ's...       :-;\n");
 
 printf("%s1. Aapko kab pata pada ki hotalo me konsi plate me sabji lete he aur konsi me roti ..., %s\n", red, none);
  printf("%s1.1 joshiba par \n", green);
  printf("%s1.2 gurukripa par \n", green);
  printf("%s1.3  ghr par hi :-; \n", green);
  printf("%s1.4 abhi bhi doubt he.... \n", green);
  scanf("%s",&temp);
 
 printf("%s2. Aapka 'EGO' sabse jyada kon hurt karta hai ..., %s\n", red, none);
  printf("%s2.1 Devansh \n", green);
  printf("%s2.2 Shrutika \n", green);
  printf("%s2.3 Prachi \n", green);
  printf("%s2.4 Rupendra \n", green);
  scanf("%s",&temp);
 
 printf("%s3. Aap se jab koi que. solve nahi hoto to aapke reasons kya hote hai ..., %s\n", red, none);
  printf("%s3.1 Out of course \n", green);
  printf("%s3.2 1st wala \n", green);
  printf("%s3.3 2nd wala \n", green);
  printf("%s3.4 All of the above... \n", green);
  scanf("%s",&temp);
 
 printf("%s4.  ..., %s\n", red, none);
  printf("%s4.1  \n", green);
  printf("%s4.2  \n", green);
  printf("%s4.3  \n", green);
  printf("%s4.4  \n", green);
  scanf("%s",&temp);
 
 printf("%s5. Aapko konsa nam sabse acha lagta hai ..., %s\n", red, none);
  printf("%s4.1 nanhi didi \n", green);
  printf("%s4.2 naughty aditi \n", green);
  printf("%s4.3 ego+stick+aditi barabar egoistick \n", green);
  printf("%s4.4 kuch bhi bol do yarrrrrr......... \n", green);
  scanf("%s",&temp);
 
 
 printf("%s6. Nanhi didi se aapka kya tatparya hai ..., %s\n", red, none);
  printf("%s6.1 Choti \n", green);
  printf("%s6.2 Bahut Choti \n", green);
  printf("%s6.3 1st wali se thodi kam \n", green);
  printf("%s6.4 me kyu batau...huh... \n", green);
  scanf("%s",&temp);
 
 
  printf("%s7. Nanhi ki chai me zahar kon mila sakta hai ..., %s\n", red, none);
  printf("%s7.1 uska ego \n", green);
  printf("%s7.2 uska vaham \n", green);
  printf("%s7.3 uska anger/temper \n", green);
  printf("%s7.4 riya-khushboo dua \n", green);
  printf("%s7.5 ya fir DEVANSH....     :-;\n", green);
  scanf("%s",&temp);


  printf("%s8. Aap akeke island par kis ke sath jana chahengi ..., %s\n", red, none);
  printf("%s8.1 aapki bestie riya \n", green);
  printf("%s8.2 camera phone \n", green);
  printf("%s8.3 1st and 2nd dono \n", green);
  printf("%s8.4 1st hi kafi he,kyuki wo to 2nd option layegi heeeeeeeeeee......... \n", green);
  scanf("%s",&temp);
 

  printf("%s9. Jab koi Stranger aapko Whatsapp karta hai aap kese respond karti hai..., %s\n", red, none);
  printf("%s9.1 Akad dikhake\n", green);
  printf("%s9.2 Ego dikhake \n", green);
  printf("%s9.3 Egoist ban ke  \n", green);
  printf("%s9.4 All of the above..... \n", green);
  scanf("%s",&temp);
 


 printf("\nokay......just wait....\n");
 myDelay();
 printf("%sbased on your answers....we concluded that\n",red);
 printf("%saap me EGO nahi he",gray);
 myDelay();
 myDelay();
 printf("%sBalki bahut EGo hai",green); 
 
 
 printf("\nBy : \n%sShrutika Chouhan\n%sDevansh joshi\n%sRupendra Pratap Singh Hada\n%sAkash Nagwanshi\n",gray,red,magenta,blue);
 
  }
  
  
   
   
 void printTags()
 {
// printf("%sHello, %sworld!%s\n", red, blue, none);
 //printf("%sHello%s, %sworld!\n", green, none, cyan);
 //printf("%s", none);
} 



 
int
main(void)
{
   char ch[50];
   printf("Aditi{nanhi didi} me ego he ki nahi yes|no.....\n");
  
    scanf("%s",&ch);
  //  printf("Aditi{nanhi didi} me ego he ki nahi yes|no.....\n");
    if(strcmp(ch,"yes")==0){
    printf("\n%sfinally you accepted ....\nconclusion \nADITI+STIC = 'EGOISTIC' \n",red);
    askQue(); 
     exit(0);
    }
    else{    //printf(" ummmm... not possible ....try again....\n");
    
    printf("%summmm....., %snot possible ....try again....!%s\n", red, blue, none);
    } 
    main();
    
 return 0;
}
