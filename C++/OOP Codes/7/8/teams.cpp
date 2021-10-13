#include<iostream>
#include<conio.h>
#include<string>
#include<bits/stdc++.h> 
using namespace std;
int team_num;
class Team{
	public:
		string team;
		Team(){
			
		}
		Team(string t){
			team=t;
		}
	void team_show();
	void kick_player();
};
class Player:public Team{
	public:
		string name[11],height[11],dob[11];
		void set_info();
		void player_show();
		void speed_kick();
};
class Speed:public Team{
	public:
		string speed[11];
		void set_speed();
		void show_speed();
		void skills_kick();
};
class Skills:public Team{
	public:
		string position[11],skills[11];
		void set_skills();
		void show_skills();	
		void kit_kick();
};
class Kit:public Skills{
	public:
		int kit[11];
		void set_kit();
		void kit_show();
};
void Player::set_info(){
		Player p;
		p.player_show();
}
void Speed::set_speed(){
		Speed s;
		s.show_speed();
		
}
void Skills::set_skills(){
		Skills s;
		s.show_skills();
		
}
void Kit::set_kit(){
		Kit k;
		k.kit_show();
		
}
void Team::team_show(){
	if(team=="Manchester"){
		team_num=1;
	cout<<"\t\t\t\t\t\t\t\t\t\tManchester\n\n";	
	}
	else{
		team_num=2;
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\tBarcelona\n\n";	
	}
	Team t;
	t.kick_player();
}
void Player::player_show(){
	if(team_num==1){
					string name[11]={"Paul Pogba       ","Alexis Sánchez   ","David de Gea     ","Ander Herrera    ","Antonio Valencia ","Marcus Rashford  ","Romelu Lukaku    ","Anthony Martial  ","Fred            ","Mason Greenwood  ","Luke Shaw       "};
            		string height[11]={"1.91 m","1.69 m","1.92 m","1.82 m","1.8 m"," 1.8 m"," 1.9 m"," 1.81 m","1.69 m","1.8 m","1.85 m"};  
             		string dob[11] = {"Mar 15,1993"," Dec 19,1988"," Nov 07,1990"," Aug 14,1989 ","Aug 04,1985"," Oct 31,1997"," May 13,1993"," Dec 05,1995"," Mar 05,1993"," Oct 01,2001","Jul 12,1995"};
             		cout<<"\nplayers name:\n\n";
             				for(int i=0;i<=10;i++){
		                    cout<<name[i]<<"  ";
		                }
		                    cout<<endl;
		                    cout<<"\nHeight:\n\n";
		                    for(int i=0;i<=10;i++){
		                    cout<<height[i]<<"             ";
		                    }
		                    cout<<endl;
		                    cout<<"\nDate of birth:\n\n";
		                    for(int i=0;i<=10;i++){
		                    cout<<dob[i]<<"       ";
		                    }
		                    cout<<endl;
		}
		else{
					string name[11]={"Lionel Messi     ","Philippe Coutinho","Luis Suárez      ","Ousmane Dembélé   ","Arturo Vidal     ","Kevin-Prince      ","Arthur Melo      ","Malcom           ","Gerard Piqué     ","Ivan Rakitic     ","Clément Lenglet  "};
            		string height[11]={"1.07 m","1.72 m","1.82 m","1.78 m"," 1.08 m","1.86 m"," 1.71 m","1.72 m","1.94 m","1.84 m","1.86 m"};
             		string dob[11]={"Jun 24,1987","  Jun 12,1992","  Jan 24,1987","  May 15,1997","   May 22,1987","  Mar 6,1987","    Aug 12,1996","  Feb 26,1997","  Feb 2,1987","   Mar 10,1988","  Jun 17,1995"};
             		        cout<<"\nPlayers name:\n\n";
							 for(int i=0;i<=10;i++){
		                    cout<<name[i]<<"  ";
		                    }
		                    cout<<endl;
		                    cout<<"\nHeight:\n\n";
		                    for(int i=0;i<=10;i++){
		                    cout<<height[i]<<"             ";
		                    }
		                    cout<<endl;
		                    cout<<"\nDate of birth:\n\n";
		                    for(int i=0;i<=10;i++){
		                    cout<<dob[i]<<"      ";
		                    }
		                    cout<<endl;
		}
	
	

	Player p;
	p.speed_kick();
}
void Speed::show_speed(){
	if(team_num==1){
			string speed[11]={"34.3 km/h"," 32.2 km/h"," 30.9 km/h"," 32.6 km/h"," 33.8 km/h"," 33.3 km/h"," 31.1 km/h"," 30.3 km/h"," 33.7 km/h"," 31.2 km/h","33.4 km/h"};
			cout<<"\nSpeed:\n\n";
			for(int i=0;i<=10;i++){
	        	cout<<speed[i]<<"         ";
        	}
        	cout<<endl;
		}
		else{
			string speed[11]={"30.9 km/h","34.3 km/h","32.2 km/h","33.3 km/h"," 32.6 km/h","33.8 km/h"," 33.7 km/h","31.1 km/h","30.3 km/h","33.4 km/h","31.2 km/h"};
			cout<<"\nSpeed:\n\n";
	    	for(int i=0;i<=10;i++){
	        	cout<<speed[i]<<"          ";
        	}
        	cout<<endl;
		}
	
	 Speed s;
     s.skills_kick();
}
void Skills::show_skills(){
	if(team_num==1){
			string position[11]={"Left-back       "," Center-back      ","Right-back       ","Right-midfield   ","Center-back      ","Center-midfield  ","Center-midfield  ","Left-midfield    ","Center-forward   ","Center-forward  ","goalkeeper      "};
        	string skills[11]={"spatial awareness","tacticl knowledge","dribbling        ","speed            ","coordination     ","endurance        ","ball control     ","body control     ","passing accuracy ","dribbling       ","Power            "};
        	cout<<"\nPosition:\n\n";
			for(int i=0;i<=10;i++){
		        cout<<position[i]<<"  ";
        	}
        	cout<<endl;
        	cout<<"\nSkills:\n\n";
        	for(int i=0;i<=10;i++){
	        	cout<<skills[i]<<"  ";
        	}
        	cout<<endl;
		}
		else{
			string position[11]={"Left-back       "," Center-back      ","Right-back       ","Right-midfield   "," Center-back      ","Center-midfield  "," Center-midfield  ","Left-midfield    ","Center-forward   ","Center-forward   ","goalkeeper      "};
        	string skills[11]={"dribbling        ","spatial awareness","speed            ","body control     "," tacticl knowledge","passing accuracy "," dribbling       "," coordination     ","endurance        ","ball control     ","Power            "};
	        cout<<"\nPosition:\n\n";
			for(int i=0;i<=10;i++){
		        cout<<position[i]<<"  ";
        	}
        	cout<<endl;
        	cout<<"\nSpeed:\n\n";
        	for(int i=0;i<=10;i++){
        		cout<<skills[i]<<"  "; 
         	}
         	cout<<endl;
		}
	Kit k;
	k.kit_kick();
}
void Kit::kit_show(){
	if(team_num==1){
			int kit[11]={7,15,3,20,36,1,17,13,4,2,14};
			cout<<"\nKit number:\n\n";
			for(int i=0;i<=10;i++){
		cout<<kit[i]<<"                  ";
	}
	cout<<endl;
		}
		else{
			int kit[11]={36,17,13,4,2,07,1,15,14,3,20};
			cout<<"\nKit number:\n\n";
			for(int i=0;i<=10;i++){
		cout<<kit[i]<<"                  ";
	}
	cout<<endl;
		}
			
}


void Team::kick_player(){
    Player p;
    p.set_info();
}
void Player::speed_kick(){
    Speed s;
	s.set_speed();
}
void Speed::skills_kick(){
    Skills s;
	s.set_skills();
}
void Skills::kit_kick(){
    Kit k;
    k.set_kit();
}  

int main(){
		Team t("Manchester");
		t.team_show();
		Team t2("Barcelona");
		t2.team_show();
		
	
}
