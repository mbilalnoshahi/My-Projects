
#include <iostream>
#include <string.h>
using namespace std;

class player
{

public:
			string name;
player()
{
	name='\0';
}
	void display_player()
	{
		cout<<endl<<endl<<"Player is= "<<name<<endl<<endl;
	}
	void set_player()
	{
		cout<<endl<<endl<<"Please Enter the name of player= "<<endl<<endl;
        cin>>name;	
	}
};

class speed : public player 
{
public:
	
		int speed1;
		speed()
		{
			speed1=0;
		}
	void display_speed()
	{
		cout<<endl<<endl<<"Speed of "<<name<<" is= "<<speed1<<"km/h\n"<<endl<<endl;
	}
	void set_speed()
	{
		cout<<endl<<endl<<"Please Enter the Speed of the Player= "<<endl<<endl;
		cin>>speed1;
	}
};

class skills : public speed
{
	
public:
		string skill,change_position,quality;
	skills()
	{
		skill='\0';
		change_position='\0';
		quality='\0';
	}
	void display_skills()
	{
		cout<<endl<<endl<<name<<" have "<<skill<<"' "<<change_position<<" and "<<quality<<endl<<endl;
	}
	void set_skills()
	{
		cout<<endl<<endl<<"Please Enter the Skills of the player= "<<endl<<endl;
        cin>>skill;
        cout<<endl<<endl<<"Please Enter the change in position of the player= "<<endl<<endl;
        cin>>change_position;
        cout<<endl<<endl<<"Please Enter the quality of the player= "<<endl<<endl;
        cin>>quality;
	}
};

class team:public skills 
{
public:
	string team1,position; 
	team()
	{
		team1='\0';
		position='\0';
	}
	void set_team()
	{
			cout<<endl<<endl<<"Please Enter the Team= "<<endl<<endl;
			cin>>team1;
			cout<<endl<<endl<<"Please Enter the position= "<<endl<<endl;
			cin>>position;
	}
	void display_team()
	{
		cout<<endl<<endl<<name<<" is playing in "<<team1<<" as a "<<position<<endl<<endl;
	}
};

class kit:public team 
{
 
public:
			int kit_no;
	string uniform_color;
kit()
{
	uniform_color='\0';
	kit_no=0;
}
	void set_kit()
	{
		cout<<endl<<endl<<"Please Enter the number of Kit of the player= "<<endl<<endl;
		cin>>kit_no;
		cout<<endl<<endl<<"Please Enter the kit color of the player= "<<endl<<endl;
		cin>>uniform_color;
	}
	void display_kit()
	{
		cout<<endl<<endl<<" in "<<kit_no<<" no. uniform, in "<<uniform_color<<" color\n";
	}


	void display(string name)
	{
		cout<<endl<<endl<<"Player is= "<<name<<endl;
	}
	void display(int speed1) 
	{
		cout<<endl<<endl<<"Speed of player "<<name<<" is= "<<speed1<<"km/h\n";
	}
	void display(string skill,string change_position,string quality) 
	{
		cout<<endl<<endl<<name<<" have "<<skill<<","<<change_position<<" and "<<quality<<endl<<endl;
	}
	void display(string team1,string position) 
	{
		cout<<endl<<endl<<name<<" now plays in "<<team1<<" as a "<<position<<endl<<endl;
	}
	void display(int kit_no,string uniform_color) 
	{
		cout<<endl<<endl<<name<<" is playing in "<<kit_no<<" no uniform, in "<<uniform_color<<" color.\n";
	}
};

int main() {
	int count=0;
cout<<endl<<"\t*******WELCOME HERE IN FOOTBALL GAME*******"<<endl<<endl;
string na,skill2,move,q,team2,p,kit_color;
int sp2,k_no;
string m;
	kit k2;
	k2.name=na;
	k2.position=p;
	k2.quality=q;
	k2.kit_no=k_no;
	k2.uniform_color=kit_color;
	k2.change_position=move;
	k2.skill=skill2;
	k2.speed1=sp2;
	k2.team1=team2;

player p1;
p1.set_player();
speed s1;
s1.set_speed();
skills s2;
s2.set_skills();
team t1;
t1.set_team();
kit k1;
k1.set_kit();

k2.display(na);
k2.display(sp2);
k2.display(team2,p);
k2.display(skill2,move,q);
k2.display(k_no,kit_color);
cout<<endl<<endl;
m=move;
	team teamA[11]; 
	kit teeamA[11];
	cout<<endl<<endl<<"\t*******FIRST TEAM*******"<<endl<<endl;
	teamA[0].team1 = "Barcelona"; teamA[0].name = "Hammad"; teamA[0].position = "Mid"; teeamA[0].kit_no = 1; teeamA[0].uniform_color = "Blue";
	teamA[0].display_team(); teeamA[0].display_kit();
	teamA[1].team1 = "Barcelona"; teamA[1].name = "Shehryar"; teamA[1].position = "Front"; teeamA[1].kit_no = 9; teeamA[1].uniform_color = "Blue";
	teamA[1].display_team(); teeamA[1].display_kit(); 
	teamA[2].team1 = "Barcelona"; teamA[2].name = "Ali"; teamA[2].position = "Right"; teeamA[2].kit_no = 10; teeamA[2].uniform_color = "Blue";
	teamA[2].display_team(); teeamA[2].display_kit(); 
	teamA[3].team1 = "Barcelona"; teamA[3].name = "Usman"; teamA[3].position = "Left"; teeamA[3].kit_no = 7; teeamA[3].uniform_color = "Blue";
	teamA[3].display_team(); teeamA[3].display_kit(); 
	teamA[4].team1 = "Barcelona"; teamA[4].name = "Shahid"; teamA[4].position = "Right_back"; teeamA[4].kit_no = 11; teeamA[4].uniform_color = "Blue";
	teamA[4].display_team(); teeamA[4].display_kit(); 
	teamA[5].team1 = "Barcelona"; teamA[5].name = "Junaid"; teamA[5].position = "Mid"; teeamA[5].kit_no = 12; teeamA[5].uniform_color = "Blue";
	teamA[5].display_team(); teeamA[5].display_kit(); 
	teamA[6].team1 = "Barcelona"; teamA[6].name = "Ilyas"; teamA[6].position = "Attack"; teeamA[6].kit_no = 18; teeamA[6].uniform_color = "Blue";
	teamA[6].display_team(); teeamA[6].display_kit(); 
	teamA[7].team1 = "Barcelona"; teamA[7].name = "Bilal"; teamA[7].position = "Left_back"; teeamA[7].kit_no = 16; teeamA[7].uniform_color = "Blue";
	teamA[7].display_team(); teeamA[7].display_kit(); 
	teamA[8].team1 = "Barcelona"; teamA[8].name = "Ahmar"; teamA[8].position = "Attack"; teeamA[8].kit_no = 121; teeamA[8].uniform_color = "Blue";
	teamA[8].display_team(); teeamA[8].display_kit(); 
	teamA[9].team1 = "Barcelona"; teamA[9].name = "Ahrar"; teamA[9].position = "Front"; teeamA[9].kit_no = 111; teeamA[9].uniform_color = "Blue";
	teamA[9].display_team(); teeamA[9].display_kit(); 
	teamA[10].team1 = "Barcelona"; teamA[10].name = "Adnan"; teamA[10].position = "Goal Keeper"; teeamA[10].kit_no = 101; teeamA[10].uniform_color = "Blue";
	teamA[10].display_team(); teeamA[10].display_kit(); 
	
	
	cout<<endl<<endl<<"\t*******SECOND TEAM*******"<<endl<<endl;
	
	team teamB[11];
	kit teeamB[11];
	
teamB[0].team1 = "Arsenal"; teamB[0].name = "Ikram"; teamB[0].position = "Goal Keeper"; teeamB[0].kit_no = 25; teeamB[0].uniform_color = "White";
	teamB[0].display_team(); teeamB[0].display_kit(); 
teamB[1].team1 = "Arsenal"; teamB[1].name = "Nazeer"; teamB[1].position = "Right_Back"; teeamB[1].kit_no = 12; teeamB[1].uniform_color = "White";
	teamB[1].display_team(); teeamB[1].display_kit(); 
	teamB[2].team1 = "Arsenal"; teamB[2].name = "Haris"; teamB[2].position = "Left_back"; teeamB[2].kit_no = 3; teeamB[2].uniform_color = "White";
	teamB[2].display_team(); teeamB[2].display_kit(); 
	teamB[3].team1 = "Arsenal"; teamB[3].name = "Faraz"; teamB[3].position = "Right"; teeamB[3].kit_no = 7; teeamB[3].uniform_color = "White";
	teamB[3].display_team(); teeamB[3].display_kit(); 
	teamB[4].team1 = "Arsenal"; teamB[4].name = "Waseem"; teamB[4].position = "Left"; teeamB[4].kit_no = 45; teeamB[4].uniform_color = "White";
	teamB[4].display_team(); teeamB[4].display_kit(); 
	teamB[5].team1 = "Arsenal"; teamB[5].name = "Imad"; teamB[5].position = "Mid"; teeamB[5].kit_no = 99; teeamB[5].uniform_color = "White";
	teamB[5].display_team(); teeamB[5].display_kit(); 
	teamB[6].team1 = "Arsenal"; teamB[6].name = "Hassan"; teamB[6].position = "Mid"; teeamB[6].kit_no = 34; teeamB[6].uniform_color = "White";
	teamB[6].display_team(); teeamB[6].display_kit(); 
	teamB[7].team1 = "Arsenal"; teamB[7].name = "Alamgir"; teamB[7].position = "Attack"; teeamB[7].kit_no = 35; teeamB[7].uniform_color = "White";
	teamB[7].display_team(); teeamB[7].display_kit(); 
	teamB[8].team1 = "Arsenal"; teamB[8].name = "Hayat"; teamB[8].position = "Attack"; teeamB[8].kit_no = 78; teeamB[8].uniform_color = "White";
	teamB[8].display_team(); teeamB[8].display_kit(); 
	teamB[9].team1 = "Arsenal"; teamB[9].name = "Khuram"; teamB[9].position = "Attack"; teeamB[9].kit_no = 32; teeamB[9].uniform_color = "White";
	teamB[9].display_team(); teeamB[9].display_kit(); 
	teamB[10].team1 = "Arsenal"; teamB[10].name = "Uzaifa"; teamB[10].position = "Right_Back"; teeamB[10].kit_no = 8; teeamB[10].uniform_color = "White";
	teamB[10].display_team(); teeamB[10].display_kit(); 

cout<<endl<<endl<<"\t&=FOOTBALL"<<endl<<endl;
if(m==move)
{
	++count;
}

if(count==0)
{
	cout<<endl<<"\tBALL IS AT REST"<<endl<<endl;
	cout<<endl<<na<<"|                   &                     |"<<endl<<endl;
}
else
{
	cout<<endl<<endl<<"\t*******BALL HITTED*******"<<endl<<endl;
    cout<<endl<<na<<"|                        &                |"<<endl<<endl;
    count++;
    cout<<endl<<na<<"|           &                             |"<<endl<<endl;
    cout<<endl<<na<<"|                                    &    |"<<endl<<endl;
    cout<<endl<<na<<"|                &                        |"<<endl<<endl;
}
	return 0;
}
