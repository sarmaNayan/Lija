#include<stdio.h>
char a[20],b[20],year[10],month[6],date[6];
	char ca[20],cb[20],cyear[10],cmonth[6],cdate[6],cupf[20],cupl[20];
	char pa[20],pb[20],pyear[10],pmonth[6],pdate[6],pupf[20],pupl[20];
	int q1,q2;int i;
	char smal[20],csmal[20],csmale[20],psmal[20],psmale[20];
	
	char Bpg(){
//Boyfrind/girlfrind/wife/Husband info
 
	 printf("Enter your target Boyfrind/girlfrind/wife/Husband 1st name:- \n");
	 printf("Lija> ");
scanf("%s",&ca);
printf("Enter your Boyfrind/girlfrind/wife/Husband terget last name:- \n");
printf("Lija> ");
scanf("%s",&cb);
printf("Enter your target Boyfrind/girlfrind/wife/Husband 1st name in Uppercase. Ex - LIJA\n");
printf("Lija> ");
scanf("%s",&cupf);
printf("Enter your target Boyfrind/girlfrind/wife/Husband last name in Uppercase. Ex - SARMA\n");
printf("Lija> ");
scanf("%s",&cupl);
printf("Enter your terget Boyfrind/girlfrind/wife/Husband Birth year. Ex - 2003 :- \n");
printf("Lija> ");
scanf("%s",&cyear);
printf("Enter your terget Boyfrind/girlfrind/wife/Husband Birth of month. Ex - 5 :- \n");
printf("Lija> ");
scanf("%s",&cmonth);
printf("Enter your terget Boyfrind/girlfrind/wife/Husband Birth Date. Ex - 1 :-\n");
printf("Lija> ");
scanf("%s",&cdate);

//small

for(i=0;cupf[i] !='\0';i++){
	if(cupf[i] >= 'A' && cupf[i]<= 'Z'){
	   csmal[i]=cupf[i]+32;}
                            }
for(i=0;cupl[i] !='\0';i++){
	if(cupl[i] >= 'A' && cupl[i]<= 'Z'){
	   csmale[i]=cupl[i]+32;}
                            }
                            }
	char children(){
		//Children info
printf("Enter your target Children 1st name:- \n");
printf("Lija> ");
scanf("%s",&pa);
printf("Enter your  terget Children last name:- \n");
printf("Lija> ");
scanf("%s",&pb);
printf("Enter your target Children  1st name in Uppercase. Ex - LIJA\n");
printf("Lija> ");
scanf("%s",&pupf);
printf("Enter your target  Children  last name in Uppercase. Ex - SARMA\n");
printf("Lija> ");
scanf("%s",&pupl);
printf("Enter your  terget Children Birth year. Ex - 2003 :- \n");
printf("Lija> ");
scanf("%s",&pyear);
printf("Enter your  terget Children Birth of month. Ex - 5 :- \n");
printf("Lija> ");
scanf("%s",&pmonth);
printf("Enter your terget Children Birth Date. Ex - 1 :-\n");
printf("Lija> ");
scanf("%s",&pdate);
//small

for(i=0;pupf[i] !='\0';i++){
	if(pupf[i] >= 'A' && pupf[i]<= 'Z'){
	   psmal[i]=pupf[i]+32;}
                            }
for(i=0;pupl[i] !='\0';i++){
	if(pupl[i] >= 'A' && pupl[i]<= 'Z'){
	   psmale[i]=pupl[i]+32;}
                            }
	}
	char Bpgf(){
		//husban bf gf
printf("%s\n",csmal);
printf("%s\n",csmale);
printf("%s\n",ca);
printf("%s\n",cb);
printf("%s %s\n",csmal,csmale);
printf("%s%s\n",csmal,csmale);
printf("%s\n",cupf);
printf("%s\n",cupl);
printf("%s %s\n",ca,cb);
printf("%s%s\n",ca,cb);
printf("%s %s\n",cupf,cupl);
printf("%s%s\n",cupf,cupl);
//year
printf("%s %s%s\n",csmal,csmale,cyear);
printf("%s %s %s\n",csmal,csmale,cyear);
printf("%s%s%s\n",csmal,csmale,cyear);

printf("%s %s%s\n",cupf,cupl,cyear);
printf("%s %s %s\n",cupf,cupl,cyear);
printf("%s%s%s\n",cupf,cupl,cyear);
printf("%s %s%s\n",ca,cb,cyear);
printf("%s%S%S\n",ca,cb,cyear);
printf("%s %s %s\n",ca,cb,cyear);
//month
printf("%s%s%s\n",csmal,csmale,cmonth);
printf("%s %s %s\n",csmal,csmale,cmonth);
printf("%s %s%s\n",csmal,csmale,cmonth);
printf("%s %s%s\n",cupf,cupl,cmonth);
printf("%s %s %s\n",cupf,cupl,cmonth);
printf("%s%s%s\n",cupf,cupl,cmonth);
printf("%s %s%s\n",ca,cb,cmonth);
printf("%s%s%s\n",ca,cb,cmonth);
printf("%s %s %s\n",ca,cb,cmonth);
//Date
printf("%s%s%s\n",csmal,csmale,cdate);
printf("%s %s %s\n",csmal,csmale,cdate);
printf("%s %s%s\n",csmal,csmale,cdate);
printf("%s %s%s\n",cupf,cupl,cdate);
printf("%s %s %s\n",cupf,cupl,cdate);
printf("%s%s%s\n",cupf,cupl,cdate);
printf("%s %s%s\n",ca,cb,cdate);
printf("%s%s%s\n",ca,cb,cdate);
printf("%s %s %s\n",ca,cb,cdate);
//year+month
printf("%s%s%s%s\n",csmal,csmale,cyear,cmonth);
printf("%s% s%s%s\n",csmal,csmale,cyear,cmonth);
printf("%s %s %s %s\n",csmal,csmale,cyear,cmonth);
printf("%s %s%s%s\n",cupf,cupl,cyear,cmonth);
printf("%s %s %s %s\n",cupf,cupl,cyear,cmonth);
printf("%s%s%s%s\n",cupf,cupl,cyear,cmonth);
printf("%s %s%s%s\n",ca,cb,cyear,cmonth);
printf("%s%s%s%s\n",ca,cb,cyear,cmonth);
printf("%s %s %s %s\n",ca,cb,cyear,cmonth);
//year+month+date
printf("%s%s%s%s%s\n",csmal,csmale,cyear,cmonth,cdate);
printf("%s %s %s %s %s\n",csmal,csmale,cyear,cmonth,cdate);
printf("%s %s%s%s%s\n",csmal,csmale,cyear,cmonth,cdate);
printf("%s %s%s%s%s\n",cupf,cupl,cyear,cmonth,cdate);
printf("%s %s %s %s %s\n",cupf,cupl,cyear,cmonth,cdate);
printf("%s%s%s%s%s\n",cupf,cupl,cyear,cmonth,cdate);
printf("%s %s%s%s%s\n",ca,cb,cyear,cmonth,cdate);
printf("%s%s%s%s%s\n",ca,cb,cyear,cmonth,cdate);
printf("%s %s %s %s %s\n",ca,cb,cyear,cmonth,cdate);
	}
	char childrenr(){
		//children 
printf("%s\n",psmal);
printf("%s\n",psmale);
printf("%s\n",pa);
printf("%s\n",pb);
printf("%s %s\n",psmal,psmale);
printf("%s%s\n",psmal,psmale);
printf("%s\n",pupf);
printf("%s\n",pupl);
printf("%s %s\n",pupf,pupl);
printf("%s%s\n",pupf,pupl);
printf("%s %s\n",pa,pb);
printf("%s%s\n",pa,pb);
//year
printf("%s %s%s\n",psmal,psmale,pyear);
printf("%s %s %s\n",psmal,psmale,pyear);
printf("%s%s%s\n",psmal,psmale,pyear);

printf("%s %s%s\n",pupf,pupl,pyear);
printf("%s %s %s\n",pupf,pupl,pyear);
printf("%s%s%s\n",pupf,pupl,pyear);
printf("%s %s%s\n",pa,pb,pyear);
printf("%s%S%S\n",pa,pb,pyear);
printf("%s %s %s\n",pa,pb,pyear);
//month
printf("%s%s%s\n",psmal,psmale,pmonth);
printf("%s %s %s\n",psmal,psmale,pmonth);
printf("%s %s%s\n",psmal,psmale,pmonth);
printf("%s %s%s\n",pupf,pupl,pmonth);
printf("%s %s %s\n",pupf,pupl,pmonth);
printf("%s%s%s\n",pupf,pupl,pmonth);
printf("%s %s%s\n",pa,pb,pmonth);
printf("%s%s%s\n",pa,pb,pmonth);
printf("%s %s %s\n",pa,pb,pmonth);
//Date
printf("%s%s%s\n",psmal,psmale,pdate);
printf("%s %s %s\n",psmal,psmale,pdate);
printf("%s %s%s\n",psmal,psmale,pdate);
printf("%s %s%s\n",pupf,pupl,pdate);
printf("%s %s %s\n",pupf,pupl,pdate);
printf("%s%s%s\n",pupf,pupl,pdate);
printf("%s %s%s\n",pa,pb,pdate);
printf("%s%s%s\n",pa,pb,pdate);
printf("%s %s %s\n",pa,pb,pdate);
//year+month
printf("%s%s%s%s\n",psmal,psmale,pyear,pmonth);
printf("%s% s%s%s\n",psmal,psmale,pyear,pmonth);
printf("%s %s %s %s\n",psmal,psmale,pyear,pmonth);
printf("%s %s%s%s\n",pupf,pupl,pyear,pmonth);
printf("%s %s %s %s\n",pupf,pupl,pyear,pmonth);
printf("%s%s%s%s\n",pupf,pupl,pyear,pmonth);
printf("%s %s%s%s\n",pa,pb,pyear,pmonth);
printf("%s%s%s%s\n",pa,pb,pyear,pmonth);
printf("%s %s %s %s\n",pa,pb,pyear,pmonth);
//year+month+date
printf("%s%s%s%s%s\n",psmal,psmale,pyear,pmonth,pdate);
printf("%s %s %s %s %s\n",psmal,psmale,pyear,pmonth,pdate);
printf("%s %s%s%s%s\n",psmal,psmale,pyear,pmonth,pdate);
printf("%s %s%s%s%s\n",pupf,pupl,pyear,pmonth,pdate);
printf("%s %s %s %s %s\n",pupf,pupl,pyear,pmonth,pdate);
printf("%s%s%s%s%s\n",pupf,pupl,pyear,pmonth,pdate);
printf("%s %s%s%s%s\n",pa,pb,pyear,pmonth,pdate);
printf("%s%s%s%s%s\n",pa,pb,pyear,pmonth,pdate);
printf("%s %s %s %s %s\n",pa,pb,pyear,pmonth,pdate);

	}
int main(){
	
	char upf[20],upl[20],smale[20];
	printf("..............................................");
printf("\nThis tool is made by Nayan sarma\n");
        printf(".............................................\n");
        printf(" _     _  _           \n");  
printf("| |   (_)(_) __ _   \n"); 
printf("| |   | || |/ _` |  \n");
printf("| |___| || | (_| |  \n");
printf("|_____|_|/ |\\__,_|  \n");
printf("       |__/         \n");

printf("start..................\n");
        
printf("Enter your target 1st name:- \n");
printf("Lija> ");
scanf("%s",&a);

printf("Enter your terget last name:- \n");
printf("Lija> ");
scanf("%s",&b);
printf("Enter your target 1st name in Uppercase. Ex - LIJA\n");
printf("Lija> ");
scanf("%s",&upf);
printf("Enter your target last name in Uppercase. Ex - SARMA\n");
printf("Lija> ");
scanf("%s",&upl);
printf("Enter your terget Birth year. Ex - 2003 :- \n");
printf("Lija> ");
scanf("%s",&year);
printf("Enter your terget Birth of month. Ex - 5 :- \n");
printf("Lija> ");
scanf("%s",&month);
printf("Enter your terget Birth Date. Ex - 1 :-\n");
printf("Lija> ");
scanf("%s",&date);

//small

for(i=0;upf[i] !='\0';i++){
	if(upf[i] >= 'A' && upf[i]<= 'Z'){
	   smal[i]=upf[i]+32;}
                            }
for(i=0;upl[i] !='\0';i++){
	if(upl[i] >= 'A' && upl[i]<= 'Z'){
	   smale[i]=upl[i]+32;}
                            }
                            

//Boyfrind/girlfrind/wife/Husband info
printf("Do you want to enter your target //Boyfrind/girlfrind/wife/Husband info \n");
printf("Enter 1 for yes. 2 for no\n ");
scanf(" %d",&q1);
if(q1==2){
	printf(" ");
}
else{
 Bpg();
}
//Children info
printf("Do you want to enter your target Children info \n");
printf("Enter 1 for yes. 2 for no\n ");
scanf(" %d",&q2);
if(q2==2){
	printf(" ");
}
else{
 children();
}
//password genaration start...........

printf("password genaration start...........\n");
printf("%s\n",smal);
printf("%s\n",smale);
printf("%s\n",a);
printf("%s\n",b);
printf("%s %s\n",smal,smale);
printf("%s%s\n",smal,smale);
printf("%s\n",upf);
printf("%s\n",upl);
printf("%s %s\n",a,b);
printf("%s%s\n",a,b);
printf("%s %s\n",upf,upl);
printf("%s%s\n",upf,upl);

//year
printf("%s %s%s\n",smal,smale,year);
printf("%s %s %s\n",smal,smale,year);
printf("%s%s%s\n",smal,smale,year);
printf("%s %s%s\n",a,b,year);
printf("%s %s%s\n",upf,upl,year);
printf("%s %s %s\n",upf,upl,year);
printf("%s%s%s\n",upf,upl,year);
printf("%s%S%S\n",a,b,year);
printf("%s %s %s\n",a,b,year);
//month
printf("%s%s%s\n",smal,smale,month);
printf("%s %s %s\n",smal,smale,month);
printf("%s %s%s\n",smal,smale,month);
printf("%s %s%s\n",upf,upl,month);
printf("%s %s %s\n",upf,upl,month);
printf("%s%s%s\n",upf,upl,month);
printf("%s %s%s\n",a,b,month);
printf("%s%s%s\n",a,b,month);
printf("%s %s %s\n",a,b,month);
//Date
printf("%s%s%s\n",smal,smale,date);
printf("%s %s %s\n",smal,smale,date);
printf("%s %s%s\n",smal,smale,date);
printf("%s %s%s\n",upf,upl,date);
printf("%s %s %s\n",upf,upl,date);
printf("%s%s%s\n",upf,upl,date);
printf("%s %s%s\n",a,b,date);
printf("%s%s%s\n",a,b,date);
printf("%s %s %s\n",a,b,date);
//year+month
printf("%s%s%s%s\n",smal,smale,year,month);
printf("%s% s%s%s\n",smal,smale,year,month);
printf("%s %s %s %s\n",smal,smale,year,month);
printf("%s %s%s%s\n",upf,upl,year,month);
printf("%s %s %s %s\n",upf,upl,year,month);
printf("%s%s%s%s\n",upf,upl,year,month);
printf("%s %s%s%s\n",a,b,year,month);
printf("%s%s%s%s\n",a,b,year,month);
printf("%s %s %s %s\n",a,b,year,month);
//year+month+date
printf("%s%s%s%s%s\n",smal,smale,year,month,date);
printf("%s %s %s %s %s\n",smal,smale,year,month,date);
printf("%s %s%s%s%s\n",smal,smale,year,month,date);
printf("%s %s%s%s%s\n",upf,upl,year,month,date);
printf("%s %s %s %s %s\n",upf,upl,year,month,date);
printf("%s%s%s%s%s\n",upf,upl,year,month,date);
printf("%s %s%s%s%s\n",a,b,year,month,date);
printf("%s%s%s%s%s\n",a,b,year,month,date);
printf("%s %s %s %s %s\n",a,b,year,month,date);

//husban bf gf
if(q1==2){
	printf("");
}
else {
	Bpgf();
}
//children 
if(q2==2){
	printf("");
}
else{
	childrenr();
}
return 0;
}
