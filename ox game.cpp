#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;  

char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int coun=0;
class setx
{
 	public:
 	char name1[20];
   int set(char play[20])
 	{
 		int i=0;
 	   do {
 		   name1[i]=play[i];
 			   i++;
 		   }while(play[i-1]!=NULL);
 	 return 0;
 	}
};
class seto
{
 	public:
 	char name2[20]; 
 	int  set(char play[20])
 	{
 		int i=0;
 	   do{
 		   name2[i]=play[i];
 			i++;
 		  }while(play[i-1]!=NULL);
 	return 0;
 	}
};		 
char ox()
{
 	char choise;
 	printf("press 'x' for x\n");
 	printf("press 'o' for o\n");
 	scanf("%c",&choise);
 	if(choise=='x' || choise=='o')
 	{
 	return choise;
 	}
 	else
 	{
    clrscr();
 	printf("please retry\n");
 	ox();	
 	}
}	 
char toss()
{
	
	
 	int tos;
 	srand(time(NULL));
    tos=rand()%4;
    if(tos==1 || tos==3)
    {
    	printf("\n                      HEAD\n\n");
    	return 'h';
    }
    else
    {
    	printf("\n                     TAIL\n\n");
    	return 't';
    }		
}
 
int display()
{
  printf("\n     ##       tiK  tok  tik  game       ##\n\n\n\n");   
 	for(int i=0;i<3;i++)
 	 {
 	 	for(int j=0;j<3;j++)
 	 	{
 	 		printf("            %c"  ,a[i][j]);
 	 	}
 	 printf(" \n\n\n");
 	 }
 	return 0;
}
char setval(char num,char count1)
{
	static char	count;
	  if(count1!=0){
	    count=count1;
		}
	for(int i=0;i<3;i++)
 	 {
 	 	for(int j=0;j<3;j++)
 	 	{
 	 		if(a[i][j]==num)
 	 		{
 	 			if(count=='x')
 	 			{
 	 			a[i][j]='X';
 	 			count='o';
 	 			}
 	 			else 
 	 			{
 	 			a[i][j]='O';
 	 			count='x';
 	 			}
 	 			coun++;
 	 			break;
 	 			
 	 		 }
 	 		
 	 	  }
 	  }
	return count;
}
int check()
{
	int val=0;
if(a[0][0]=='X'&& a[0][1]=='X'&&a[0][2]=='X'||a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O' )
  {
  	if(a[0][0]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
 }
else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X' || a[1][0]=='O'&& a[1][1]=='O'&&a[1][2]=='O')
  {
  	if(a[1][0]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
  }
  
else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X' || a[2][0]=='O'&& a[2][1]=='O'&&a[2][2]=='O')
  {
  	if(a[2][0]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
  }
  
else if(a[0][0]=='X'&&a[1][0]=='X'&& a[2][0]=='X'|| a[0][0]=='O'&& a[1][0]=='O'&&a[2][0]=='O' )
  {
  	if(a[0][0]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
  }
  
else if(a[0][1]=='X'&&a[1][1]=='X' && a[2][1]=='X' || a[0][1]=='O'&& a[1][1]=='O'&& a[2][1]=='O' )
  {
  	if(a[0][1]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
  }
  
else if(a[0][2]=='X'&& a[2][2]=='X'&& a[1][2]=='X' || a[0][2]=='O'&& a[1][2]=='O'&&a[2][2]=='O' )
  {
  	if(a[0][2]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
  } 
else if(a[0][0]=='X'&& a[2][2]=='X'&& a[1][1]=='X' || a[0][0]=='O'&& a[1][1]=='O'&& a[2][2]=='O' )
  {
  	if(a[0][0]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
  }
  
else if(a[2][0]=='X'&& a[0][2]=='X'&& a[1][1]=='X'|| a[2][0]=='O'&&a[1][1]=='O'&&a[0][2]=='O' )
  {
  	if(a[2][0]=='X')
  	{
  		val=1;
  	}
  	else
  	{
  		val=2;
  	}
   }
else if(coun==9)
{
    	val=4;
}
return val;
}

int main()
 {
 	int num ,val,count1;
 	setx x;
 	seto o;
 	char ht,tos;
	char play1[20],play2[20];
    printf("\n     ##       tiK  tok  tik  game       ##\n\n\n\n");   
	printf("enter first player name\n");
	gets(play1);
	printf("\n");
	printf("enter second player name\n");
	gets(play2);
	clrscr();
	printf("\n     ##       tiK  tok  tik  game       ##\n\n\n\n");   
	while(1)
	{
    printf("%s enter your choise\n",play1);
    printf("press 'h' for HEAD\n");
    printf("press 't' for TAIL\n");
    scanf("%c",&ht);
    clrscr();
	printf("\n     ##       tiK  tok  tik  game       ##\n\n\n\n");   
	    if(ht=='h' || ht=='t'){
	     break;
	     }
	    printf("please reytry\n");
	
	}
    sleep(3);
    tos=toss();
    if(tos==ht)
   	 {
   		int i=0;
   	 printf("%s you win the toss\n",play1);
   	 printf("%s select your symbol\n",play1);
   	 count1=ox();
   	 
   	     if(count1=='x')
   	       {
   	          x.set(play1);
   	       	  o.set(play2);
   	       	}
   	      else
   	       	{
   	       	   x.set(play2);
   	       	   o.set(play1);
   	       	}
   	      
   	  }
   	else
   	 {
   	 printf("%s you loss the toss\n",play1);
   	 printf("%s select your symbol\n",play2);
   	 count1=ox();
   	      if(count1=='x')
   	       	{ 
   	       	   x.set(play2);
   	       	   o.set(play1);
   	       	}
   	       	else
   	       	{
   	       	   x.set(play1);
   	       	   o.set(play2);
   	       	}
   	   }	 	
   		
      
 	  setval(num,count1);
   	  clrscr();
     while(1)
       {
         display();
      
         printf("\n         enter your number\n         ");
         scanf(" %c\n",&num);
         clrscr();
         setval(num,0);
         clrscr();
      	 val=check();
        if(val==0)
          {
         continue;
     	  }
     	else if(val==1)
     	 {
     		display();
         printf("            %s is a winner",x.name1);
     	  break;
     	}
     	else if(val==2)
     	{   
     		display();
           printf("            %s is a winer",o.name2);
     		break;
     	}
     	else if(val==4)
     	{
     	   	display();
     	   printf("\n                draw");
     		break;
     	}
     	
     }
    return 0;
}	  	 	
