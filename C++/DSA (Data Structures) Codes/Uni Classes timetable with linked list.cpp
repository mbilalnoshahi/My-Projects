#include<iostream> 
#include<string.h>  
using namespace std;


struct Node{
	string data;
	Node *next;
};


class timetable

{

private:

int size;
Node *top;	 
string day;
 

public:
	
	timetable()
	{
		size=0;
		top=NULL;
	}


void push_day()
{
	
	Node *N=new Node;
	cout<<endl<<endl<<"\tPlease Enter the day: "<<endl<<endl;
	cin>>day;
	
	N->data=day;
	N->next=NULL;
	
	if(top==NULL)
	{
		top=N;
		cout<<endl<<endl<<"\Today is Monday..! "<<endl<<endl;
	}
	else
	{
		N->next=top;
		top=N;
	}
}
	
void see_timetable()
{
	
cout<<endl<<endl<<"\tPlease Enter the day: "<<endl<<endl; 
cin>>day;  
if(day == "monday") 
{ 
cout<<endl<<endl<<"\t.....START UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Differential Equations"<<endl<<endl;
cout<<endl<<endl<<"\tTeacher: Dr. Tauseef"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 08:30am To 10:30am "<<endl<<endl; 
cout<<endl<<endl<<"\tPlace: Lecture Hall 01 (Math Dept) "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Object Oriented Programming"<<endl<<endl;
cout<<endl<<endl<<"\tTeacher: Asst Prof Veena Dilshad"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 10:30am To 12:30pm "<<endl<<endl; 
cout<<endl<<endl<<"\tPlace: CSE-07 "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;

cout<<endl<<endl<<"\tBreak Time"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 12:30pm To 01:30pm "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSelf Study"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 01:30pm To 04:30pm"<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\t.....END UNIVERSITY....."<<endl<<endl;  
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day == "tuesday") 
{ 
cout<<endl<<endl<<"\t.....START UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\tSelf Study"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 08:30am To 09:30am"<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Digital Logic Design"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Dr. Younas Javaid"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 09:30am To 10:30am"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: CSE-04 "<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSelf Study"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 10:30am To 11:30am"<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Technical Report Writing"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Lec Tauqeer Anjum"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 11:30am To 12:30pm"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: CSE-08 "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tBreak Time"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 12:30pm To 01:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Object Oriented Programming"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Engr Jawad Qamar"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 01:30pm To 04:30pm"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: DSP Lab "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;

cout<<endl<<endl<<"\t.....END UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day == "wednesday") 
{ 
cout<<endl<<endl<<"\t.....START UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Object Oriented Programming"<<endl<<endl;
cout<<endl<<endl<<"\tTeacher: Asst Prof Veena Dilshad"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 08:30am To 09:30am "<<endl<<endl; 
cout<<endl<<endl<<"\tPlace: CSE-04 "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Digital Logic Design"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Dr. Younas Javaid"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 09:30am To 11:30am"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: CSE-08 "<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSelf Study"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 11:30am To 12:30pm"<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tBreak Time"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 12:30pm To 01:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Community Service"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Lec Shahzad Arif & Engr Shahbaz Khan"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 01:30pm To 04:30pm"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: Nusrat Auditorium "<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;

cout<<endl<<endl<<"\t.....END UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day == "thursday") 
{ 
cout<<endl<<endl<<"\t.....START UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Computer Aided Engineering Design"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Asst Prof Saad Arif"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 08:30am To 11:30am"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: DSP Lab "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Differential Equations"<<endl<<endl;
cout<<endl<<endl<<"\tTeacher: Dr. Tauseef"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 11:30am To 12:30pm "<<endl<<endl; 
cout<<endl<<endl<<"\tPlace: Lecture Hall 01 (Math Dept) "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tBreak Time"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 12:30pm To 01:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;

cout<<endl<<endl<<"\tSelf Study"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 01:30pm To 02:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;

cout<<endl<<endl<<"\tSubject: Technical Report Writing"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Lec Tauqeer Anjum"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 02:30pm To 04:30pm"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: CSE-07 "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\t.....END UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day == "friday") 
{ 
cout<<endl<<endl<<"\t.....START UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Islamic Studies"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Lec Majida Zaheer"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 08:30am To 10:30am"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: CSE-04 "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSelf Study"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 10:30am To 12:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;

cout<<endl<<endl<<"\tBreak Time"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 12:30pm To 01:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\tSubject: Digital Logic Design"<<endl<<endl; 
cout<<endl<<endl<<"\tTeacher: Engr Shahbaz Khan"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 01:30pm To 04:30pm"<<endl<<endl;
cout<<endl<<endl<<"\tPlace: Digital Lab "<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
cout<<endl<<endl<<"\t.....END UNIVERSITY....."<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day=="sunday"|| "saturday") 
{ 
cout<<endl<<endl<<"\tUniversity will be Off Today!"<<endl<<endl;
cout<<endl<<endl<<"\tEnjoy, Go to sleep :p"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl; 
}
else
{
cout<<endl<<endl<<"Error, Default Input..."<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 

}


void see_free_slots()
{
cout<<endl<<endl<<"\tPlease Enter the day: "<<endl<<endl; 
cin>>day;  
if(day == "monday") 

{
cout<<endl<<endl<<"\tFree Slots are:"<<endl<<endl;  
cout<<endl<<endl<<"\tTiming: 01:30pm To 04:30pm"<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day == "tuesday") 

{ 
cout<<endl<<endl<<"\tFree Slots are:"<<endl<<endl;
cout<<endl<<endl<<"\tTiming: 08:30am To 09:30am"<<endl<<endl;
cout<<endl<<endl<<"\tTiming: 10:30am To 11:30am"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;

} 
else if(day == "wednesday") 
{
cout<<endl<<endl<<"\tFree Slots are:"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 11:30am To 12:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day == "thursday") 
{ 
cout<<endl<<endl<<"\tFree Slots are:"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 01:30pm To 02:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 
else if(day == "friday") 
{ 
cout<<endl<<endl<<"\tFree Slots are:"<<endl<<endl; 
cout<<endl<<endl<<"\tTiming: 10:30am To 12:30pm"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
}
else if(day=="sunday"|| "saturday") 
{ 
cout<<endl<<endl<<"\tUniversity will be Off Today!"<<endl<<endl;
cout<<endl<<endl<<"\tEnjoy, Go to sleep :p"<<endl<<endl;
cout<<endl<<endl<<"\t****************************************"<<endl<<endl; 
}
else
{
cout<<endl<<endl<<"Error, Default Input..."<<endl<<endl; 
cout<<endl<<endl<<"\t****************************************"<<endl<<endl;
} 

}	


	
};

int main() 
{ 
int ch;
cout<<endl<<"\t........WELCOME HERE........"<<endl<<endl;
cout<<"\t........Following is my Class Time Table(EE-2k18)........"<<endl<<endl;

cout<<"\t........For see class table, firstly please login to the account........"<<endl<<endl;

string username,password;

if (username!="hammad"& password!="hammad007")
{
	cout<<"\t........Error, Please Enter correct Username and Password........"<<endl<<endl;

}

else
{
cout<<"\t........Login Successfully........"<<endl<<endl;

do{

cout<<endl<<"\t1- SEE TIME TABLE........"<<endl<<endl;
cout<<endl<<"\t2- SEE FREE SLOTS........"<<endl<<endl;
cout<<endl<<"\t0- EXIT........"<<endl<<endl;

timetable t1;
cout<<endl<<"\t........Now select your choice........"<<endl<<endl;
cin>>ch;

switch (ch)
{
case 0:
	break;

case 1:
	
t1.see_timetable();
break;

case 2:
t1.see_free_slots();
break;

case 3:
t1.push_day();
break;
}
}
while(ch!=0);

}
return 0; 

}
