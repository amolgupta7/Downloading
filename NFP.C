#include<stdio.h> 
#include<conio.h>  
#include<string.h>  
#include<stdlib.h>  
void front();                
void front1();
void front2();
void front3(char k[]);
void showi(char e[]);
void user1(char a[]);
void take();
void name();
void roll();
void date();
void month();
void year();
void mail();
void mail2();
void bg();
void gender();
void mob();
void password();
void adminl();
void admin();
void showa(char e[]);
void show1();
void down(char k[]);
void wrong();
void wrong1();
void granted();
void name1();
void roll1();
void date1();
void month1();
void year1();
void mail1();
void gender1();
void mob1();
void bg1();
void check(char a[]);
void change(char a[]);
struct data
{

	char name[30];
	char rollno[10];
	char dd[10];
    char mm[10];
    char yy[10];
	char mail[50];
	char bg[5];
	char g[6];
	char mobile[10];
    char user2[20];
	char pass[20];
	char res[10];
}user;
struct data1
{
char rc[10];	
}check1;
int i,c,l=0,y=0;
char n[4],t[20],e[20],z[20];
FILE *m,*cf;
int main()                                  
{
	
  system("cls");
  front();
  return 0;
}  
void check(char c[])
{   
              cf=fopen("check.txt","ab+");
			  	
         while(fread(&check1,sizeof(check1),1,cf)>0)
			{
				
				if(strcmp(check1.rc,c)==0)
				{
				system("cls");
				printf("USER ALREADY EXIST WITH THIS ROLL NO\n ");
				fclose(cf);
				front1();
			}
			}
		
        strcpy(check1.rc,user.rollno);
		 fwrite(&check1,sizeof(check1),1,cf);
		fclose(cf);
			
	
   }                                       
void wrong()
{
	system("cls");
	printf("\t\t\t\t\t\tPLEASE ENTER CORRECT INPUT\n");
}
void wrong1()
{
	system("cls");
	printf("\t\t\t\t\t\tPLEASE ENTER CAPITAL LETTER\n");
}
void granted()
{ 
         char h[3],s[]={'B'};
	     printf("\n\n\n\n\t\t\t\t\tA C C E S S    G R A N T E D\n\n\n\n\n\n\n\n\n\n\n\n\n\nPRESS 1 TO CONTINUE\nPRESS 10 TO LOGOUT\nPRESS 0 TO RETURN MAIN MENU\n");
	     scanf("%s",h);
	     if(h[0]==49&&h[1]==NULL) 
		 {
	 		system("cls");
	        showi(e);
		 }
	 	 	else if(h[0]==48) 
	 			{
	 				system("cls");
	 				front();
    			}
	 		   else if(h[0]==49&&h[1]==48&&h[2]==NULL)
	 						{
	 							
								 system("cls");
	 							user1(s);
	 					   }
	 						else 
	 							{  
								 system("cls");
	    						 wrong();
	                             granted();
	 							}
}
void name1()
   {
	printf("\nENTER THE NAME:-\n");
	puts(user.name);
   }
void roll1()
  {
	printf("\nENTER THE ROLL NO.:-\n");
	printf("%s\n",user.rollno);
  }  
void date1()
  {
	printf("\nENTER THE DATE OF BIRTH:-\n");
	printf("\nENTER DATE(dd)\n");
 	printf("%s\n",user.dd);
  }  
void month1()
  {
	printf("\nENTER MONTH(mm/m/month) \n");
	printf("%s\n",user.mm);
  }	
void year1()
  {
	printf("\nENTER YEAR(1911-2019) \n");
	printf("%s\n",user.yy);	
  }
void mail1()
  {
	printf("\nENTER THE MAIL ID\n");
	printf("%s\n",user.mail);
  }
void gender1()
  {
	printf("\nENTER THE GENDER(M/F)\n");
	printf("%s\n",user.g);
  }  
void mob1()
  {
	printf("\nENTER THE MOBILE NO.\n");
	printf("%s\n",user.mobile);	
  } 
void bg1()
{
	printf("\nENTER BLOOD GROUP(xx/x +/-)\n");
	printf("%s\n",user.bg);
}
void front()
  {
  	printf("\n\t\t----------------------------------------------------------------------------------------\n");
  	printf("\t\t|   N A T I O N A L   I N S T I T U T E   O F   T E C H N O L O G Y , T R I C H Y      |\n");
  	printf("\t\t----------------------------------------------------------------------------------------\n");
  	printf("\n\n\n\n\n");
  	printf(" \t\t\t * *            * *         **************                 *****  \n");
  	printf(" \t\t\t *   *        *   *         *            *                *     *\n");
  	printf(" \t\t\t *     *    *     *         *                            *       *\n");
  	printf(" \t\t\t *       **       *         *                           *         *\n");
  	printf(" \t\t\t *                *         *                          *           *\n");
  	printf(" \t\t\t *                *         *                         ***************\n");
  	printf(" \t\t\t *                *         *                        *               *\n");
  	printf(" \t\t\t *                *         *                       *                 *\n");
  	printf(" \t\t\t *                *         *            *         *                   *\n");
  	printf(" \t\t\t *                *         **************        *                     *\n\n\n");
  	printf(" \t\tC  A    D  E  P  A  R  T  M  E  N  T       W  E  L  C  O  M  E  S       Y  O  U!! \n");
  	printf("\n\n\n\n");
  	printf("\t                     PRESS 1 TO CONTINUE ");
  	printf("\n\t                     PRESS 0 TO EXIT ");
  	printf("       ->\t");
  	scanf("%s",n);
  		if(strcmp(n,"0")==0)
  		{system("cls");
		  exit(0);
		  
	}
  		if(strcmp(n,"1")==0)
			{
  				system("cls");
				front1();
			}
		else
			{
				system("cls");
				printf("\t\t\t\t\tPLEASE ENTER CORRECT NUMBER\n\n");
				front();
			}
}
void front1()
{
	printf(" \t\t\t\tPRESS 'A' IF NEW USER\n\n \t\t\t\tPRESS 'B' FOR USER LOGIN\n\n \t\t\t\tPRESS 'C' FOR ADMIN LOGIN \n \n\n\n \n\n\n\n\n\n\n\n\n\n\n\n\n PRESS 0 TO RETURN TO MAIN MENU  ");
	scanf("%s",n);
	if(strcmp(n,"A")==0)
	{
		system("cls");
		user1(n);
		l++;
	}
	else if(strcmp(n,"B")==0)
			{
				system("cls");
				user1(n);
			}		
		else if(strcmp(n,"C")==0)
			{
				system("cls");
				adminl();
			}
			else if(strcmp(n,"0")==0)
				{
				system("cls");
				front();
				}
					else if((strcmp(n,"b")==0)||(strcmp(n,"a")==0)||(strcmp(n,"c")==0))
							{
								system("cls");
    							wrong1();
    							front1();
							}
						else
						{
							system("cls");
							wrong();
							front1();
						}
}
void user1(char d[])
 {
 int b=0,p,a=0;
 char r[10],ch;
  	 if(d[0]=='B')
 		{
			if((m=fopen("main.txt","rb"))==NULL)
   			{
   				printf("\t\t\t\t\t\t  NO USER REGISTERED!!!\n\n\n\n\n\n\n\n");
   				printf("PRESS 0 TO RETURN TO PREVIOUS MENU\n");
   				scanf("%s",r);
   					if(r[0]==48)
   					{
  						system("cls");
      					front1();
   					}
					else
   					{
   						wrong();
   						user1(d);
   					}
    		}
   			printf("\n\n\n\n\n\t\t\t FOR RETURN TO PREVIOUS MENU TYPE 0 IN USERNAME\n\n");
			printf("\t\t\t\t\t\tUSER LOGIN\n\n");
   			printf("\t\t\tUSERNAME:");
   			scanf ("%s",e);
   			 if(e[0]=='0'&&e[1]==NULL)
          {system("cls");
          front1();
		  }
   			printf("\t\t\t");
   			printf("PASSWORD:");
   			int p=0;
   			do{ 
        t[p]=getch(); 
        if(t[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(t[p-1]!='\r'); 
    t[p-1]='\0'; 
   		    while(fread(&user,sizeof(user),1,m)==1)
   			{	
	   			if(strcmp(user.rollno,e)==0)
	 			{
					a++;
						if(strcmp(user.pass,t)==0)
						{
							b++;
							system("cls");
							fclose(m);
	        				granted();
	    				}	
     			}	 
   			}
    		if(a==0||b==0)
    		{
    			system("cls");
				printf("\n\n\n\n\t\t\t\t\tA C C E S S    D E N I E D\n\nPRESS 1 TO CONTINUE \n\nPRESS 0 TO RETURN MAIN MENU\n");
     			scanf("%s",r);
     			if(r[0]==49)
		 		{
	 				system("cls");
	  				user1(n);
		 		}
	    		else
	     		{
		 			system("cls");
	  	 			front1();
		 		}
    		}
		}
		else
  		{
			system("cls");
			take();
			system("cls");
			front1();
	  	 }
}
void take()
{
    int i,p=0;
    char ch[04];
    m=fopen("main.txt","ab");
	printf("\t\t\t\t\tPLEASE ENTER THE DETAILS:\n");
	name();
    strncat(user.pass,user.bg,1);
	if(c==1)
	 strcat(user.pass,"jan");
    if(c==2)
	 strcat(user.pass,"feb");
    if(c==3)
	 strcat(user.pass,"mar");
    if(c==4)
	 strcat(user.pass,"apr");
    if(c==5)
	 strcat(user.pass,"may");
    if(c==6)
	 strcat(user.pass,"jun");
    if(c==7)
	 strcat(user.pass,"jul");
    if(c==8)
	 strcat(user.pass,"aug");
    if(c==9)
	 strcat(user.pass,"sep");
    if(c==10)
	 strcat(user.pass,"oct");
    if(c==11)
	 strcat(user.pass,"nov");
    if(c==12)
	 strcat(user.pass,"dec");
	 strncat(user.pass,user.dd,3);
	for(i=0;i<10;i++)
	{
		if(i>6)
		{
			fflush(stdin);
			ch[p]=user.mobile[i];
		    p++;
		 }
    }
	strncat(user.pass,ch,3);
	fwrite(&user,sizeof(user),1,m);
    fclose(m);
}
void name()
	{
		printf("\nENTER THE NAME:-\n");
		fflush(stdin);
		scanf("%[^\n]",user.name);
		for(i=0;i<=strlen(user.name);i++)
		{
	   		if((user.name[i]>32 && user.name[i]<=64)||(user.name[i]>=92&& user.name[i]<=96)||(user.name[i]>=123 && user.name[i]<=255))
	   		{
	   			system("cls");
	   			printf("\t\t\t\t\tPLEASE ENTER CORRECT NAME \n");
	   			name();
	   		}
     	}
	   roll();
	   fflush(stdin);
	}
void roll()
	{
       	printf("\nENTER THE ROLL NO.:-\n");
		scanf("%s",user.rollno);
			
		check(user.rollno);
		for(i=0;i<strlen(user.rollno);i++)
		{
	   		if((strlen(user.rollno)!=9)||(user.rollno[i]>=32 && user.rollno[i]<=47)||(user.rollno[i]>=58&& user.rollno[i]<=255))
	   		{
	   			system("cls");
	   			printf("\t\t\t\t\tPLEASE ENTER CORRECT ROLL NO. \n");
	   			name1();
				roll();
	   		}
	   	}
		if(user.rollno[0]==50 && user.rollno[1]==48 && user.rollno[2]==53 && user.rollno[3]==49 && user.rollno[4]==49 )			
		{   
		strcpy(user.user2,user.rollno);
		fflush(stdin);
		date();
	}
		else
		{    system("cls");
			    printf("\t\t\t\t\tPLEASE ENTER CORRECT ROLL NO. \n");
			    printf("NOT A STUDENT OF CA\n");
		        front1();
			
		}
		fflush(stdin);
		}
    
void date()
    {
		printf("\nENTER THE DATE OF BIRTH:-\n");
		printf("\nENTER DATE(dd)\n");
		scanf("%s",user.dd);
		fflush(stdin);
	   if((user.dd[0]==51)&&(user.dd[1]>=48 && user.dd[1]<=49))	
	      		month();
	   		else if((user.dd[0]==50)&&(user.dd[1]>=48 && user.dd[1]<=57)&&user.dd[2]==NULL)
	   				month();
	   				else if((user.dd[0]==49)&&(user.dd[1]>=48 && user.dd[1]<=57)&&user.dd[2]==NULL)
	     					month();
	   						else if((user.dd[0]==48)&&(user.dd[1]>=49 && user.dd[1]<=57)&&user.dd[2]==NULL)
	   								month();
	   								else if((user.dd[0]>=49)&&(user.dd[1]==NULL))
	        								month();	
											else
	   											{
	   												system("cls");
													printf("\t\t\t\t\tPLEASE ENTER CORRECT DATE \n");
	   												name1();
													roll1();
													date();
	   											}
	   											fflush(stdin);
	}
void month()
{
	printf("\nENTER MONTH(mm/m)\n");
	scanf("%s",user.mm);	
	  if((strcmp(user.mm,"01")==0)||(strcmp(user.mm,"1")==0))	
	 {
	    c=1; 
		year();
	 }
	 else if((strcmp(user.mm,"02")==0)||(strcmp(user.mm,"2")==0))
	 {
	    c=2;
	    year();
	 }
	 else if((strcmp(user.mm,"03")==0)||(strcmp(user.mm,"3")==0))
	 {
	    c=3;
	 	year();
	 }
	 else if((strcmp(user.mm,"04")==0) ||(strcmp(user.mm,"4")==0))
     {
		c=4;
		year();
	 } else if((strcmp(user.mm,"05")==0)||(strcmp(user.mm,"5")==0))
	 {
	    c=5;
	    year();
	 }
	 else if((strcmp(user.mm,"06")==0)||(strcmp(user.mm,"6")==0))
	 {
		c=6; 
		year();
	 }
	 else if((strcmp(user.mm,"07")==0)||(strcmp(user.mm,"7")==0))
	 { 
	    c=7;
	    year();
     } else if((strcmp(user.mm,"08")==0)||(strcmp(user.mm,"8")==0))
	 {
	    c=8;
    	year();
	 }
	  else if((strcmp(user.mm,"09")==0)||(strcmp(user.mm,"9")==0))
	 {
	    c=9;
	    year();
	 }else if((strcmp(user.mm,"10")==0))
     {
	   c=10;
       year();
     } 
	 else if((strcmp(user.mm,"11")==0))
	 {
	   c=11;
   	   year();
     }	
      else if((strcmp(user.mm,"12")==0))
	 {
	   c=12;
   	   year();
     }	
	   else
	 {
	    system("cls");
        printf("\t\t\t\t\tPLEASE ENTER CORRECT MONTH \n");
	   	name1();
		roll1();
		date1();
		month();
	  }
	  fflush(stdin);
}

void year()
 {
 	int x;
     printf("\nENTER YEAR(1911-2019) \n");
	 scanf("%s",user.yy);
	 for(i=0;i<strlen(user.yy);i++)
	 {
	   if((user.yy[i]>=32 && user.yy[i]<=47)||(user.yy[i]>=58&& user.yy[i]<=255))
	   {
	   	system("cls");
	   	printf("\t\t\t\t\tPLEASE ENTER CORRECT YEAR \n");
	   	name1();
		roll1();
		date1();
		month1();
		year();
	   }
	   else if((user.yy[0]==49)||(user.yy[0]==50))
	   {
	   	 if((user.yy[0]==49)&&(user.yy[1]==57)&&(user.yy[2]>=49 && user.yy[2]<=57)&&(user.yy[3]>=49 && user.yy[2]<=57))
	   		{
				bg();
		}
	   	 else if((user.yy[0]==50)&&(user.yy[1]==48)&&((user.yy[2]==49)||(user.yy[2]==48))&&(user.yy[3]>=48 && user.yy[3]<=57))
		     {
			bg();
		}
		      else
		      {
		         system("cls");
	   			 printf("\t\t\t\t\tPLEASE ENTER CORRECT YEAR \n");
	   			 name1();
				 roll1();
				 date();
	   		   }		
	   }
	   else
	   {
	      system("cls");
	   	  printf("\t\t\t\t\tPLEASE ENTER CORRECT YEAR \n");
	   	  name1();
		  roll1();
		  date1();
		  month1();
		  year();
	   }
    }
    fflush(stdin);
}
void bg()
{
	printf("\nENTER BLOOD GROUP(xx/x +/-)\n");
	scanf("%s",user.bg);
	for(i=0;i<2;i++)
	{
	  if(user.bg[i]>=97&&user.bg[i]<=122)
	  user.bg[i]-=32;
	} if((strcmp(user.bg,"B+")==0)||(strcmp(user.bg,"B-")==0)||(strcmp(user.bg,"AB+")==0)||(strcmp(user.bg,"AB-")==0)||(strcmp(user.bg,"O+")==0)||(strcmp(user.bg,"O-")==0)||(strcmp(user.bg,"A+")==0)||(strcmp(user.bg,"A-")==0))
	   	gender();
	   	else
	   	{
		   
	   	system("cls");
	   	printf("\t\t\t\t\tPLEASE ENTER CORRECT BLOOD GROUP \n");
	   	name1();
	   	roll1();
	   	date1();
	   	month1();
	   	year1();
		bg();
	   }
	fflush(stdin);
}
void gender()
{
	printf("\nENTER THE GENDER(M/F)\n");
	scanf("%s",user.g);
	for(i=0;i<strlen(user.g);i++)
	{
		if(user.g[i]>=65 && user.g[i]<=90)
		  user.g[i]=user.g[i]+32;
	}
	if((strcmp(user.g,"m")==0)||(strcmp(user.g,"f")==0)||(strcmp(user.g,"M")==0)||(strcmp(user.g,"F")==0))
	  mail();
	else
	 {
	 	system("cls");
	 	printf("\t\t\t\t\tPLEASE ENTER CORRECT GENDER \n");;
	   	name1();
		roll1();
		date1();
		month1();
		year1();
		bg1();
        gender(); 	 
	}
	fflush(stdin);
}
void mail()
{	
int l,i,c=0,t=0;
char ch[10];
printf("\nENTER THE MAIL ID\n");
	scanf("%s",user.mail);
	
	l=strlen(user.mail);
	if((user.mail[0]>=65 && user.mail[0]<=90)||(user.mail[0]>=97 && user.mail[0]<=122) || (user.mail[0]>=48 && user.mail[0]<=57))
	{
		for(i=0;i<l;i++)
		{
		if(user.mail[i]==64)
	        c++;
      		if((user.mail[i]>=65 && user.mail[i]<=90)||(user.mail[i]>=97 && user.mail[i]<=122)||(user.mail[i]==95)||(user.mail[i]>=48 && user.mail[i]<=57)|| (user.mail[i]==46 )||(user.mail[i]==64))
	      		continue;
			else
		 		mail2();
    	}
    }
    else
    mail2();
	for(i=l-1;i>=l-4;i--)
		ch[t++]=user.mail[i];
		if(c==1)
		{
		if((strcmp(ch,"moc.")==0)||(strcmp(ch,"ni.")==0)||(strcmp(ch,"MOC.")==0)||(strcmp(ch,"NI.")==0))
			mob();
		else 
			mail2();
		}
	    else
	    	mail2();
	    	fflush(stdin);
}
void mail2()
{
		    system("cls");
			printf("\t\t\t\t\tPLEASE ENTER CORRECT MAIL ID \n");
			name1();
			roll1();
			date1();
			month1();
			year1();
			bg1();
			gender1();
			mail();
}
void mob()	
{
    printf("\nENTER THE MOBILE NO.\n");
	scanf("%s",user.mobile);
		if(strlen(user.mobile)<10)
	   	{
	   		system("cls");
	   	    printf("\t\t\t\t\tPLEASE ENTER CORRECT MOBILE NO. \n");
	   	    name1();
			roll1();
			date1();
			month1();
			year1();
			bg1();
			gender1();
			mail1();
			mob();
	   }
	   else
	   {
	   	for(i=0;i<strlen(user.mobile);i++)
	   	 {
	   	 	if((user.mobile[i]<48)||(user.mobile[i]>57))
			{
				system("cls");
	   	        printf("\t\t\t\t\tPLEASE ENTER CORRECT MOBILE NO. \n");
	   	        name1();
			    roll1();
			    date1();
			    month1();
			    year1();
			    bg1();
			    gender1();
			    mail1();
			    mob();
			}
	    }
	  }
	  fflush(stdin);
}
void showi(char e[])
{
	char w[4],ch;
	m=fopen("main.txt","rb+");
	while(fread(&user,sizeof(user),1,m)>0)
	{
	   if(strcmp(user.rollno,e)==0)
	{
		
        printf("N A M E -                                 %s\n\n",user.name);
		printf("R O L L  N O -                            %s\n\n",user.rollno);
		if((user.g[0]=='m')||(user.g[0]=='M'))
		strcpy(user.g,"Male");
		else
		strcpy(user.g,"Female");
		printf("G E N D E R -                             %s\n\n",user.g);
		printf("M O B I L E  N O. -                       %s\n\n",user.mobile);
		printf("D A T E  O F  B I R TH  -                 %s/%s/%s\n\n",user.dd,user.mm,user.yy);
		printf("M A I L  I D -                            %s\n\n",user.mail);
		if(user.rollno[5]==57)
		printf(" YOU ARE A FIRST YEAR STUDENT\n");
		else if(user.rollno[5]==56)
		printf(" YOU ARE A SECOND YEAR STUDENT \n");
		else if(user.rollno[5]==55)
		printf(" YOU ARE A THIRD YEAR STUDENT \n");
        printf("\n\n\n\n\n\nFOR FURTHER DETAIL: PRESS 1 \n TO RETURN TO LOGIN PAGE : PRESS 0\n TO RETURN MAIN MENU : PRESS 100\n");
        scanf("%s",w);
         if(w[0]==49&&w[1]==NULL)
	    { 
	     system("cls");
	     fclose(m);
	     front2();
		}
	    else if(w[0]==48&&w[1]==NULL)
	    {
		system("cls"); 
		n[0]=66;
		fclose(m);
		user1(n);
	    }
		else if(w[0]==49&&w[1]==48&&w[2]==48)
	    {
		system("cls"); 
		fclose(m);
		front();
	    }
		else
	    {
		system("cls");
	    wrong();
	    fclose(m);
	    showi(e);
		}     
    }   
}
}
void front2()
{
	 char k[4]; 
	 
     printf("\n                        ----------------------------------------------------\n");
     printf("                        |    W E L C O M E   T O    D A T A    W O R L D   |\n");
     printf("                        ----------------------------------------------------\n");
	 printf("\n\n\nTHIS IS YOUR SYLLABUS SELECT THIER RESPECTIVES TO PROCEED-:\n\n\n1.COMPUTER ARCHITECTURE AND ORGANIZATION\n\n2.DATA STRUCTURES AND ALGORITHMS\n\n3.MATHEMATICAL FOUNDATION OF COMPUTER SCIENCE\n\n4.PROBABILITY AND STATISTICS\n\n5.ACCOUNTANCY AND FINANCIAL MANAGEMENT\n\n\n\n\n\nPRESS 0 TO LOGOUT\nPRESS 10 TO EXIT\n\n\n");
     scanf("%s",k);	
	 system("cls");
	 front3(k); 
}
  void front3(char k[])
  {
         char r1[4],s[]={'B'};
		  if(k[0]==49&&k[1]==NULL)
          {
        	 
        	 printf("\n\n\n 1. ->digital_design-__morris_mano-fifth_edition.pdf\n\nPRESS 0 RETURN BACK\n\n");
        	 scanf("%s",r1);
		     if(r1[0]==49 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1KUkiM9P2UDBQZc2BxNb--nK2lbEJJJgQ");}
		     else if(r1[0]==48 && r1[1]==NULL)
		     {system("cls");
		     front2();}
		     else
			 {system("cls");
		     wrong();
		     front3(k);}
			 system("cls");
	         down(k);
     }
		    else if(k[0]==50&&k[1]==NULL)
          {
        	 
        	 printf("\n\n\n1.->Algorithms_and_Pseudocode.pptx\n\n2.->D S & ALGO-back pages-ICE.pdf\n\n3.->DATA STRUCTURES & APPLICATIONS.pdf\n\n4.->ds pseudo code.pdf\nPRESS 0 RETURN BACK\n\n\n");
        	 scanf("%s",r1);
		     if(r1[0]==49 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1PNaG5XYQVlruyo0a45E_EAZTN_Ox-0j1");}
			 else if(r1[0]==50 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1v09wFom7-sMY6g5a4MYfuhb_GxQMxKNB	");}
			 else if(r1[0]==51 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1zH1fk1ujaJd9N9DD0PQz1vDSMJygyd-o");}
			  else if(r1[0]==52 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1QM9zrPw99AAg-RIuPGiA3ODIJ8pP7w-R");}
			 else if(r1[0]==48 && r1[1]==NULL)
			 {system("cls");
		     front2();}
             else
			 {system("cls");
		     wrong();
		     front3(k);}
			 system("cls");
	         down(k);
	      }
	       else if(k[0]==51&&k[1]==NULL)
          {
        	 system("cls");
        	 printf("\n\n\n->PRESS 0 RETURN BACK\n\n\n");
        	 scanf("%s",r1);
		     if(r1[0]==49 && r1[1]==NULL)
			 {system("cls");
		     system("");}
			 else if(r1[0]==48 && r1[1]==NULL)
			 {system("cls");
		     front2();}
            else
			 {system("cls");
		     wrong();
		     front3(k);}
			 system("cls");
	         down(k);
	      }
	       else if(k[0]==52&&k[1]==NULL)
          {
        	 
        	 printf("\n\n\n1.->Discrete_Probability_distributions_domnic.ppt\n\n2.->Lecture_3_Continous_Probability_Distributions_2019.pptx\n\n3.->Lecture_4_Multivariate_Distributions_Domnic.ppt\n\n4.->Probability_Domnic_2019.ppt\n\n5.->UNIT1.pdf\n\n6.->unit2.pdf\n\nPRESS 0 RETURN BACK\n\n\n");
        	 scanf("%s",r1);
		     if(r1[0]==49 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1CGRl0WofAEYOz0YgrE7aHUYTgxDQc1MO");}
			 else if(r1[0]==50 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1EwlhM7GdzjBTPB18RoTsBkFSHyDkue6I");}
			 else if(r1[0]==51 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 10JiuCRn1rrb2MTsPKTnIo5i14Gxv_4Eb");}
			 else if(r1[0]==52 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 11Hecr_0JMK9mIDiKLqMjDxbkmgBWanO8");}
		     else if(r1[0]==53 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1Oa-shIFYBr88PD0CiV6E8pXUF_pLyRyF");}
		     else if(r1[0]==54 && r1[1]==NULL)
			 {system("cls");
		     system("gdrive-windows-x64.exe download 1mK1oaGvwluk8uMHEJ6IWIujG7gNnQ2CH");}
			 else if(r1[0]==48 && r1[1]==NULL)
			 {system("cls");
		     front2();}
            else
			 {system("cls");
		     wrong();
		     front3(k);}
			 system("cls");
	         down(k);
	      }
	       else if(k[0]==53&&k[1]==NULL)
          {
        	
        	 printf("\n\n\1.->ACCOUNTING FOR MANAGERS Text Book.pdf\n\n2.->AFM Unit 1 - 19-20.pptx\n\nPRESS 0 RETURN BACK\n\n\n");
        	 scanf("%s",r1);
		     if(r1[0]==49 && r1[1]==NULL)
			 {system("cls");
		     system("");}
			 else if(r1[0]==50 && r1[1]==NULL)
			 {system("cls");
		     system("");}
			 else if(r1[0]==48 && r1[1]==NULL)
			 {system("cls");
		     front2();}
            else
			 {system("cls");
		     wrong();
		     front3(k);}
			 system("cls");
	         down(k);
	      }
	       else if(k[0]==48&&k[1]==NULL)
          {system("cls");
            user1(s);}
           else if(k[0]==49&&k[1]==48&&k[2]==NULL)
           exit(1);
		  else 
		  {system("cls");
		  wrong();
		  front2();
		  }
}
void down(char k[])
{
	char r[4];
	printf("\n\n\n\n\t\t\t\t\t FILE DOWNLOADED \n\n\n\n\n\n\n\nPATH ->Main Folder Of Your Project\n\n\n\n\n\n\nPRESS 0 TO RETURN BACK\n");
             scanf("%s",r);
             if(r[0]==48&&r[1]==NULL)
             {system("cls");
			 front3(k);
             }else{system("cls");
             wrong();
             down(k);
}
}
void adminl()
{
int a=0,b=0,k,b1,f;
char h[10],r[4];
	 printf("\n\n\n\n\n\t\t\t");
   printf("\t\t\tADMIN LOGIN\n\n");
   printf("\t\t\tUSERNAME:");
   scanf ("%s",e);
   printf("\t\t\t");
   printf("PASSWORD:");
   int p=0;
   do{ 
        t[p]=getch(); 
        if(t[p]!='\r'){ 
            printf("*"); 
        } 
        p++; 
    }while(t[p-1]!='\r'); 
    t[p-1]='\0'; 
	   if(strcmp(e,"123")==0)
	  {
		a++;
		if(strcmp(t,"123")==0)
		{
			b++;
		  system("cls");
		  b1:
	     printf("\n\n\n\n\t\t\t\t\tA C C E S S    G R A N T E D\n\n\n\n\n\n\n\n\n\n\n\n\n\nPRESS 1 TO CONTINUE\nPRESS 10 TO LOGOUT\nPRESS 0 TO RETURN MAIN MENU\n");
	     scanf("%s",h);
	 if(h[0]==49&&h[1]==NULL) {
	 		system("cls");
	admin();
	         }
	 else if(h[0]==48&&h[1]==NULL) 
	 {
	 	system("cls");
	 	front();
	 }
	 else if(h[0]==49&&h[1]==48&&h[2]==NULL)
	 {
	 	system("cls");
	 	adminl();
	 }
	 else 
	 {  
	    wrong();
	    goto b1;
}
	 }
}
if(a==0||b==0)
    {
    	system("cls");
		f:
    	
	printf("\n\n\n\n\t\t\t\t\tA C C E S S    D E N I E D\n\nPRESS 1 TO CONTINUE \n\nPRESS 0 TO RETURN MAIN MENU\n");
     scanf("%s",r);
     if(r[0]=='1'&&r[1]==NULL){
	 system("cls");
	  adminl();}
	  else if(r[0]=='0'&&r[1]==NULL)
	  {
	  	system("cls");
	  	front();
	  }
	  else
	  {system("cls");
	  wrong();
	  goto f;}
    }
}
void admin()
{    
int c1=1,p1,c2=1,f;
char k[3];
l=0;
system("cls");
m=fopen("main.txt","rb+");
	while(fread(&user,sizeof(user),1,m)>0)
	{
		l++;
	}
	f:
 if(l==1)
printf("\n->TOTAL NO. OF USER IS :- %d\n",l);
else
printf("\n->TOTAL NO. OF USER ARE :- %d\n",l);

printf("\n\n\n\nPRESS 1 TO SHOW THE DETAILS OF EACH USER\n PRESS 3 TO UPLOAD\n PRESS 0 TO LOGOUT \n");
scanf("%s",k);
if(k[0]=='1'&&k[1]==NULL)
{
	system("cls");
	fseek(m, 0, SEEK_SET);
	while(fread(&user,sizeof(user),1,m)>0)
	{
	   printf("%d.%s\n",c1++,user.rollno);
}
system("cls");
show1();
}
else if(k[0]=='0'&&k[1]==NULL)
{
	system("cls");
	adminl();
}
else if(k[0]=='3'&&k[1]==NULL)
{
	system("cls");
	system("explorer https://drive.google.com/drive/u/2/my-drive");
	admin();
}
else{
wrong();
goto f;}
}

void show1()
{
	int c1=1,c2=1,i=0,p1;
	
	fseek(m, 0, SEEK_SET);
	while(fread(&user,sizeof(user),1,m)>0)
	{
	   printf("%d.%s\n",c1++,user.rollno);
}

printf("\n\n\n\n\n FOR FURTHER DETAIL PRESS THIER RESPECTIVE \n PRESS 0 TO RETURN \n");
scanf("%d",&p1);
if(p1==0)
admin();
fseek(m, 0, SEEK_SET);
	while(fread(&user,sizeof(user),1,m)>0)
	{ 
	    if(c2==p1)
	    { i++;
		char v[10];
		strcpy(v,user.rollno);
		system("cls");
		 showa(v);
	}
c2++;
}
if(i==0)
{
wrong();
show1();
}
fclose(m);
}	

void showa(char v[])
{
char w[3];
	m=fopen("main.txt","rb+");
	
	while(fread(&user,sizeof(user),1,m)>0)
	{
		
	   if(strcmp(user.rollno,v)==0)
	{
		
	    printf("N A M E -                                 %s\n\n",user.name);
		printf("R O L L  N O -                            %s\n\n",user.rollno);
		if((user.g[0]=='m')||(user.g[0]=='M'))
		strcpy(user.g,"Male");
		else
		strcpy(user.g,"Female");
		printf("G E N D E R -                             %s\n\n",user.g);
		printf("M O B I L E  N O. -                       %s\n\n",user.mobile);
		printf("D A T E  O F  B I R TH  -                 %s/%s/%s\n\n",user.dd,user.mm,user.yy);
		printf("M A I L  I D -                            %s\n\n",user.mail);
		
		printf("\n\n");
     printf(" RETURN : PRESS 0 \n TO RETURN MAIN MENU : PRESS 10\n");
      scanf("%s",w);
	   if(w[0]=='0'&&w[1]==NULL)
	  {system("cls"); show1();
	    
	  }else if(w[0]=='1'&&w[1]=='0'&&w[2]==NULL)
	  {system("cls"); front();
	  }else
	  {system("cls");
	  wrong();
	  fclose(m);
	  showa(v);
	  }     
    }   
}
}
