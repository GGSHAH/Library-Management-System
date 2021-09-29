#include <iostream>
#include <string>
using namespace std;
int static stdi=0,booki=0,libi=0;
	int x,a;
	int delid,part;
	char gg;



struct sbook
{
	int id;
	string bookname;
	string author;
	string isbn;
	int price;
	int pages;
	int issuedby;
	string issuedon;
	string returndate;
	
	
	
};

sbook abooklist[10];

struct sstudent
{
	
int id;
string stdname;
int rollno;
int booksissued;

	
};

 sstudent studentlist[10];

struct slibrary
{
	struct sstudent;
	struct sbook;
};

slibrary lib[10];


void addstudent(sstudent[]);
void deletestudent(sstudent[]);
void showpart(sstudent[]);
void printstudent(sstudent[]);


void addbook(sbook[]);
void deletebook(sbook[]);
void partbook(sbook[]);
void printbook(sbook[],int);
void ascsort(sbook[]);
void dessort(sbook[]);

void libissue(slibrary[]);
void libreturn(slibrary[]);
void printlib(slibrary[]);


int main()
{

do
{
cout<<"Main Menu\n";
cout<<"1- Student\n2- Book\n3- Library\n4- Exit\n";
cin>>x;
cout<<endl;


switch (x)
{
	
	//Student Menu
	
	case 1:
		cout<<"Student Sub-Menu\n";
		cout<<"1.	Add New Student.\n2.	Delete Existing Student.\n3.	Show particular student.\n4.	Show all Students.\n\n";
	cin>>a;
	cout<<endl;
	if (a==1)
	{
		addstudent(studentlist);
		stdi++;
	}
	
	else if(a==2)
	{
	deletestudent(studentlist);
    }
    
else if(a==3)
{
showpart(studentlist);
}	

else if(a==4)
{

	printstudent(studentlist);
	
}

break;


//Book Menu

case 2:
   cout<<"Book Sub-Menu\n";
   cout<<"1.	Add New Book.\n2.	Delete Existing Book.\n3.	Show particular Book.\n4.	Show all Books.\n5.	Sort Books in Ascending order\n6.	Sort Books in Descending order.\n\n2";

cin>>a;
cout<<endl;

if(a==1)
{
	addbook(abooklist);
	booki++;
}
else if (a==2)
{
	deletebook(abooklist);
	
	
}

else if (a==3)
{
	partbook(abooklist);
	
}
else if(a==4)
{
	printbook(abooklist,10);
	
}
else if(a==5)
{
	ascsort(abooklist);
}

else if(a==6)
{
	dessort(abooklist);
}

break;


// Library Menu

   case 3:
   cout<<"Library sub menu \n";
   cout<<"1.issue a book \n2.Return a book \n3.Print which books have been issued \n";
   cin>>a;
   cout<<endl;
   if(a==1) 
   
   	libissue(lib);
   	
   
   else if(a==2)
   
   	libreturn(lib);
   
   else if(a==3)
   printlib(lib);

break;


case 4:
	continue;
	
	



}
	
cout<<"Want to Go back to the Menu ? (y/n):";
cin>>gg;
}while(gg=='y' && x!=4);

}




              // Student Functions

void addstudent(sstudent studentlist[])
{
		cout<<" Enter ID: ";
		cin>>studentlist[stdi].id;
		cin.ignore();
		cout<<" Enter Student Name: ";
		getline(cin,studentlist[stdi].stdname);
		cout<<" Enter rollno: ";
		cin>>studentlist[stdi].rollno;
		cout<<"Record Saved\n";
	
	
	
}

void deletestudent(sstudent studentlist[])
{
		cout<<"Enter Student ID which you want to delete: ";
		cin>>delid;
		int flag=0;
		int i=0;
		while(flag==0 && i<10)
		{
		if(delid==studentlist[i].id)
		{
		
			studentlist[i].id=0;
			studentlist[i].stdname= "";
			studentlist[i].rollno = 0;
		    studentlist[i].booksissued=0;
		    flag=1;

        }
        else
        i++;
    }
        cout<<"\nRecord Deleted\n";
	
	
	
}

void showpart(sstudent studentlist[])
{
	
		cout<<"Enter Student ID which you want to view: ";
	cin>>part;
	cout<<endl;
		int flag2=0;
		int i2=0;
		while(flag2==0 && i2<10)
		{
		if(part==studentlist[i2].id)
		{
		
			cout<<"Student ID: "<<studentlist[i2].id<<endl;
			cout<<"Student Name: "<<studentlist[i2].stdname<<endl;
			cout<<"Student RollNO: "<<studentlist[i2].rollno<<endl;
		    cout<<"Books Issued: "<<studentlist[i2].booksissued<<endl;
		    flag2=1;
        }
        else
        i2++;
	
	
        }
        if(flag2==0)
        cout<<"Record Not Found\n";
              
		
}

void printstudent(sstudent [])
{
	cout<<"\t\t\tList of All Students\n";
	for (int i=0;i<10;i++)
	{
		if(studentlist[i].id==0)
		{
			continue;
		}
		else
		{	
		
		cout<<"Student ID: "<<studentlist[i].id<<endl;
		cout<<"Student RollNO: "<<studentlist[i].rollno<<endl;
		cout<<"Student Name: "<<studentlist[i].stdname<<endl;
		cout<<"Books Issued: "<<studentlist[i].booksissued<<endl;
		cout<<endl<<endl;
	}
	}
}
	
	//Book Functions
	
void addbook(sbook abooklist[])
{
	cout<<"Enter Book ID: ";
	cin>>abooklist[booki].id;
	cout<<"\nEnter Book Name: ";
	cin.ignore();
	getline(cin,abooklist[booki].bookname);
	cout<<"\nEnter Author: ";
	cin.ignore();
	getline(cin,abooklist[booki].author);
	cout<<"\nEnter ISBN: ";
	cin>>abooklist[booki].isbn;
	cout<<"\nEnter Price: ";
	cin>>abooklist[booki].price;
	cout<<"\nEnter Pages: ";
	cin>>abooklist[booki].pages;
	cout<<"Record Saved\n";
			
	}	
	
	
void deletebook(sbook abooklist[])
{
	cout<<"Enter Book ID which you want to delete : ";
	cin>>delid;
	int flag3=0;
	int i3=0;
	while (flag3==0 && i3<10)
	{
		if(delid==abooklist[i3].id)
		{
			
			abooklist[i3].author="";
			abooklist[i3].bookname="";
			abooklist[i3].id=0;
			abooklist[i3].isbn="";
			abooklist[i3].issuedby=0;
			abooklist[i3].issuedon="";
			abooklist[i3].pages=0;
			abooklist[i3].price=0;
			 abooklist[i3].returndate="";
			flag3=1;
			
		}
		else
		i3++;
		
	}
	cout<<"\nRecord Deleted \n";
	
	
	}	
	
void partbook(sbook abooklist[])
{
	cout<<"Enter Book ID Which you want to view : ";
	cin>>part;
	int flag4=0;
	int i4=0;
	
	while(flag4==0 && i4<10)
	{
	
	if (part==abooklist[i4].id)
	{
		cout<<"\nBook ID: "<<abooklist[i4].id;
		cout<<"\nBook Name: "<<abooklist[i4].bookname;
		cout<<"\nAuthor: "<<abooklist[i4].author;
		cout<<"\nISBN: "<<abooklist[i4].isbn;
		cout<<"\nPrice: "<<abooklist[i4].price;
		cout<<"\nPages: "<<abooklist[i4].pages<<endl;
		flag4=1;
	}
	 else
	 i4++;
    }
    if (flag4==0)
    cout<<"\nRecord Not Found \n";
	
}	




void printbook (sbook abooklist[], int x)
{
	cout<<"\t\t\tList of All Books\n ";
	
	for (int i=0;i<x;i++)
	{
		if(abooklist[i].id==0)
		{
		continue;
		}
		else
		{
		
		cout<<"\nBook ID: "<<abooklist[i].id;
		cout<<"\nBook Name: "<<abooklist[i].bookname;
		cout<<"\nAuthor: "<<abooklist[i].author;
		cout<<"\nISBN: "<<abooklist[i].isbn;
		cout<<"\nPrice: "<<abooklist[i].price;
		cout<<"\nPages: "<<abooklist[i].pages;
	}
	cout<<endl<<endl;	
	}
	
	
	}	
	void ascsort(sbook abooklist[])
	{
		int h1,h3,h4;
		string h2, h5,h6;
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			if(abooklist[j].id>abooklist[j+1].id)
			{
				h1=abooklist[j].id;
				abooklist[j].id=abooklist[j+1].id;
				abooklist[j+1].id=h1;
				h5=abooklist[j].bookname;
				abooklist[j].bookname=abooklist[j+1].bookname;
				abooklist[j+1].bookname=h5;
				h6=abooklist[j].author;
				abooklist[j].author=abooklist[j+1].author;
				abooklist[j+1].author=h6;
				h2=abooklist[j].isbn;
				abooklist[j].isbn=abooklist[j+1].isbn;
				abooklist[j+1].isbn=h2;
				h3=abooklist[j].price;
				abooklist[j].price=abooklist[j+1].price;
				abooklist[j+1].price=h3;
				h4=abooklist[j].pages;
				abooklist[j].pages=abooklist[j+1].pages;
				abooklist[j+1].pages=h4;
			}
		}
		}	
		cout<<"\nBooks Sorted in Ascending Order.\n";
	}
	
	
	
		void dessort(sbook abooklist[])
	{
		int h1,h3,h4;
		string h2, h5,h6;
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			if(abooklist[j].id<abooklist[j+1].id)
			{
				h1=abooklist[j].id;
				abooklist[j].id=abooklist[j+1].id;
				abooklist[j+1].id=h1;
				h5=abooklist[j].bookname;
				abooklist[j].bookname=abooklist[j+1].bookname;
				abooklist[j+1].bookname=h5;
				h6=abooklist[j].author;
				abooklist[j].author=abooklist[j+1].author;
				abooklist[j+1].author=h6;
				h2=abooklist[j].isbn;
				abooklist[j].isbn=abooklist[j+1].isbn;
				abooklist[j+1].isbn=h2;
				h3=abooklist[j].price;
				abooklist[j].price=abooklist[j+1].price;
				abooklist[j+1].price=h3;
				h4=abooklist[j].pages;
				abooklist[j].pages=abooklist[j+1].pages;
				abooklist[j+1].pages=h4;
			}
		}
		}	
		cout<<"\nBooks Sorted in Descending Order.\n";
	}
	
	
	
	// library Functions
	
	void libissue( slibrary lib[])
	{
		
		int a;
		int flag5=0;
		int flag6=0;
		int i5=0;
		
		int i6=0;
			cout<<"Enter Book ID: ";
	cin>>a;
	
	while ( i5<=booki && flag5==0)
	{
		if(abooklist[i5].id==a)
		{
			cout<<"\nBook ID: "<<abooklist[i5].id;
		cout<<"\nBook Name: "<<abooklist[i5].bookname;
		cout<<"\nAuthor: "<<abooklist[i5].author;
		cout<<"\nISBN: "<<abooklist[i5].isbn;
		cout<<"\nPrice: "<<abooklist[i5].price;
		cout<<"\nPages: "<<abooklist[i5].pages;
		
		cout<<"\n Issued By: ";
		cin>>a;
		while (i6<=stdi && flag6==0)
		{
		
		if(studentlist[i6].id==a)
		{
			cout<<"Student Name: "<<studentlist[i6].stdname<<endl;
			cout<<"Student RollNO: "<<studentlist[i6].rollno<<endl;
		    studentlist[i6].booksissued++;
		    flag6=1;
		    libi++;
		    
		    abooklist[i5].issuedby=a;
		    
		  
		}
		  else
		    i6++;
	}
	
		if (flag6==0)
		break;
		
		cout<<"\n Issued On: ";
		cin.ignore();
		getline(cin,abooklist[i5].issuedon);
		cout<<"\nReturn Date: ";
		
		getline(cin,abooklist[i5].returndate);
		flag5=1;
		
							
		}
		else
		i5++;
		
				
	}
	
	if(flag5==0)
	cout<<"Record Not Found. Please Save Student/Book Information from Main Menu First.\n";
	
	else
	cout<<"Book Issued\n";
		
		
	

	
	}
  void libreturn(slibrary lib[])
  {
  	int a;
  	cout<<"\nEnter Book ID : ";
  	cin>>a;
  	
  	int i7=0;
  	int flag7=0;
  	int i8=0;
  	int flag8=0;
  	
  	while (i7<=booki && flag7==0)
  	{
	  
  	if(abooklist[i7].id==a)
  	{
  	a=abooklist[i7].issuedby;
  	
	  while (i8<=stdi && flag8==0)	
	  {
	  	if (studentlist[i8].id==a)
	  	{
		  
	  	studentlist[i8].booksissued--;
	  	flag8=1;
	  	flag7=1;
	  	cout<<"\nBook Returned.\n";
	  	abooklist[i8].issuedby=0;
	  }
	  else
	  i8++;
				}  		
  		
	  }
else
i7++;  	
  }
  
  if(flag7==0)
  cout<<"Record Not Found. Please Save Student/Book Information from Main Menu First.\n; ";
  
  }
  
  
  void printlib(slibrary lib[])
  {
     int i9=0;
     int flag9=0;
	 int flag10=0;
	 int i10=0;
     
     	
	while ( i9<=booki && flag9==0)
	{
		if(abooklist[i9].issuedby!=0)
		{
			cout<<"\nBook ID: "<<abooklist[i9].id;
		cout<<"\nBook Name: "<<abooklist[i9].bookname;
		cout<<"\nAuthor: "<<abooklist[i9].author;
		cout<<"\nISBN: "<<abooklist[i9].isbn;
		cout<<"\nPrice: "<<abooklist[i9].price;
		cout<<"\nPages: "<<abooklist[i9].pages;
		cout<<"\n Issued On : "<<abooklist[i9].issuedon;
		cout<<"\nReturn Date: "<<abooklist[i9].returndate;
		
		
	 while (i10<=stdi && flag10==0)	
	  {
	  	if (studentlist[i10].id==abooklist[i9].issuedby)
	  	{	cout<<"\nIssued By: "<<studentlist[i10].id;
            cout<<"\nStudent Name: "<<studentlist[i10].stdname<<endl;
			cout<<"\nStudent RollNO: "<<studentlist[i10].rollno<<endl;     
     
  	
  	
  }
  i10++;
}

}
i10=0;
i9++;
}
}

