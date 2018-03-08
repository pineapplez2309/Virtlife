#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <climits>
using namespace std;
//event:7-14 (1-Extra classes 2-Fight with colleague)  15-18(1-Extra classes 2-Fight with colleague 3-Relationship 4-Drugs 5-Alcohol 6-Smoking 7-Party)
//event:19-35 (1-Fight with colleague/stranger 2-Relationship 3-Drugs 4-Alcohol 5-Smoking 6-Party 7-Job)
//event:36-50 (1-Fight 2-Relationship 3-Drugs 4-Alcohol 5-Smoking 6-Party 7-Job)
//event:51-64 (1-Relationship 2-Alcohol 3-Smoking 4-Job)
//event:65+ (1-Relationship 2-Alcohol 3-Smoking)
//Careers:1-musician 2-painter 3-criminal 4-sportsman
string bukire[100]= {"Oliver","George","Harry","Jack","Jacob","James"}; //6 ire,uk
string gukire[100]= {"Amelia","Olivia","Emily","Sophie","Jessica","Grace"};
string bscand[100]= {"William","Lucas","Liam","Aron","Alexander","Kristjan"}; //6 scandinavia - den,fin,ice,nor,swe
string gscand[100]= {"Emma","Nora","Sara","Margaret","Anna","Eva"};
string bweuro[100]= {"Ivan","Francesco","Lorenzo","Gabriel","Raphael","Luuk"}; //6 europa de vest - and,bel,fra,ita,mon,net,por,san,spa,swi
string gweuro[100]= {"Julia","Mila","Louise","Alice","Juliette","Ines"};
string bceuro[100]= {"Lukas","Nikola","Jan","Ben","Jonas","Andrei"}; //6 europe centrala - aus,bos,bul,cro,cze,ger,hun,lie,lux,mol,pol,rom,ser,slk,slo
string gceuro[100]= {"Mia","Hannah","Maria","Sara","Nika","Zuzana"};
string beeuro[100]= {"Alikhan","Ivan","Aleksander","Markuss","Artjoms","Maxim"}; //6 europa de est - alb,arm,aze,bel,cyp,est,geo,gre,kaz,kos,lat,lit,mac,mal,mon,rus,tur,ukr
string geeuro[100]= {"Ayaru","Sofia","Anastasia","Darya","Polina","Emilija"};
string sukire[100]= {"Smith","Murphy","Jackson"}; //3
string sscand[100]= {"Hansen","Andersson","Nielsen","Korhonen"}; //4
string sweuro[100]= {"Silva","Garcia","Martin","Rossi","de Jong","Peters","Dubois"}; //7
string sceuro[100]= {"Muller","Novak","Nagy","Horvat","Popa","Ivanov","Gruber","Karlauskas","Tamm"}; //9
string seeuro[100]= {"Popovic","Melnyk","Smirnov","Ivanovski","Ivanov","Yilmaz"}; //6
string countryc[100]= {"Albania","Andorra","Armenia","Austria","Azerbaijan","Belarus","Belgium","Bosnia Herzegovina","Bulgaria","Croatia","Cyprus","Czech Republic","Denmark","Estonia","Finland","France","Georgia","Germany","Greece","Hungary","Iceland","Ireland","Italy","Kazakhstan","Kosovo","Latvia","Liechtenstein","Lithuania","Luxembourg","Macedonia","Malta","Moldova","Monaco","Montenegro","Netherlands","Norway","Poland","Portugal","Romania","Russia","San Marino","Serbia","Slovakia","Slovenia","Spain","Sweden","Switzerland","Turkey","Ukraine","United Kingdom"};
string injuryc[100]= {"ACL injury","back pain","calf strain","fractured rib","hamstring strain","ankle sprain","concussion"};//7
string drugs[100]= {"Marijuana","LSD","Cocaine","Salvia","Ecstasy","Heroin","Ketamine"};
string alcohol[100]= {"white wine","red wine","tequila","whiskey","beer","cider","vermouth"};
string disease[100]= {"flu","intoxication","fever","cold","hepatitis","pneumonia","liver disease"};//7
string studyc[100]= {"Arts","Architecture","Biosciences","Computer science","Computing","Drama","Engineering","History","Journalism","Law","Literature","Maths","Medicine","Music","Sports science","Teaching"};
string company[100]= {"Media Arts","Nantendo Company","Mirste","Ek on omy","Pigna Industries","Eurocom Expansion","Quartz Games","Lindsay&King","InfoPro","Clarke Computing"}; //10
string carc1[100]= {"Audi","BMW","Chevrolet","Citroen","Dacia","Fiat","Ford","Honda","Hyundai","Kia","Mazda","Mercedes","Nissan","Opel","Peugeot","Renault","Skoda","Suzuki","Toyota","Volkswagen"}; //20
string carc2[100]= {"X5","Corvette","Fabia","Focus","C5","M8","H12","Fiesta","Duster","E3","X8","I2","C4","Class 8","Class 10","CX6","DW4","500","302","1300"};
string housec[100]= {"Apartment 1 bedroom 1 bathroom","Apartment 2 bedrooms 1 bathroom","Apartment 2 bedrooms 2 bathrooms","House 2 bedrooms 2 bathrooms","House 2 bedrooms 2 bathrooms garden","House 3 bedrooms 2 bathrooms","House 4 bedrooms 2 bathrooms garden","House 4 bedrooms 3 bathrooms garden","Luxury Villa","Luxury Villa by sea"};
string stdiseasec[100]= {"HIV/AIDS","Gonorrhea","Genital warts","Genital herpes","Syphilis","Chlamydia","Crabs","Hepatitis B"}; //8
string harddisease[100]= {"Lung cancer","Liver cancer","Alzheimer","Coronary heart disease","Leukemia","Pancreas cancer","Parkinson's disease","Skin cancer"}; //8
string musicgenres[]= {"Blues","Country","Electronic","Folk","Hip Hop","Jazz","Pop","Rock"}; //8
string sports[]= {"Basketball","Boxing","Football","Handball","Hockey","Rugby","Tennis","Volleyball"}; //8
string name[2];
string mname[1];
string fname[1];
string cname[4];
char stagename[20],songname[20],paintname[20];
int i,j,k,l,m,n,o,p,q,r,country,gen,age,health,happy,intel,appear,social,money,mage,fage,fdead,mdead,agedead,event,ill,illok,clas,ok,injury,relation,sex,college,job,study,choice[100]= {100},diploma,collegepay,criminal,salary,buychoice,v[100],house;
int car,pricerec,dhealth,dhappy,dintel,dappear,dsocial,dmoney,baby[100],work,stdok,stdisease,agedeadi,harddiseaseok,babyok,drugsnumb,limit,drugaddict,alcoholnumb,alcoholaddict,smokeaddict,ywdrugs,ywalcohol,ywsmoke,limit2,cage,cagedead;
int crelation[100],cn[100],y[100],career,music,yforsong,song,reputation,musicalcopies,musicaltour,yforpaint,paint,criminalchoice,crimes,sportschoice,sportsok,carprice[100],houseprice[100],holiday;
struct child
{
    string childname[1];
    int childage,childgender,childdeathage;
};
child a[100];
void randomnamegenerator(int gen, int country, string name[])
{
    j=rand()%6;
    if(gen==0)
    {
        if(country==21||country==49)
            name[0]=bukire[j];
        else if(country==12||country==14||country==20||country==35||country==45)
            name[0]=bscand[j];
        else if(country==1||country==4||country==15||country==22||country==32||country==34||country==37||country==40||country==44||country==46)
            name[0]=bweuro[j];
        else if(country==3||country==7||country==8||country==9||country==11||country==17||country==19||country==26||country==28||country==31||country==36||country==38||country==41||country==42||country==43)
            name[0]=bceuro[j];
        else
            name[0]=beeuro[j];
    }
    else
    {
        if(country==21||country==49)
            name[0]=gukire[j];
        else if(country==12||country==14||country==20||country==35||country==45)
            name[0]=gscand[j];
        else if(country==1||country==4||country==15||country==22||country==32||country==34||country==37||country==40||country==44||country==46)
            name[0]=gweuro[j];
        else if(country==3||country==7||country==8||country==9||country==11||country==17||country==19||country==26||country==28||country==31||country==36||country==38||country==41||country==42||country==43)
            name[0]=gceuro[j];
        else
            name[0]=geeuro[j];
    }
    if(country==21||country==49)
    {
        j=rand()%3;
        name[1]=sukire[j];
    }
    else if(country==12||country==14||country==20||country==35||country==45)
    {
        j=rand()%4;
        name[1]=sscand[j];
    }
    else if(country==1||country==4||country==15||country==22||country==32||country==34||country==37||country==40||country==44||country==46)
    {
        j=rand()%7;
        name[1]=sweuro[j];
    }
    else if(country==3||country==7||country==8||country==9||country==11||country==17||country==19||country==26||country==28||country==31||country==36||country==38||country==41||country==42||country==43)
    {
        j=rand()%9;
        name[1]=sceuro[j];
    }
    else
    {
        j=rand()%6;
        name[1]=seeuro[j];
    }
}
void randomsurnamegenerator(int country, string name[])
{
    if(country==21||country==49)
    {
        j=rand()%3;
        name[1]=sukire[j];
    }
    else if(country==12||country==14||country==20||country==35||country==45)
    {
        j=rand()%4;
        name[1]=sscand[j];
    }
    else if(country==1||country==4||country==15||country==22||country==32||country==34||country==37||country==40||country==44||country==46)
    {
        j=rand()%7;
        name[1]=sweuro[j];
    }
    else if(country==3||country==7||country==8||country==9||country==11||country==17||country==19||country==26||country==28||country==31||country==36||country==38||country==41||country==42||country==43)
    {
        j=rand()%9;
        name[1]=sceuro[j];
    }
    else
    {
        j=rand()%6;
        name[1]=seeuro[j];
    }
}
void randomizer()
{
    int n,m,i=0,j,v[100]= {-1},ok,k;
    for(k=1; k<=10; k++)
    {
        do
        {
            ok=1;
            n=rand()%20;
            m=rand()%20;
            for(j=1; j<=i; j++)
                if(v[j]==m||v[j]==n||m==n)
                {
                    ok=0;
                    break;
                }
        }
        while(ok==0);
        i++;
        v[i]=n;
        i++;
        v[i]=m;
        swap(carc2[n],carc2[m]);
    }
    for(i=0; i<=19; i++)
        carprice[i]=rand()%100000+50000;
    for(i=0; i<=2; i++)
        houseprice[i]=3*((i+1)*10000+rand()%10000);
    for(i=3; i<=7; i++)
        houseprice[i]=3*((i+1)*100000+rand()%100000);
    for(i=8; i<=9; i++)
    {
        houseprice[8]=3*(rand()%2000000+1000000);
        houseprice[9]=3*(rand()%3000000+2000000);
    }
}
void fightmenu()
{
    int ok;
    cout<<"You are arguing. What do you do?(0-ignore/1-fight)";
    cin>>ok;
    if(ok==0)
        dsocial-=rand()%8+3;
    else
    {
        j=rand()%2;
        if(j==0)
        {
            cout<<"You lost the fight"<<endl;
            dsocial-=rand()%5+3;
            dhappy-=rand()%5+3;
            dhealth-=rand()%5+3;
            injury=rand()%10+1;
            if(injury>=6)
            {
                j=rand()%7;
                dhealth-=rand()%6+5;
                cout<<"You got a "<<injuryc[j]<<"!"<<endl;
            }
            if(injury<=2)
            {
                j=rand()%7;
                dhealth-=rand()%26+25;
                cout<<"You got a serious "<<injuryc[injury]<<"!"<<endl;
                agedead-=rand()%5+1;
            }
        }
        else
        {
            cout<<"You WON the fight"<<endl;
            dsocial+=rand()%5+3;
            dhappy+=rand()%5+3;
            j=rand()%10;
            if(j==0)
            {
                cout<<"You killed that person"<<endl;
                dsocial-=rand()%26+25;
                dhappy-=rand()%26+25;
                criminal=1;
                if(age<19)
                    criminal=-1;
            }
        }
    }
}
void partymenu()
{
    if(age>=50)
        cout<<"You are too old to enter a club"<<endl;
    else
    {
        cout<<"Do you want to go clubbing?(0/1)";
        cin>>m;
        if(m==0)
            dsocial-=rand()%6+5;
        else
        {
            dsocial+=rand()%6+5;
            dhappy+=rand()%6+5;
            j=rand()%4;
            if(j==0)
            {
                cout<<"You find someone attractive. Do you have a one night stand?(0/1)";
                cin>>m;
                if(m==1)
                {
                    dhappy+=rand()%6+5;
                    sex=rand()%3;
                    if(sex==0&&relation>=1)
                    {
                        cout<<"Your partner found out about your one night stand and he/she broke up with you!"<<endl;
                        dhappy-=rand()%16+10;
                        relation=0;
                    }
                    if(sex==1)
                    {
                        stdisease=rand()%8;
                        cout<<"You got "<<stdiseasec[stdisease]<<endl;
                        stdok=1;
                    }
                }
            }
            if(j==1)
                fightmenu();
            if(j==2||j==3)
                cout<<"You went to the party"<<endl;
        }
    }
}
void illness()
{
    j=rand()%100+1;
    if(j<=ill+10)
    {
        illok=rand()%7;
        cout<<endl<<"You got "<<disease[illok]<<"!"<<endl;
        dhealth-=rand()%16+5;
        agedead-=rand()%2+1;
        dhappy-=rand()%16+10;
        dappear-=rand()%6+5;
        ill++;
    }
    else
    {
        dhealth+=rand()%5+3;
        agedead+=rand()%2;
        ill--;
    }
    if(stdok==1)
    {
        ok=rand()%5;
        if(ok==0)
        {
            cout<<endl<<"You no longer have "<<stdiseasec[stdisease]<<endl;
            stdok=0;
        }
        else
        {
            cout<<endl<<"You have "<<stdiseasec[stdisease]<<endl;
            agedead-=rand()%4+2;
            dhealth-=rand()%6+5;
            dhappy-=rand()%6+5;
        }
    }
}
void relationship()
{
    if(relation==0&&age>=15)
    {
        j=rand()%100+1;
        if(j<(appear+dappear)-10&&j<(social+dsocial)-10)
        {
            if(gen==0)
                randomnamegenerator(1,country,&cname[0]);
            else
                randomnamegenerator(0,country,&cname[0]);
            randomsurnamegenerator(country,&cname[1]);
            i=rand()%2;
            if(i==0)
                cage=age-rand()%5;
            else
                cage=age+rand()%5;
            cagedead=rand()%40+60;
            cout<<"Do you want to start dating with "<<cname[0]<<" "<<cname[1]<<" ("<<cage<<" years old)"<<"?(0/1)"<<endl;
            cin>>ok;
            if(ok==1)
            {
                cout<<"You started dating!"<<endl;
                relation=1;
            }
        }
    }
    if(relation==1)
        dhappy+=rand()%3+3;
    if(relation==2)
        dhappy+=rand()%3;
}
void criminalmenu()
{
    if(criminal==1)
    {
        j=rand()%11+10;
        cout<<"You were convicted to "<<j<<" years in prison for murder!"<<endl;
        criminal=-1;
    }
    if(criminal==2)
    {
        j=rand()%3+1;
        cout<<"You were convicted to "<<j<<" years in prison for stealing!"<<endl;
        criminal=-1;
    }
    if(criminal==3)
    {
        j=rand()%16+15;
        cout<<"You were convicted to "<<j<<" years in prison for drug dealing!"<<endl;
        criminal=-1;
    }
    if(criminal==4)
    {
        cout<<"You were convicted to death sentence"<<endl;
        agedead=age;
    }
    dhappy-=j;
    dsocial-=j;
    age+=j-1;
    fage+=j-1;
    mage+=j-1;
    cage+=j-1;
    if(college==1)
        clas+=j-1;
    for(i=1; i<=n; i++)
        a[i].childage+=j-1;
    j=rand()%3;
    if(j>=1&&relation>=1)
    {
        cout<<"Your partner broke up with you because you are in jail!"<<endl;
        relation=0;
    }
    if(job==1)
    {
        j=rand()%3;
        if(j>=1)
        {
            cout<<"You were fired because you are in jail!"<<endl;
            job=0;
            salary=0;
        }
    }
}
void drugsmenu()
{
    j=rand()%7;
    cout<<"You are given "<<drugs[j]<<". Do you want to take them?(0/1)";
    cin>>ok;
    if(ok==1)
    {
        dhappy+=rand()%11+10;
        dsocial+=rand()%6+5;
        dhealth-=rand()%16+5;
        cout<<"You took "<<drugs[j]<<"!"<<endl;
        drugsnumb++;
        ywdrugs=0;
    }
}
void alcoholmenu()
{
    j=rand()%7;
    cout<<"You are given "<<alcohol[j]<<". Do you want to drink it?(0/1)";
    cin>>ok;
    if(ok==1)
    {
        dhappy+=rand()%11+5;
        dsocial+=rand()%6+5;
        dhealth-=rand()%11+5;
        cout<<"You drank "<<alcohol[j]<<"!"<<endl;
        alcoholnumb++;
        ywalcohol=0;
    }
}
void smokingmenu()
{
    cout<<"You are offered cigarettes. Do you accept it?(0/1)";
    cin>>ok;
    if(ok==1)
    {
        dsocial+=rand()%6+5;
        dhealth-=rand()%11+5;
        smokeaddict=1;
        ywsmoke=0;
    }
}
void extraclassesmenu()
{
    cout<<"Would you like to do extra classes at school?(0/1)";
    cin>>ok;
    if(ok==1)
    {
        dintel+=rand()%7+1;
        dsocial-=rand()%6;
    }
}
void jobmenu()
{
    cout<<"You boss got mad at you"<<endl;
    m=rand()%5+1;
    cout<<"Your salary goes down with "<<m<<"%"<<endl;
    salary-=(salary*m)/100;
}
void relationshipmenu()
{
    j=rand()%2;
    if(j==0)
    {
        if(relation==1)
        {
            cout<<"You had an argument with your partner!"<<endl;
            dhappy-=rand()%6+5;
            ok=rand()%5;
            if(ok==0)
            {
                cout<<"You broke up with your partner!"<<endl;
                dhappy-=rand()%11+5;
                relation=0;
            }
        }
        if(relation==2)
        {
            cout<<"You had an argument with your partner!"<<endl;
            dhappy-=rand()%6+5;
            ok=rand()%5;
            if(ok==0)
            {
                cout<<"You divorced!"<<endl;
                dhappy-=rand()%11+5;
                relation=0;
            }
        }
    }
    if(j==1)
    {
        cout<<"Your friends let you down!"<<endl;
        dhappy-=rand()%6+5;
        dsocial-=rand()%6+5;
    }
}
void harddiseasemenu()
{
    if(harddiseaseok==0)
    {
        j=rand()%100+1;
        if(j<=3)
        {
            o=rand()%8;
            cout<<endl<<"You got "<<harddisease[o]<<endl;
            harddiseaseok=1;
        }
        else
        {
            if(smokeaddict==1)
            {
                j=rand()%100+1;
                if(j>=95)
                {
                    o=0;
                    cout<<endl<<"You got "<<harddisease[o]<<endl;
                    harddiseaseok=1;
                }
            }
            if(alcoholaddict==1)
            {
                j=rand()%100+1;
                if(j>=95)
                {
                    o=1;
                    cout<<endl<<"You got "<<harddisease[o]<<endl;
                    harddiseaseok=1;
                }
            }
            if(drugaddict==1)
            {
                j=rand()%100+1;
                if(j>=90)
                {
                    o=rand()%8;
                    cout<<endl<<"You got "<<harddisease[o]<<endl;
                    harddiseaseok=1;
                }
            }
        }
    }
    else
    {
        j=rand()%100+1;
        if(j<=5)
        {
            cout<<endl<<"You no longer have "<<harddisease[o]<<endl;
            harddiseaseok=0;
        }
        else
        {
            cout<<endl<<"You have "<<harddisease[o]<<endl;
            dhealth-=rand()%6+5;
            dhappy-=rand()%6+5;
            agedead-=rand()%3+1;
        }
    }
}
void childrenmenu()
{
    if(age>=15&&age<=18)
    {
        j=rand()%100+1;
        if(j<=3)
            babyok=1;
    }
    if(age>=19&&age<=35)
    {
        j=rand()%100+1;
        if(j<=10)
            babyok=1;
    }
    if(age>=36&&age<=50)
    {
        j=rand()%100+1;
        if(j<=5)
            babyok=1;
    }
    if(babyok==1)
    {
        if(gen==0)
            cout<<"Your partner is pregnant"<<endl;
        else
            cout<<"You are pregnant"<<endl;
        cout<<"Do you want to keep the baby?(0/1)"<<endl;
        cin>>ok;
        if(ok==1)
        {
            n++;
            j=rand()%2;
            a[n].childgender=j;
            if(j==0)
                cout<<"The baby is a boy"<<endl;
            else
                cout<<"The baby is a girl"<<endl;
            cin.get();
            cout<<"You child's name is: ";
            cin>>a[n].childname[0];
            a[n].childage=0;
            a[n].childdeathage=rand()%(max(agedead,cagedead)-min(agedead,cagedead)+1)+min(agedead,cagedead);
            a[n].childdeathage+=rand()%6;
        }
        babyok=0;
    }
}
void addiction()
{
    if(drugsnumb>=limit&&drugaddict==0)
    {
        drugaddict=1;
        cout<<endl<<"You became addicted to drugs"<<endl;
    }
    if(alcoholnumb>=limit+2&&alcoholaddict==0)
    {
        alcoholaddict=1;
        cout<<endl<<"You became addicted to alcohol"<<endl;
    }
    if(drugaddict==1)
    {
        if(ywdrugs>=limit2)
        {
            cout<<endl<<"You are no longer addicted to drugs"<<endl;
            drugaddict=0;
            ywdrugs=0;
            drugsnumb/=2;
        }
        else
        {
            cout<<endl<<"You are addicted to drugs"<<endl;
            dhealth-=rand()%6+5;
            dhappy-=rand()%6+5;
            agedead-=rand()%2;
            ywdrugs++;
        }
    }
    if(alcoholaddict==1)
    {
        if(ywalcohol>=limit2)
        {
            cout<<endl<<"You are no longer addicted to alcohol"<<endl;
            alcoholaddict=0;
            ywalcohol=0;
            alcoholnumb/=2;
        }
        else
        {
            cout<<endl<<"You are addicted to alcohol"<<endl;
            dhealth-=rand()%6+5;
            dhappy-=rand()%6+5;
            agedead-=rand()%2;
            ywalcohol++;
        }
    }
    if(smokeaddict==1)
    {
        if(ywsmoke>=limit2-5)
        {
            cout<<endl<<"You are no longer addicted to smoking"<<endl;
            smokeaddict=0;
            ywsmoke=0;
        }
        else
        {
            cout<<endl<<"You are addicted to smoking"<<endl;
            dhealth-=rand()%5+3;
            dhappy-=rand()%3+3;
            ywsmoke++;
        }
    }
}
void coupleevent()
{
    j=rand()%10+1;
    if(j==1)
    {
        i=rand()%7;
        cout<<endl<<cname[0]<<" "<<cname[1]<<" got "<<disease[i]<<endl;
        cagedead-=rand()%4;
    }
    else if(j>=8)
        cagedead+=rand()%2;
    if(cage>=cagedead)
    {
        cout<<cname[0]<<" "<<cname[1]<<" died at the age of "<<cage<<endl;
        dhappy-=rand()%10+15;
        relation=0;
        cout<<"Do you want to make a funeral for "<<cname[0]<<" "<<cname[1]<<"?"<<endl;
        cin>>ok;
        if(ok==1)
        {
            dmoney-=rand()%2000+1000;
            cout<<"The funeral was attended by "<<rand()%(social+dsocial)+10<<" people"<<endl;
        }
    }
    if(relation==1)
    {
        j=rand()%10;
        if(j==0)
        {
            cout<<"Your partner proposed to you. Do you want to get married?(0/1)"<<endl;
            cin>>m;
            if(m==1)
            {
                cout<<"Congratulations! You are now married!"<<endl;
                relation=2;
                if(gen==0)
                    cname[1]=name[1];
                else
                    name[1]=cname[1];
                dhappy+=rand()%16+10;
                do
                    l=rand()%50;
                while(l==country);
                cout<<"You had a honeymoon in "<<countryc[l]<<endl;
            }
        }
    }
}
void childevent()
{
    j=rand()%10+1;
    k=rand()%n+1;
    if(j==1)
    {
        i=rand()%7;
        cout<<endl<<a[k].childname[0]<<" got "<<disease[i]<<endl;
        a[k].childdeathage-=rand()%4;
    }
    else if(j>=8)
        a[k].childdeathage+=rand()%2;
    if(a[k].childage>=a[k].childdeathage)
    {
        cout<<a[k].childname[0]<<" died at the age of "<<a[k].childage<<endl;
        dhappy-=rand()%10+15;
        cout<<"Do you want to make a funeral for "<<a[k].childname[0]<<"?"<<endl;
        cin>>ok;
        if(ok==1)
        {
            dmoney-=rand()%2000+1000;
            cout<<"The funeral was attended by "<<rand()%(social+dsocial)+10<<" people"<<endl;
        }
        for(i=k; i<=n-1; i++)
            a[i]=a[i+1];
        n--;
    }
    if(a[k].childage>=15&&crelation[k]==0)
    {
        j=rand()%10;
        if(j==0)
        {
            cout<<a[k].childname[0]<<" got into a relationship"<<endl;
            crelation[k]=1;
        }
    }
    if(a[k].childage>=19&&crelation[k]==1)
    {
        j=rand()%10;
        if(j==0)
        {
            cout<<a[k].childname[0]<<" got married"<<endl;
            crelation[k]=2;
        }
    }
    if(crelation[k]==1)
    {
        j=rand()%15;
        if(j==0)
        {
            cout<<a[k].childname[0]<<" had broken up"<<endl;
            crelation[k]=0;
        }
        if(j==14)
        {
            cout<<a[k].childname[0]<<" had a baby"<<endl;
            y[k]=a[k].childage;
            cn[k]++;
        }
    }
    if(crelation[k]==2)
    {
        j=rand()%20;
        if(j==0)
        {
            cout<<a[k].childname[0]<<" divorced"<<endl;
            crelation[k]=0;
        }
        if(j>=18)
        {
            cout<<a[k].childname[0]<<" had a baby"<<endl;
            y[k]=a[k].childage;
        }
    }
}
void death()
{
    system("Pause");
    system("CLS");
    cout<<name[0]<<" "<<name[1]<<" died at the age of "<<age<<endl<<endl<<"Cause of death: ";
    if(criminal==4)
        cout<<"Death sentence"<<endl;
    else
    {
        if(harddiseaseok==1)
            cout<<harddisease[o]<<endl;
        else if(drugaddict==1)
            cout<<"Drugs abuse"<<endl;
        else if(alcoholaddict==1)
            cout<<"Alcohol abuse"<<endl;
        else if(stdok==1)
            cout<<stdiseasec[stdisease]<<endl;
        else
            cout<<"Natural causes"<<endl;
    }
    if(n>0)
    {
        cout<<endl<<name[0]<<" "<<name[1]<<" had "<<n<<" children: "<<endl;
        for(i=1; i<=n; i++)
            if(a[i].childgender==0)
                cout<<a[i].childname[0]<<"("<<a[i].childage<<" years old, Male)"<<endl;
            else
                cout<<a[i].childname[0]<<"("<<a[i].childage<<" years old, Female)"<<endl;
        system("Pause");
        system("CLS");
    }
}
int power(int n, int m)
{
    int i,p=1;
    for(i=1; i<=m; i++)
        p*=n;
    if(m==0)
        return 1;
    else
        return p;
}
void musiciancareer()
{
    system("CLS");
    cout<<stagename<<endl;
    cout<<"Genre: "<<musicgenres[music]<<endl;
    cout<<"Reputation: ";
    if(reputation==0)
        cout<<"Neighborhood"<<endl;
    if(reputation==1)
        cout<<"City"<<endl;
    if(reputation==2)
        cout<<"Part of "<<countryc[country]<<endl;
    if(reputation==3)
        cout<<countryc[country]<<endl;
    if(reputation==4)
        cout<<"Internationally"<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"1. Create song"<<endl;
    cout<<"2. Have a concert"<<endl;
    cout<<"3. Retire"<<endl;
    if(yforsong==0&&song==1)
        cout<<"4. Finish song"<<endl;
    cout<<"0. Return to menu"<<endl;
    cin>>j;
    if(song==1)
    {
        dhealth-=rand()%7;
        if(yforsong==0)
        {
            cout<<"You finished developing the song "<<songname<<endl;
            if(reputation==0||reputation==1)
                if(rand()%3==0)
                    reputation++;
            if(reputation==2)
                if(rand()%5==0)
                    reputation++;
            if(reputation==3)
                if(rand()%7==0)
                    reputation++;
            song=0;
            i=rand()%power(10,reputation+1)+power(10,reputation);
            cout<<songname<<" has sold "<<i<<" copies"<<endl;
            musicalcopies+=i;
            q=rand()%3+2;
            cout<<"The price of a copy has been "<<q<<"$ and you made "<<i*q<<"$"<<endl;
            dmoney+=i*q;
        }
    }
    if(j==1)
    {
        if(song==0)
        {
            cout<<"Name the song:"<<endl;
            cin.get();
            gets(songname);
            cout<<"You started developing the song "<<songname<<endl;
            yforsong=rand()%5+1;
            song=1;
        }
        else
            cout<<"You are already making a song right now"<<endl;
    }
    if(j==2)
    {
        if(musicaltour==0)
        {
            if(reputation>=2)
            {
                i=rand()%(power(10,reputation+1))+(power(10,reputation));
                q=rand()%6+5;
                cout<<"The concert was attended by "<<i<<" people"<<endl;
                cout<<"The price of the ticket was "<<q<<"$ and you made "<<i*q<<"$"<<endl;
                dmoney+=i*q;
            }
            else
                cout<<"You need to have a greater reputation to have a concert"<<endl;
        }
        else
            cout<<"You already had a concert this year and you can't do that again"<<endl;
    }
    if(j==3)
    {
        cout<<"Are you sure you want to retire?(0/1)";
        cin>>r;
        if(r==1)
        {
            career=0;
            reputation=0;
            cout<<"You sold a total of "<<musicalcopies<<" copies of your songs"<<endl;
            musicalcopies=0;
        }
    }
}
void paintercareer()
{
    system("CLS");
    cout<<"Reputation: ";
    if(reputation==0)
        cout<<"Neighborhood"<<endl;
    if(reputation==1)
        cout<<"City"<<endl;
    if(reputation==2)
        cout<<"Part of "<<countryc[country]<<endl;
    if(reputation==3)
        cout<<countryc[country]<<endl;
    if(reputation==4)
        cout<<"Internationally"<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"1. Create painting"<<endl;
    cout<<"2. Retire"<<endl;
    if(yforpaint==0&&paint==1)
        cout<<"3. Finish painting"<<endl;
    cout<<"0. Return to menu"<<endl;
    cin>>j;
    if(paint==1)
    {
        dhealth-=rand()%7;
        if(yforpaint==0)
        {
            cout<<"You finished painting "<<paintname<<endl;
            if(reputation==0||reputation==1)
                if(rand()%3==0)
                    reputation++;
            if(reputation==2)
                if(rand()%5==0)
                    reputation++;
            if(reputation==3)
                if(rand()%7==0)
                    reputation++;
            paint=0;
            i=rand()%power(10,reputation+2)+power(10,reputation+1);
            cout<<paintname<<" was sold for "<<i<<"$"<<endl;
            dmoney+=i;
        }
    }
    if(j==1)
    {
        if(paint==0)
        {
            cout<<"Name the painting:"<<endl;
            cin.get();
            gets(paintname);
            cout<<"You started painting "<<paintname<<endl;
            yforpaint=rand()%5+1;
            paint=1;
        }
        else
            cout<<"You are already making a painting right now"<<endl;
    }
    if(j==2)
    {
        cout<<"Are you sure you want to retire?(0/1)";
        cin>>r;
        if(r==1)
        {
            career=0;
            reputation=0;
        }
    }
}
void criminalcareer()
{
    system("CLS");
    if(criminalchoice==0)
    {
        cout<<"What type of crimes would you like to do?"<<endl;
        cout<<"1. Serial killer"<<endl;
        cout<<"2. Drug dealer"<<endl;
        cout<<"0. Return to menu"<<endl;
        cin>>criminalchoice;
        reputation=-1;
    }
    if(criminalchoice==1)
    {
        if(reputation>=0)
            cout<<"Reputation: ";
        if(reputation==0)
            cout<<"Neighborhood"<<endl;
        if(reputation==1)
            cout<<"City"<<endl;
        if(reputation==2)
            cout<<"Part of "<<countryc[country]<<endl;
        if(reputation==3)
            cout<<countryc[country]<<endl;
        if(reputation==4)
            cout<<"Internationally"<<endl;
        cout<<"People killed: "<<crimes<<endl;
        if(crimes>0)
        {
            j=rand()%100;
            if(j<=reputation*2)
            {
                cout<<"You were caught by the police and you will be convicted to death sentence"<<endl;
                criminal=4;
            }
        }
        cout<<"What do you want to do?"<<endl;
        cout<<"1. Kill a person"<<endl;
        cout<<"2. Change career"<<endl;
        cout<<"0. Return to menu"<<endl;
        cin>>j;
        if(j==1)
        {
            i=rand()%3;
            if(i==0)
            {
                cout<<"You successfully killed a person"<<endl;
                crimes++;
                if(reputation<=2)
                    reputation++;
                if(reputation==3)
                {
                    l=rand()%3;
                    if(l==0)
                        reputation++;
                }
            }
            if(i==1)
                cout<<"You couldn't kill the person but managed to escape the police"<<endl;
            if(i==2)
            {
                cout<<"You were caught by the police and you will be convicted to death sentence"<<endl;
                criminal=4;
            }
        }
        if(j==2)
        {
            cout<<"Are you sure you want to retire?(0/1)";
            cin>>r;
            if(r==1)
            {
                cout<<"You killed a total of "<<crimes<<" people"<<endl;
                crimes=0;
                criminalchoice=0;
                career=0;
                reputation=-1;
            }
        }
    }
    if(criminalchoice==2)
    {
        cout<<"What do you want to do?"<<endl;
        cout<<"1. Deal drugs"<<endl;
        cout<<"2. Retire"<<endl;
        cout<<"0. Return to menu"<<endl;
        cin>>j;
        if(j==1)
        {
            i=rand()%2;
            if(i==0)
            {
                l=rand()%4000+1000;
                cout<<"You successfully sold the drugs and made "<<l<<"$"<<endl;
                dmoney+=l;
            }
            if(i==1)
            {
                l=rand()%3;
                if(l==0)
                {
                    cout<<"You were caught by the police trying to sell the drugs"<<endl;
                    criminal=3;
                    career=0;
                    criminalchoice=0;
                }
                if(l==1)
                {
                    cout<<"You were caught by the police trying to cross illegally the border"<<endl;
                    criminal=3;
                    career=0;
                    criminalchoice=0;
                }
                if(l==2)
                    cout<<"You could not sell the drugs"<<endl;
            }
        }
        if(j==2)
        {
            cout<<"Are you sure you want to retire?(0/1)";
            cin>>r;
            if(r==1)
            {
                l=rand()%2;
                if(l==0)
                    cout<<"You retired successfully"<<endl;
                if(l==1)
                {
                    cout<<"Your boss is trying to fight you, because you were retiring"<<endl;
                    fightmenu();
                }
                career=0;
                criminalchoice=0;
            }
        }
    }
}
void sportscareer()
{
    system("CLS");
    if(sportschoice==-1)
    {
        cout<<"What sport do you choose"<<endl;
        for(j=0; j<=7; j++)
            cout<<j+1<<". "<<sports[j]<<endl;
        cout<<"0. Return to menu"<<endl;
        cin>>sportschoice;
        sportschoice--;
        reputation=0;
        if(sportschoice>-1&&sportschoice<=8)
            salary=rand()%power(10,reputation+2)+power(10,reputation+1);
    }
    if(sportschoice>=0)
    {
        job=-1;
        dhealth+=rand()%5;
        dsocial+=rand()%5;
        dhappy+=rand()%5;
        cout<<"Sport: "<<sports[sportschoice]<<endl;
        cout<<"Reputation: ";
        if(reputation==0)
            cout<<"Neighborhood"<<endl;
        if(reputation==1)
            cout<<"City"<<endl;
        if(reputation==2)
            cout<<"Part of "<<countryc[country]<<endl;
        if(reputation==3)
            cout<<countryc[country]<<endl;
        if(reputation==4)
            cout<<"Internationally"<<endl;
        cout<<"Salary: "<<salary<<"$"<<endl;
        cout<<"What would you like to do?"<<endl;
        cout<<"1. Play match"<<endl;
        cout<<"2. Retire"<<endl;
        cout<<"0. Return to menu"<<endl;
        cin>>j;
        if(j==1)
        {
            if(sportsok==0)
            {
                l=rand()%3;
                if(l==0||l==1)
                {
                    cout<<"You played well in the last match"<<endl;
                    if(reputation==0||reputation==1)
                        if(rand()%3==0)
                        {
                            reputation++;
                            salary=rand()%power(10,reputation+2)+power(10,reputation+1);
                        }
                    if(reputation==2)
                        if(rand()%5==0)
                        {
                            reputation++;
                            salary=rand()%power(10,reputation+2)+power(10,reputation+1);
                        }
                    if(reputation==3)
                        if(rand()%7==0)
                        {
                            reputation++;
                            salary=rand()%power(10,reputation+2)+power(10,reputation+1);
                        }
                }
                if(l==2)
                {
                    cout<<"You played badly in the last match"<<endl;
                    if(rand()%5==0)
                    {
                        i=rand()%power(10,reputation+1)+power(10,reputation);
                        cout<<"Your boss took "<<i<<"$ from your salary"<<endl;
                        salary-=i;
                    }
                }
                l=rand()%5;
                if(l==0)
                {
                    injury=rand()%7;
                    cout<<"You got a "<<injuryc[injury]<<endl;
                    dhappy-=rand()%10+5;
                    dhealth-=rand()%15+5;
                }
                sportsok=1;
            }
            else
                cout<<"You can't play another match right now"<<endl;
        }
        if(j==2)
        {
            cout<<"Are you sure you want to retire?(0/1)";
            cin>>r;
            if(r==1)
            {
                cout<<"You retired"<<endl;
                cout<<"You had a salary of "<<salary<<"$"<<endl;
                salary=0;
                job=0;
                reputation=0;
                sportschoice=-1;
                career=0;
            }
        }
        if(age>=35&&sportschoice>=0)
        {
            l=rand()%3;
            if(l==0)
            {
                cout<<"You retired"<<endl;
                cout<<"You had a salary of "<<salary<<"$"<<endl;
                salary=0;
                job=0;
                reputation=0;
                sportschoice=-1;
                career=0;
            }
        }
    }
}
void statscalc()
{
    dmoney-=pricerec/10;
    dmoney+=salary;
    age++;
    fage++;
    mage++;
    cage++;
    sportsok=0;
    for(i=1; i<=n; i++)
        a[i].childage++;
    if(health<=35)
        agedead-=rand()%4+2;
}
void resetstats()
{
    dhealth=0;
    dhappy=0;
    dintel=0;
    dappear=0;
    dsocial=0;
    dmoney=0;
}
void statsadding()
{
    health+=dhealth;
    happy+=dhappy;
    intel+=dintel;
    appear+=dappear;
    social+=dsocial;
    money+=dmoney;
}
void stats()
{
    if(health>100)
        health=100;
    if(health<0)
        health=0;
    if(happy>100)
        happy=100;
    if(happy<0)
        happy=0;
    if(intel>100)
        intel=100;
    if(intel<0)
        intel=0;
    if(appear>100)
        appear=100;
    if(appear<0)
        appear=0;
    if(social>100)
        social=100;
    if(social<0)
        social=0;
    system("Pause");
    system("CLS");
    cout<<name[0]<<" "<<name[1]<<endl;
    if(gen==0)
        cout<<"Gender: Male"<<endl;
    else
        cout<<"Gender: Female"<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Nationality: "<<countryc[country]<<endl;
    cout<<"Death age: "<<agedead<<endl;
    cout<<"Health: "<<health<<"%("<<dhealth<<")"<<endl;
    cout<<"Happiness: "<<happy<<"%("<<dhappy<<")"<<endl;
    cout<<"Inteligence: "<<intel<<"%("<<dintel<<")"<<endl;
    cout<<"Appearance: "<<appear<<"%("<<dappear<<")"<<endl;
    cout<<"Social skills: "<<social<<"%("<<dsocial<<")"<<endl;
    cout<<"Money: "<<money<<"$"<<"("<<dmoney<<")"<<endl;
    cout<<"Salary: "<<salary<<"$ per year"<<endl;
    cout<<"Work experience: "<<work<<" years"<<endl;
    if(house+1!=0)
        cout<<"House rating: "<<house+1<<endl;
    else
        cout<<"Living in parents' house"<<endl;
    cout<<"Cars: "<<car<<endl;
    if(relation==0)
        cout<<"Single"<<endl;
    if(relation==1)
        cout<<"In a relationship with "<<cname[0]<<" "<<cname[1]<<" ("<<cage<<" years old)"<<endl;
    if(relation==2)
        cout<<"Married with "<<cname[0]<<" "<<cname[1]<<" ("<<cage<<" years old)"<<endl;
    if(criminal!=0)
        cout<<"Criminal record"<<endl;
    else
        cout<<"No criminal record"<<endl;
    if(college==2)
    {
        cout<<"College: "<<studyc[study]<<endl;
        if(diploma>=5)
            cout<<"Finished college with a degree of "<<diploma<<"/10"<<endl;
    }
    if(job==0)
    {
        if(age>=65)
            cout<<"Retired"<<endl;
        else
            cout<<"Unemployed"<<endl;
    }
    if(job==1)
        cout<<"Working at "<<company[p]<<endl;
    cout<<endl;
    if(fage<fdead)
        cout<<"Father("<<fname[0]<<") age: "<<fage<<endl;
    if(fage==fdead)
    {
        cout<<"Your father passed away at the age of "<<fage<<"!"<<endl;
        fage++;
    }
    if(mage<mdead)
        cout<<"Mother("<<mname[0]<<") age: "<<mage<<endl<<endl;
    if(mage==mdead)
    {
        cout<<"Your mother passed away at the age of "<<mage<<"!"<<endl;
        mage++;
    }
    cout<<endl;
    if(n>0)
        for(i=1; i<=n; i++)
        {
            if(a[i].childgender==0)
                cout<<"Child#"<<i<<"(male)"<<"Name: "<<a[i].childname[0]<<"     "<<"Age: "<<a[i].childage<<" years old     ";
            else
                cout<<"Child#"<<i<<"(female)"<<": "<<a[i].childname[0]<<"     "<<"Age: "<<a[i].childage<<" years old     ";
            if(crelation[i]==1)
                cout<<"In a relationship"<<endl;
            if(crelation[i]==2)
                cout<<"Married"<<endl;
            if(crelation[i]==0)
                cout<<endl;
        }
}
void choicemenu()
{
    k=0;
    holiday=0;
    choice[100]= {100};
    while(choice[k]!=0&&criminal<=0)
    {
        stats();
        ok=1;
        cout<<endl<<"Choose what you want to do:"<<endl;
        cout<<"1. Go to a party"<<endl;
        cout<<"2. Steal money"<<endl;
        cout<<"3. Go to shop"<<endl;
        cout<<"4. Go on holiday"<<endl;
        cout<<"5. Sell house"<<endl;
        cout<<"6. Relationship menu"<<endl;
        cout<<"7. Job menu"<<endl;
        cout<<"8. Career menu"<<endl;
        cout<<"0. Age"<<endl;
        k++;
        cin>>choice[k];
        for(l=1; l<=k-1; l++)
            if(choice[l]==choice[k]&&choice[k]!=3&&choice[k]!=4&&choice[k]!=5&&choice[k]!=6&&choice[k]!=7&&choice[k]!=8)
                ok=0;
        if(choice[k]==1&&ok==1)
            partymenu();
        if(choice[k]==2&&ok==1)
        {
            j=rand()%3000+1;
            if(j<=50)
                cout<<endl<<"You tried to steal "<<j<<" $ from a homeless!"<<endl;
            if(j>50&&j<=100)
                cout<<endl<<"You tried to steal "<<j<<" $ from a kid!"<<endl;
            if(j>100&&j<=500)
                cout<<endl<<"You tried to steal "<<j<<" $ from old people!"<<endl;
            if(j>500&&j<=1000)
                cout<<endl<<"You tried to steal "<<j<<" $ from a woman!"<<endl;
            if(j>1000&&j<=2000)
                cout<<endl<<"You tried to steal "<<j<<" $ from a man!"<<endl;
            if(j>2000&&j<=3000)
                cout<<endl<<"You tried to steal "<<j<<" $ from a businessman!"<<endl;
            i=rand()%2;
            if(i==0)
            {
                cout<<"You were caught trying to steal and police came!"<<endl;
                criminal=2;
            }
            else
            {
                cout<<"You have successfully stolen "<<j<<" $!"<<endl;
                dmoney+=j;
            }
        }
        if(choice[k]==3&&ok==1)
        {
            cout<<endl<<"You entered the shop. What do you want to buy?"<<endl<<"1.House"<<endl<<"2.Car"<<endl<<"0.Return to menu"<<endl;
            cin>>buychoice;
            if(buychoice==1&&house==-1)
            {
                for(i=0; i<=2; i++)
                    cout<<i+1<<". "<<housec[i]<<" - "<<houseprice[i]<<"$"<<endl;
                for(i=3; i<=7; i++)
                    cout<<i+1<<". "<<housec[i]<<" - "<<houseprice[i]<<"$"<<endl;
                for(i=8; i<=9; i++)
                    cout<<i+1<<". "<<housec[i]<<" - "<<houseprice[i]<<"$"<<endl;
                cout<<"0.Return to menu"<<endl;
                cin>>j;
                j--;
                if(j!=-1)
                {
                    if(houseprice[j]<=money+dmoney)
                    {
                        cout<<"You bought a/an "<<housec[j]<<endl;
                        dmoney-=houseprice[j];
                        house=j;
                        pricerec=houseprice[j];
                        buychoice=0;
                    }
                    else
                        cout<<"You don't have enough money to buy a/an "<<housec[j]<<endl;
                }
            }
            if(buychoice==1&&house!=-1)
                cout<<"You can't have more than 1 house at the same time"<<endl<<"Sell you house first"<<endl;
            if(buychoice==2)
            {
                for(i=0; i<=19; i++)
                    cout<<i+1<<". "<<carc1[i]<<" "<<carc2[i]<<" - "<<carprice[i]<<"$"<<endl;
                cout<<"0.Return to menu"<<endl;
                cin>>j;
                j--;
                if(j!=-1)
                {
                    if(carprice[j]<=money+dmoney)
                    {
                        cout<<"You bought the car "<<carc1[j]<<" "<<carc2[j]<<endl;
                        dmoney-=carprice[j];
                        dsocial+=rand()%11+10;
                        car++;
                    }
                    else
                        cout<<"You don't have enough money to the car "<<carc1[j]<<" "<<carc2[j]<<endl;
                }
            }
        }
        if(choice[k]==4)
        {
            if(holiday==1)
                cout<<"You can't do that again!"<<endl;
            else
            {
                cout<<"Where do you want to go on holiday?"<<endl;
                for(i=1; i<=5; i++)
                {
                    do
                    {
                        j=rand()%50;
                        v[i]=rand()%50001+50000;
                    }
                    while(j==country);
                    cout<<i<<". "<<countryc[j]<<" - "<<v[i]<<"$"<<endl;
                }
                cout<<"0. Return to menu"<<endl;
                cin>>l;
                if(money+dmoney>=v[l])
                {
                    if(l==1||l==2||l==3||l==4||l==5)
                    {
                        cout<<"You took a holiday!"<<endl;
                        dhappy+=v[l]/4000;
                        dmoney-=v[l];
                        holiday=1;
                    }
                }
                else
                    cout<<"You don't have enough money!"<<endl;
            }
        }
        if(choice[k]==5)
        {
            if(house!=-1)
            {
                cout<<"Do you want to sell your house?"<<endl<<"You will get "<<pricerec/2<<"$"<<endl;
                cin>>j;
                if(j==1)
                {
                    cout<<"You sold your house and you got "<<pricerec/2<<"$"<<endl;
                    dmoney+=pricerec/2;
                    house=-1;
                    pricerec=0;
                    cout<<"You now live at your parents' house again!"<<endl;
                }
            }
            else
                cout<<"You don't have your own house"<<endl;
        }
        if(choice[k]==6&&ok==1)
        {
            if(relation==0)
                cout<<"You don't have a relationship with anyone"<<endl;
            if(relation==1)
            {
                cout<<"1. Break up"<<endl<<"2. Propose"<<endl<<"0. Return to menu"<<endl;
                cin>>m;
                if(m==1)
                {
                    cout<<"You broke up with your partner"<<endl;
                    relation=0;
                }
                if(m==2)
                {
                    cout<<"You proposed to your partner"<<endl;
                    j=rand()%81+20;
                    if(j<=social+dsocial)
                    {
                        cout<<"Congratulations! You are now married!"<<endl;
                        relation=2;
                        if(gen==0)
                            cname[1]=name[1];
                        else
                            name[1]=cname[1];
                        dhappy+=rand()%16+10;
                        do
                            l=rand()%50;
                        while(l==country);
                        cout<<"You had a honeymoon in "<<countryc[l]<<endl;
                    }
                    else
                    {
                        cout<<"Your proposal was declined!"<<endl;
                        l=rand()%3;
                        if(l==0)
                        {
                            cout<<"Your partner broke up with you because of your proposal!"<<endl;
                            relation=0;
                        }
                    }
                }
            }
            if(relation==2)
            {
                cout<<"1. Divorce"<<endl<<"0. Return to menu"<<endl;
                cin>>m;
                if(m==1)
                {
                    cout<<"You divorced"<<endl;
                    relation=0;
                }
            }
        }
        if(choice[k]==7&&ok==1)
        {
            if(job==0)
            {
                if(age>=65)
                    cout<<"You are retired and you can't take another job!"<<endl;
                else
                {
                    for(i=0; i<=9; i++)
                        v[i]=rand()%10000+((i+1)*10000);
                    for(i=0; i<=9; i++)
                    {
                        if(i==0)
                            cout<<i+1<<". "<<company[i]<<" "<<v[i]<<"$"<<endl<<"Minimum requirement: high school"<<endl;
                        if(i>=1&&i<=2)
                            cout<<i+1<<". "<<company[i]<<" "<<v[i]<<"$"<<endl<<"Minimum requirement: college"<<endl;
                        if(i>=3&&i<=4)
                            cout<<i+1<<". "<<company[i]<<" "<<v[i]<<"$"<<endl<<"Minimum requirement: college diploma"<<endl;
                        if(i>=5&&i<=6)
                            cout<<i+1<<". "<<company[i]<<" "<<v[i]<<"$"<<endl<<"Minimum requirement: college diploma at least 8"<<endl;
                        if(i>=7&&i<=8)
                            cout<<i+1<<". "<<company[i]<<" "<<v[i]<<"$"<<endl<<"Minimum requirement: work experience at least 20 years, no criminal record"<<endl;
                        if(i==9)
                            cout<<i+1<<". "<<company[i]<<" "<<v[i]<<"$"<<endl<<"Minimum requirement: work experience at least 35 years, no criminal record"<<endl;
                    }
                    cin>>j;
                    j--;
                    if(j==0)
                    {
                        l=rand()%21+30;
                        if((dintel+intel+dsocial+social)/2>=l)
                        {
                            job=1;
                            cout<<"You got the job at "<<company[j]<<endl;
                            salary=v[j];
                            p=j;
                        }
                        else
                            cout<<"You didn't get the job interview"<<endl;
                    }
                    if(j==1)
                    {
                        l=rand()%21+40;
                        if(college>=1)
                        {
                            if((dintel+intel+dsocial+social)/2>=l)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to go to college to get this job"<<endl;
                    }
                    if(j==2)
                    {
                        l=rand()%21+45;
                        if(college>=1)
                        {
                            if((dintel+intel+dsocial+social)/2>=l)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to go to college to get this job"<<endl;
                    }
                    if(j==3)
                    {
                        k=rand()%21+45;
                        if(diploma!=0)
                        {
                            if((dintel+intel+dsocial+social)/2>=l)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to get a college diploma to get this job"<<endl;
                    }
                    if(j==4)
                    {
                        l=rand()%21+50;
                        if(diploma!=0)
                        {
                            if((dintel+intel+dsocial+social)/2>=k)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to get a college diploma to get this job"<<endl;
                    }
                    if(j==5)
                    {
                        l=rand()%21+55;
                        if(diploma>=8)
                        {
                            if((dintel+intel+dsocial+social)/2>=k)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to get a college diploma with a degree of at least 8 to get this job"<<endl;
                    }
                    if(j==6)
                    {
                        l=rand()%21+60;
                        if(diploma>=8)
                        {
                            if((dintel+intel+dsocial+social)/2>=k)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to get a college diploma with a degree of at least 8 to get this job"<<endl;
                    }
                    if(j==7)
                    {
                        l=rand()%21+50;
                        if(work>=20)
                        {
                            if((dintel+intel+dsocial+social)/2>=k)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to have at least 20 years of work experience to get this job"<<endl;
                    }
                    if(j==8)
                    {
                        l=rand()%21+55;
                        if(work>=20)
                        {
                            if((dintel+intel+dsocial+social)/2>=k)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to have at least 20 years of work experience to get this job"<<endl;
                    }
                    if(j==9)
                    {
                        l=rand()%21+60;
                        if(work>=35)
                        {
                            if((dintel+intel+dsocial+social)/2>=k)
                            {
                                job=1;
                                cout<<"You got the job at "<<company[j]<<endl;
                                salary=v[j];
                                p=j;
                            }
                            else
                                cout<<"You didn't get the job interview"<<endl;
                        }
                        else
                            cout<<"You need to have at least 35 years of work experience to get this job"<<endl;
                    }
                    if(j>=7&&j<=9&&criminal==-1)
                    {
                        cout<<"You company found out that you have a criminal record, and decided not to give you the job"<<endl;
                        job=0;
                        salary=0;
                    }
                }
            }
            if(job==1)
            {
                cout<<"1. Ask for a salary rise"<<endl<<"2. Quit job"<<endl<<"0. Return to menu"<<endl;
                cin>>j;
                if(j==1)
                {
                    l=rand()%10;
                    if(l==0)
                    {
                        m=rand()%15+1;
                        cout<<"You got a salary rise of "<<m<<"%"<<endl;
                        salary+=(salary*m)/100;
                    }
                    else
                    {
                        cout<<"You didn't get a salary rise"<<endl;
                        m=rand()%10;
                        if(m==0)
                        {
                            cout<<"Your boss got mad at you because you asked for a salary rise and fired you"<<endl;
                            job=0;
                            salary=0;
                        }
                    }
                }
                if(j==2)
                {
                    cout<<"Are you sure you want to retire?(0/1)"<<endl;
                    cin>>r;
                    if(r==1)
                    {
                        cout<<"You quit your job"<<endl;
                        job=0;
                        salary=0;
                    }
                }
            }
            if(job==-1)
                cout<<"You are a professional athlete and you can't have another job"<<endl;
        }
        if(choice[k]==8&&ok==1)
        {
            if(career==0)
            {
                cout<<"Choose your career: "<<endl;
                cout<<"1.Music"<<endl;
                cout<<"2.Painting"<<endl;
                cout<<"3.Criminal"<<endl;
                cout<<"4.Sports"<<endl;
                cout<<"0.Return to menu"<<endl;
                cin>>m;
                if(m==1)
                {
                    career=1;
                    cout<<"Choose your stage name"<<endl;
                    cin.get();
                    gets(stagename);
                    cout<<"Choose the genre of the band"<<endl;
                    for(i=0; i<=7; i++)
                        cout<<i+1<<". "<<musicgenres[i]<<endl;
                    cin>>music;
                    music--;
                }
                if(m==2)
                    career=2;
                if(m==3)
                    career=3;
                if(m==4)
                {
                    if(age>=25)
                        cout<<"You are too old to professionally start a sport"<<endl;
                    else
                        career=4;
                }
            }
            if(career==1)
                musiciancareer();
            if(career==2)
                paintercareer();
            if(career==3)
                criminalcareer();
            if(career==4)
                sportscareer();
        }
        if(ok==0&&criminal<=0)
            cout<<"You can't do that again!"<<endl;
    }


}

void MAINPROGRAMME()
{
    while(age<agedead)
    {
        if(age<7)
        {
            statsadding();
            stats();
            resetstats();
            j=rand()%2;
            if(j==0)
                dhappy-=rand()%3;
            else
                dhappy+=rand()%6;
            dintel+=rand()%4;
            j=rand()%2;
            if(j==0)
                dappear-=rand()%3;
            else
                dappear+=rand()%6;
        }
        if(age>=7&&age<15)
        {
            statsadding();
            stats();
            resetstats();
            if(clas==1)
                cout<<endl<<"You started school"<<endl;
            cout<<endl<<"Year "<<clas<<" of school"<<endl;
            clas++;
            j=rand()%2;
            if(j==0)
                dhappy-=rand()%3;
            else
                dhappy+=rand()%6;
            dintel+=rand()%7;
            j=rand()%2;
            if(j==0)
                dappear-=rand()%3;
            else
                dappear+=rand()%6;
            dsocial+=rand()%6;
            event=rand()%4+1;
            if(event==1)
                extraclassesmenu();
            if(event==2)
                fightmenu();
        }
        if(age>=15&&age<19)
        {
            statsadding();
            stats();
            resetstats();
            if(clas==9)
            {
                cout<<endl<<"You started high school!"<<endl;
                clas=1;
            }
            cout<<endl<<"Year "<<clas<<" of high school"<<endl;
            clas++;
            j=rand()%2;
            if(j==0)
                dhappy-=rand()%6;
            else
                dhappy+=rand()%6;
            dintel+=rand()%7;
            j=rand()%2;
            if(j==0)
                dappear-=rand()%3;
            else
                dappear+=rand()%9;
            dsocial+=rand()%6;
            event=rand()%10+1;
            if(event==1)
                extraclassesmenu();
            if(event==2)
                fightmenu();
            if(event==3)
                relationshipmenu();
            if(event==4)
                drugsmenu();
            if(event==5)
                alcoholmenu();
            if(event==6)
                smokingmenu();
            if(event==7)
                partymenu();
            if(clas==5)
            {
                cout<<"You finished high-school!"<<endl;
                if(intel>=35)
                {
                    cout<<"Do you want to go to college?(0/1)";
                    cin>>college;
                }
                else
                {
                    cout<<"You did not have enough qualifications to go to college"<<endl;
                    college=0;
                }
            }
        }
        if(age>=19&&age<51)
        {
            if(age==19)
            {
                dmoney+=rand()%4001+3000;
                cout<<"Your parents gave you "<<dmoney<<"$ for finishing high school"<<endl;
                if(college==1)
                    collegepay=rand()%501+800;
            }
            if(age>=19&&age<24)
            {
                statsadding();
                stats();
                resetstats();
                j=rand()%2;
                if(j==0)
                    dhappy-=rand()%6;
                else
                    dhappy+=rand()%6;
                j=rand()%2;
                if(j==0)
                    dappear-=rand()%3;
                else
                    dappear+=rand()%7;
                dsocial+=rand()%6;
            }
            if(age>=24&&age<36)
            {
                statsadding();
                stats();
                resetstats();
                j=rand()%2;
                if(j==0)
                    dhappy-=rand()%3;
                else
                    dhappy+=rand()%3;
                j=rand()%2;
                if(j==0)
                    dappear-=rand()%7;
                else
                    dappear+=rand()%5;
                dsocial+=rand()%4;

            }
            if(age>=36&&age<51)
            {
                statsadding();
                stats();
                resetstats();
                j=rand()%2;
                if(j==0)
                    dhappy-=rand()%7;
                else
                    dhappy+=rand()%5;
                j=rand()%2;
                if(j==0)
                    dappear-=rand()%10;
                else
                    dappear+=rand()%3;
                dsocial+=rand()%3;
            }
            if(college==1)
            {
                if(clas==5&&age==19)
                {
                    cout<<"You started college!"<<endl;
                    clas=1;
                    cout<<"What do you want to study:"<<endl;
                    for(j=0; j<=15; j++)
                        cout<<j+1<<". "<<studyc[j]<<endl;
                    cin>>study;
                    study--;
                    cout<<"You started studying "<<studyc[study]<<endl;
                }
                cout<<"Year "<<clas<<" of college"<<endl;
                clas++;
                dintel+=rand()%6+5;
                dmoney-=collegepay;
            }
            event=rand()%10+1;
            if(event==1)
                fightmenu();
            if(event==2)
                relationshipmenu();
            if(event==3)
                drugsmenu();
            if(event==4)
                alcoholmenu();
            if(event==5)
                smokingmenu();
            if(event==6&&age<=35)
                partymenu();
            if(event==7&&job==1)
                jobmenu();
            if(clas>=6&&age!=19)
            {
                j=(intel+dintel)/10;
                if(j>=5)
                {
                    cout<<"You finished college!"<<endl<<"You had a final qualification of "<<j<<"/10 and a diploma in "<<studyc[study]<<endl;
                    diploma=j;
                }
                else
                    cout<<"You did not get a diploma in "<<studyc[study]<<endl;
                college=2;
                clas=0;
            }
        }
        if(age>=51&&age<65)
        {
            statsadding();
            stats();
            resetstats();
            j=rand()%2;
            if(j==0)
                dhappy-=rand()%8;
            else
                dhappy+=rand()%3;
            j=rand()%2;
            if(j==0)
                dappear-=rand()%10;
            else
                dappear+=rand()%3;
            dsocial+=rand()%3;
            event=rand()%8+1;
            if(event==1)
                relationshipmenu();
            if(event==2)
                alcoholmenu();
            if(event==3)
                smokingmenu();
            if(event==4&&job==1)
                jobmenu();
        }
        if(age>=65)
        {
            statsadding();
            stats();
            resetstats();
            j=rand()%2;
            if(j==0)
                dhappy-=rand()%11+5;
            else
                dhappy+=rand()%3;
            j=rand()%2;
            if(j==0)
                dappear-=rand()%11+5;
            else
                dappear+=rand()%3;
            dsocial-=rand()%3;
            ill+=3;
            if(job==1)
            {
                cout<<"Would you like to retire?(0/1)"<<endl;
                cin>>ok;
                if(ok==1)
                {
                    cout<<"You retired from your job!"<<endl;
                    job=0;
                    salary/=10;
                }
                event=rand()%6+1;
                if(event==1)
                    relationshipmenu();
                if(event==2)
                    alcoholmenu();
                if(event==3)
                    smokingmenu();
            }

        }

        if(song==1)
        {
            yforsong--;
            if(yforsong>0)
            {
                cout<<"You have "<<yforsong<<" years left until you finish the song "<<songname<<endl;
            }
            else
            {
                cout<<"You finished developing the song "<<songname<<endl<<"Enter the career menu to receive your money"<<endl;
                yforsong=0;
            }
        }
        if(paint==1)
        {
            yforpaint--;
            if(yforpaint>0)
            {
                cout<<"You have "<<yforpaint<<" years left until you finish the painting "<<paintname<<endl;
            }
            else
            {
                cout<<"You finished developing the song "<<paintname<<endl<<"Enter the career menu to receive your money"<<endl;
                yforpaint=0;
            }
        }
        illness();
        relationship();
        addiction();
        if(relation>=1)
            coupleevent();
        if(n>=1)
            childevent();
        if(age>=25)
            harddiseasemenu();
        if(relation==1||relation==2)
            childrenmenu();
        if(age>=19)
            choicemenu();
        if(criminal>0)
            criminalmenu();
        if(job==1)
        {
            work++;
            dhappy-=rand()%3;
            dsocial-=rand()%3;
            dhealth-=rand()%3;
        }
        if(happy<=15)
        {
            dhealth-=rand()%5;
            cout<<endl<<"You are in depression!"<<endl;
        }
        statscalc();
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    cout<<"                      ***Welcome to VirtLife***"<<endl<<endl<<endl<<endl<<endl;
    system("Pause");
    system("CLS");
    randomizer();
    limit=rand()%3+1;
    limit2=rand()%6+10;
    gen=rand()%2;
    sportschoice=-1;
    if(gen==0)
        cout<<"Gender: Male"<<endl;
    else
        cout<<"Gender: Female"<<endl;
    country=rand()%50;
    cout<<"Nationality: "<<countryc[country]<<endl<<endl;
    cout<<"Enter your name(0 for random names): ";
    cin>>name[0];
    if(name[0]=="0"||name[0]=="rand")
    {
        randomnamegenerator(gen,country,&name[0]);
        randomsurnamegenerator(country,&name[1]);
        randomnamegenerator(1,country,&mname[0]);
        randomnamegenerator(0,country,&fname[0]);
    }
    else
    {
        cout<<"Enter your surname: ";
        cin>>name[1];
        cout<<"Enter your father's name: ";
        cin>>fname[0];
        cout<<"Enter your mother's name: ";
        cin>>mname[0];
    }
    if(name[0]=="stefan"||name[0]=="Stefan")
    {
        fage=rand()%31+20;
        i=rand()%2;
        mage=rand()%5;
        if(i==0)
            mage=fage-mage;
        else
            mage=fage+mage;
        fdead=rand()%17+65;
        mdead=rand()%11+75;
        agedead=rand()%(max(fdead,mdead)-min(fdead,mdead)+1)+min(fdead,mdead);
        agedead+=rand()%6;
        age=18;
        health=80;
        happy=100;
        intel=0;
        appear=rand()%61+30;
        social=rand()%51+10;
        money=0;
        ill=10;
        clas=1;
        relation=0;
        job=0;
        diploma=0;
        criminal=0;
        salary=0;
        house=-1;
        l=0;
        car=0;
        m=0;
        n=0;
        pricerec=0;
        work=0;
        dhealth=0;
        dhappy=0;
        dintel=0;
        dappear=0;
        dsocial=0;
        dmoney=0;
        system("Pause");
        system("CLS");
        cout<<"Cheatcode activated"<<endl<<"You start at the age of 18"<<endl;
    }
    else if(name[0]=="miruna"||name[0]=="Miruna")
    {
        fage=rand()%31+20;
        i=rand()%2;
        mage=rand()%5;
        if(i==0)
            mage=fage-mage;
        else
            mage=fage+mage;
        fdead=rand()%17+65;
        mdead=rand()%11+75;
        agedead=200;
        age=0;
        health=80;
        happy=100;
        intel=0;
        appear=rand()%61+30;
        social=rand()%51+10;
        money=0;
        ill=10;
        clas=1;
        relation=0;
        job=0;
        diploma=0;
        criminal=0;
        salary=0;
        house=-1;
        l=0;
        car=0;
        m=0;
        n=0;
        pricerec=0;
        work=0;
        dhealth=0;
        dhappy=0;
        dintel=0;
        dappear=0;
        dsocial=0;
        dmoney=0;
        system("Pause");
        system("CLS");
        cout<<"Cheatcode activated"<<endl<<"Death age becomes 200"<<endl;
    }
    else if((name[0]=="baby"&&name[1]=="millionaire")||(name[0]=="Baby"&&name[1]=="Millionaire"))
    {
        fage=rand()%31+20;
        i=rand()%2;
        mage=rand()%5;
        if(i==0)
            mage=fage-mage;
        else
            mage=fage+mage;
        fdead=rand()%17+65;
        mdead=rand()%11+75;
        agedead=rand()%(max(fdead,mdead)-min(fdead,mdead)+1)+min(fdead,mdead);
        agedead+=rand()%6;
        age=0;
        health=80;
        happy=100;
        intel=0;
        appear=rand()%61+30;
        social=rand()%51+10;
        money=1000000;
        ill=10;
        clas=1;
        relation=0;
        job=0;
        diploma=0;
        criminal=0;
        salary=100000;
        house=9;
        l=0;
        car=0;
        m=0;
        n=0;
        pricerec=0;
        work=0;
        dhealth=0;
        dhappy=0;
        dintel=0;
        dappear=0;
        dsocial=0;
        dmoney=0;
        system("Pause");
        system("CLS");
        cout<<"Cheatcode activated"<<endl<<"You are a baby millionaire"<<endl;
    }
    else
    {
        fage=rand()%31+20;
        i=rand()%2;
        mage=rand()%5;
        if(i==0)
            mage=fage-mage;
        else
            mage=fage+mage;
        fdead=rand()%17+65;
        mdead=rand()%11+75;
        agedead=rand()%(max(fdead,mdead)-min(fdead,mdead)+1)+min(fdead,mdead);
        agedead+=rand()%6;
        age=0;
        health=80;
        happy=100;
        intel=0;
        appear=rand()%61+30;
        social=rand()%51+10;
        money=0;
        ill=10;
        clas=1;
        relation=0;
        job=0;
        diploma=0;
        criminal=0;
        salary=0;
        house=-1;
        l=0;
        car=0;
        m=0;
        n=0;
        pricerec=0;
        work=0;
        dhealth=0;
        dhappy=0;
        dintel=0;
        dappear=0;
        dsocial=0;
        dmoney=0;
    }
    MAINPROGRAMME();
    death();
    if(n>0)
    {
        ok=0;
        cout<<"Would you like to continue as one of you children?(0/1)"<<endl;
        cin>>ok;
        if(ok==1)
        {
            for(i=1; i<=n; i++)
                if(a[i].childgender==0)
                    cout<<i<<". "<<a[i].childname[0]<<"("<<a[i].childage<<" years old, Male)"<<endl;
                else
                    cout<<i<<". "<<a[i].childname[0]<<"("<<a[i].childage<<" years old, Female)"<<endl;
            cin>>j;
            age=a[j].childage;
            agedead=a[j].childdeathage;
            name[0]=a[j].childname[0];
            if(cage<cagedead)
            {
                if(gen==0)
                {
                    mname[0]=cname[0];
                    mdead=cagedead;
                    mage=cage;
                    fage=INT_MAX-1000;
                }
                else
                {
                    fname[0]=cname[0];
                    fdead=cagedead;
                    fage=cage;
                    mage=INT_MAX-1000;
                }
            }
            gen=a[j].childgender;
            money/=n;
            n=0;
            limit=rand()%3+1;
            limit2=rand()%6+10;
            alcoholnumb=0;
            drugsnumb=0;
            criminal=0;
            crimes=0;
            relation=crelation[j];
            harddiseaseok=0;
            stdok=0;
            smokeaddict=0;
            alcoholaddict=0;
            criminalchoice=0;
            drugaddict=0;
            career=0;
            music=0;
            yforpaint=0;
            paint=0;
            yforsong=0;
            song=0;
            sportschoice=-1;
            reputation=0;
            musicalcopies=0;
            musicaltour=0;
            diploma=0;
            car=0;
            sportsok=0;
            sportschoice=-1;
            salary=0;
            work=0;
            college=0;
            job=0;
            house=-1;
            health=rand()%40+30;
            happy=rand()%40+30;
            intel=rand()%40+30;
            appear=rand()%40+30;
            social=rand()%40+30;
            clas=0;
            if(age<15)
            {
                intel=rand()%15;
                money=0;
            }
            if(age>=19)
            {
                j=rand()%2;
                if(j==0)
                    house=-1;
                else
                {
                    house=rand()%10;
                    if(house>=0&&house<=2)
                        pricerec=3*((i+1)*10000+rand()%10000);
                    if(house>=3&&house<=7)
                        pricerec=3*((i+1)*100000+rand()%100000);
                    if(house==8)
                        pricerec=3*(rand()%2000000+1000000);
                    if(house==9)
                        pricerec=3*(rand()%3000000+2000000);
                }
            }
            if(age>=7&&age<=14)
            {
                money=0;
                clas=age-6;
            }
            if(age>=15&&age<=18)
            {
                clas=age-14;
                money=0;
            }
            if(age>=19&&age<=23)
            {
                j=rand()%4;
                if(j>=1)
                    college=1;
                else
                    college=0;
                if(college==1)
                {
                    clas=age-18;
                    collegepay=rand()%501+800;
                    if(age>19)
                        study=rand()%15;
                }
            }
            if(relation>=1)
            {
                if(gen==0)
                    randomnamegenerator(1,country,&cname[0]);
                else
                    randomnamegenerator(0,country,&cname[0]);
                if(relation==2)
                {
                    randomsurnamegenerator(country,&cname[1]);
                    if(gen==1)
                        name[1]=cname[1];
                    else
                        cname[1]=name[1];
                }
                i=rand()%2;
                if(i==0)
                    cage=age-rand()%5;
                else
                    cage=age+rand()%5;
                cagedead=rand()%40+60;
            }
            if(age>=19)
                job=rand()%2;
            if(job==1)
            {
                p=rand()%10;
                salary=rand()%10000+((p+1)*10000);
            }
            if(cn[j]>0)
            {
                for(i=1; i<=cn[j]; i++)
                {
                    a[i].childage=age-y[i];
                    m=rand()%2;
                    a[i].childgender=m;
                    if(a[i].childgender==0)
                        cout<<"Name child#"<<i<<"(Male, "<<a[i].childage<<" years old)"<<endl;
                    cin>>a[i].childname[0];
                    if(a[i].childage>=15)
                    {
                        m=rand()%3;
                        if(m==0)
                            crelation[i]=rand()%2+1;
                        else
                            crelation[i]=0;
                    }
                    m=rand()%2;
                    if(m==0)
                        a[i].childdeathage=agedead-rand()%6;
                    else
                        a[i].childdeathage=agedead+rand()%6;
                }
            }
            ywsmoke=0;
            ywalcohol=0;
            ywdrugs=0;
            MAINPROGRAMME();
            death();
        }
    }
    if(n==0||ok==0)
        system("Pause");
    cout<<endl<<endl;
    system("Pause");
    return 0;
}

