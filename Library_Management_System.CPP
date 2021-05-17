#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<fstream.h>
#include<stdlib.h>
//*****************************************global declaration****************************************
				char foun='f';
				fstream fin;
				int rn,pos;
//***************************************************************************************************



class newbook
{
 private:
	long bno,ISBN,NP,E,NC,bookno,isbn,nop,eddy,noc;
	char PN[20],AN[20],bname[20],pname[20],aname[20];
	float price,money;
 public:
 	char BN[20];
	void NB()
 			{
				  cout.width(50);
				  cout<<"Enter Book No. ";
				  cin>>bno;
				  cout.width(50);
				  cout<<"Enter the Book Name ";
				  gets(BN);
				  cout.width(50);
				  cout<<"Enter the Publisher Name ";
				  gets(PN);
				  cout.width(50);
				  cout<<"Enter the Author Name ";
				  gets(AN);
				  cout.width(50);
				  cout<<"Enter the Price ";
				  cin>>price;
				  cout.width(50);
				  cout<<"Enter the ISBN No. ";
				  cin>>ISBN;
				  cout.width(50);
				  cout<<"Enter the No. of Pages ";
				  cin>>NP;
				  cout.width(50);
				  cout<<"Enter the Edition ";
				  cin>>E;
				  cout.width(50);
				  cout<<"Enter the No. of Copies ";
				  cin>>NC;
				}
   int boono()
			  {
			    return bno;
			  }   
	void modify()
				{
				  cout<<"For modification : "<<endl;
				  cout.width(40);
				  cout<<"Book no : ";
				  cin>>bookno;
				  bno=bookno;
				  cout.width(40);
				  cout<<"Book name : ";
				  gets(bname);
				  strcpy(BN,bname);
				  cout.width(40);
				  cout<<"Publisher name : ";
				  cin>>pname;
				  strcpy(PN,pname);
				  cout.width(40);
				  cout<<"Author name : ";
				  cin>>aname;
				  strcpy(AN,aname);
				  cout.width(40);
				  cout<<"Price : ";
				  cin>>money;
				  price=money;
				  cout.width(40);
				  cout<<"ISBN : ";
				  cin>>isbn;
				  cout.width(40);
				  cout<<"No of pages : ";
				  cin>>nop;
				  NP=nop;
				  cout.width(40);
				  cout<<"Edition : ";
				  cin>>eddy;
				  E=eddy;
				  cout.width(40);
				  cout<<"No of copies : ";
				  cin>>noc;
				  NC=noc;
				}
	void putbook()
			{
			  cout.width(50);
			  cout<<"Book No. "<<bno<<endl;
			  cout.width(50);
			  cout<<"Book Name "<<BN<<endl;
			  cout.width(50);
			  cout<<"Publisher Name "<<PN<<endl;
			  cout.width(50);
			  cout<<"Author Name "<<AN<<endl;
			  cout.width(50);
			  cout<<"Price "<<price<<endl;
			  cout.width(50);
			  cout<<"ISBN No. "<<ISBN<<endl;
			  cout.width(50);
			  cout<<"No. of Pages "<<NP<<endl;
			  cout.width(50);
			  cout<<"Edition "<<E<<endl;
			  cout.width(50);
			  cout<<"No. of Copies "<<NC<<endl;
			}
	void mainmenu()
			{
			 cout.width(50);
			 cout<<"LiBrArY MaNaGeMeNt";
			 cout.width(10);
			 cout<<endl;
			 textcolor(LIGHTBLUE);
			 cprintf("   1) New Book ");cout<<endl;
			 textcolor(LIGHTRED);
			 cprintf("   2) Search Book ");cout<<endl;
			 textcolor(RED);
			 cprintf("   3) Modify Book ");cout<<endl;
			 textcolor(YELLOW);
			 cprintf("   4) Delete Book ");cout<<endl;
			 textcolor(GREEN);
			 cprintf("   5) Display all Book ");cout<<endl;
			 textcolor(BROWN);
			 cprintf("   6) Return to main menu ");cout<<endl;
			  textcolor(CYAN);
			 cprintf("   7) EXIT ");cout<<endl;
			}
void menu()
{
	textcolor(CYAN);
	cprintf("    1) Book Register ");cout<<endl;
	textcolor(CYAN);
	cprintf("    2) Issue Register ");cout<<endl;
	textcolor(CYAN);
	cprintf("    3) EXIT ");cout<<endl;
							 }
void mainmenu2()
{
	textcolor(CYAN);
	cprintf("    1) Issue New Book ");cout<<endl;
	textcolor(CYAN);
	cprintf("    2) Show issued book  ");cout<<endl;
	textcolor(CYAN);
	cprintf("    3) EXIT ");cout<<endl;
	
							 }							 
};
//Object of New Book//
newbook c;
//***************************//
void star()
{
 int n,i,j,k,l;
 for(i=1;i<=79;i++)
		 {
		      gotoxy(i,2);
		      cout<<"*";
		      delay(10);
		 }
 for(j=2;j<=22;j++)//left
		 {
		   gotoxy(1,j);
		   cout<<"*";
		   delay(10);
		 }
 for(k=1;k<=79;k++)//bottom
		 {
		   gotoxy(k,23);
		   cout<<"*";
		   delay(10);
		 }
 for(l=22;l>=2;l--)
		 {
		   gotoxy(79,l);
		   cout<<"*";
		   delay(10);
		 } // decoration ends here
}
//******************************//
class fapup
{
private: 
    int s;
	char admno[6];
	char name[20];
	char stbno[6];
	int token;
 public:
	void create_student()
	{
		clrscr();
	 	cout<<"\nNEW STUDENT ENTRY...\n";
		cout<<"\nEnter The admission no. ";
		cin>>admno;
		cout<<"\n\nEnter The Name of The Student ";
		gets(name);
		token=0;
		stbno[0]='/0';
		cout<<"\n\nStudent Record Created..";
	}

	void show_student()
	{
		cout<<"\nAdmission no. : "<<admno;
		cout<<"\nStudent Name : ";
		puts(name);
		cout<<"\nNo of Book issued : "<<token;
		if(token==1)
			cout<<"\nBook No "<<stbno;
	getch();
	}
public:	
void issueentry()
{
	clrscr();
	int n;
	cout.width(20);
	cout<<"WELCOME TO BOOK Issue Register\n\n";
	c.mainmenu2();
	cout<<"\n\n Enter your choice : ";
	cin>>n;
	switch(n)
	{
		case 1: create_student();break;
		case 2: show_student();break;
	}
}


void Library()
{
clrscr(); star();
c.mainmenu();

	do
			{
			   cout.width(10);
			  cout<<"   ENTER YOUR CHOICE ";
			  cin>>s;
			  switch(s)
					  {

					   case 1:
									char ch;
									fin.open("file.dat",ios::out|ios::app);
									do
									{
										clrscr();
										star();
										c.NB();
										fin.write((char*)&c,sizeof(c));
										cout<<"\n\n\n\nDo You Want to Enter more Books..(Y/N?)";
										cin>>ch;
									}	while(ch=='y'||ch=='Y');
									fin.close();
								    clrscr(); star(); c.mainmenu();
									break;


					   case 2:
								   
								   fin.open("file.dat",ios::out|ios::in|ios::binary);
								   while(fin.read((char *)&c,sizeof(c)))
								   { 
								     cout<<"Enter the Book that You need to search : ";
								     cin>>rn;
								     pos=fin.tellg();
								     if(c.boono()==rn)
								     {
								     c.putbook();
								     fin.seekg(pos);
								     fin.write((char*)&c , sizeof(c));
								     foun='t';
								     break;
								     }
								     if(foun=='f')
								     {
								     cout<<"Book Not Found "<<endl;
								     }
								     }
								     fin.close();
								    delay(2000);clrscr();star();c.mainmenu();break; 
					   case 3:
								   clrscr();star();
								   fin.open("file.dat",ios::out|ios::in|ios::binary);
								   while(fin.read((char *)&c,sizeof(c)))
								   { 
								     cout<<" Enter the Book No to be modified : ";
								     cin>>rn;
								     pos=fin.tellg();
								     fin.read((char *)&c,sizeof(c));
								     if(c.boono()==rn)
								     {
								     c.putbook();
								     c.modify();
								     fin.seekg(pos);
								     fin.write((char*)&c , sizeof(c));
								     foun='t';
								     break;
								     }
								     if(foun=='f')
								     {
								     cout<<"Book Not Found "<<endl;
								     }
								     }
								     fin.close();
								    delay(2000);clrscr();star();c.mainmenu();break;
						case 4:
									int n;
								    clrscr();	star();	c.mainmenu();
								    cout<<"\n\n\n\tDELETE BOOK ...";
								    cout<<"\n\nEnter The Book no. of the Book You Want To Delete : ";
								    cin>>n;
								    fin.open("file.dat",ios::in|ios::out);
								    fstream fp2;
								    fp2.open("Temp.dat",ios::out|ios::binary);
								    fin.seekg(0,ios::beg);
								    while(fin.read((char*)&c,sizeof(c)))
								   {
									if(c.boono()!=n)
									{
										cout<<"..Book Found..";
			 							fp2.write((char*)&c,sizeof(c));
									}

								}

								fp2.close();
								fin.close();
								remove("file.dat");
								rename("Temp.dat","file.dat");
								cout<<"\n\n\tRecord Deleted ..";
								 delay(1000);clrscr();star();c.mainmenu();
									break;

					   case 5: display_all();
					break;
					   case 6: ulta();
					   case 7:	 exit(0);


						default:cout<<"Invalid choice ";break;
					  }
				} while(s!=7);

}

void ulta()
{
    clrscr(); star();
    c.menu();
	do
			 {
			   cout.width(10);
			  cout<<"   ENTER YOUR CHOICE ";
			  cin>>s;
			  switch(s)
					  {

					   case 1:  Library();
					   case 2:  issueentry();
					   case 3:	 exit(0);


						default:cout<<"Invalid choice \n\n";break;
					  }
				} while(s!=2);

}	   	


void display_all()
	 { clrscr();
	 cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	 fin.open("file.dat",ios::in);
	 while(fin.read((char*)&c,sizeof(c)))
	 { c.putbook();
	   cout<<"\n\n";
	 }
	fin.close();
	 delay(3000);clrscr();star();c.mainmenu();
	 }
};
//***********************************************class all ends here***********************************
fapup ass;
//*****************************************************************************************************


void intro()
{
	cout.width(10);
	cout<<"   Library Management System \n\n";
	cout<<"   Loading ";
	for(int i=0;i<3;i++)
	{
		cout<<".";
		delay(900);
	}
	clrscr();
	star();
	c.menu();
}


//char arr[50];
//*************************************************************************
//all classes ends here
//*************************************************************************


void main()
{
 clrscr(); star();
 intro();
 ass.ulta();
	   getch();
 }


