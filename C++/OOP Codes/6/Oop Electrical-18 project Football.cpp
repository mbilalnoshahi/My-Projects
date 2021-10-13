#include<iostream>
#include<string>
using namespace std;
int count;
class team
{
	public:
		string team1;
		team()
		{
			
		}
		team(string t1)
		{	
			team1=t1;
		}
	void display_team();
};
class player:public team
{
		string name[11],height[11],record[11],dob[11];
	public:
	
		void show_player_info();
		void speed_kick();
};
class speed:public team{
	public:
		string speed1[11];
		void set_player_speed();
		void show_speed();
		void skills_kick();
};
class skills:public team{
	public:
		string position[11],skill[11];
		void set_skills();
		void show_skills();	
		void kit_kick();
};
class kit:public skills{
	public:
		int kit1[11];
		void set_kit();
		void kit_show();
};


void skills::set_skills(){
		skills s1;
		s1.show_skills();
		
}
void kit::set_kit(){
		kit k;
		k.kit_show();
		
}





void team::display_team(){
	if(team1=="\tBarcelona"){
		count=1;
	cout<<endl<<endl<<"\tBarcelona"<<endl<<endl;	
	}
	else
	{

	cout<<endl<<endl<<"\tLiverpool"<<endl<<endl;	
	}

	player p1;
    p1.show_player_info();
}
void player::show_player_info(){
	if(count==1){
					string name[11]={" Jordi Alba "," Samuel Umtiti "," Sergi Roberto "," Clément Lenglet "," Gerard Piqué "," Nélson Semedo "," Sergio Busquets "," Arthur "," Carles Aleñà "," Arturo Vidal "," Lionel Messi "};
            			string dob[11] = {" Dec 12,1992 "," April 19,1990 "," Nov 11,1990 "," Mar 02,1990 "," Mar 16,1988 "," June 12,1993 "," June 21,1992"," Nov 26,1989 "," Oct 11,1994 "," Sep 02,1994 "," Dec 06,1992 "};
					string height[11]={" 1.69 m "," 1.71 m "," 1.85 m "," 1.81 m "," 1.87 m "," 1.82 m "," 1.91 m "," 1.91 m "," 1.75 m "," 1.83 m "," 1.93 m "};  
                    string record[11]={" 540 goals "," 490 goals "," 741 goals "," 890 goals "," 320 goals "," 151 goals "," 239 goals "," 679 goals "," 580 goals "," 670 goals "," 940 goals "};
             		 cout<<endl<<endl<<"\tName of Players of Team Barcelona= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<name[i]<<"  ";
		                    }
		                        cout<<endl<<endl<<"\tDate of Birth of the Players in a given Sequence= "<<endl<<endl;
		                    for(int j=0;j<11;j++){
		                    cout<<dob[j]<<"  ";
		                    }
		                    
		                    cout<<endl<<endl<<"\tHeight of the Players in a given Sequence= "<<endl<<endl;
		                    for(int k=0;k<11;k++){
		                   cout<<height[k]<<"  ";
		                    }
		                    cout<<endl<<endl<<"\tRecords of the Players in a given Sequence= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<record[i]<<"  ";
		                    }
		}
		else { 
					string name[11]={" Virgil van Dijk "," Andrew Robertson "," Trent Alexander-Arnold "," Joe Gomez "," Dejan Lovren "," Joel Matip "," Naby Keïta "," Fabinho "," Georginio Wijnaldum "," Alex Oxlade-Chamberlain "," Jordan Henderson "};
            		string dob[11]={" Jan 11,1990 "," Feb 20,1991 "," Mar 21,1988 "," June 13,1994 "," Jul 23,1988 "," Feb 9,1990 "," Sep 9,1994 "," Nov 2,1992 "," Jan 7,1989 "," Nov 4,1987 "," Dec 13,1990 "};
					string height[11]={" 1.72 m "," 1.75 m "," 1.85 m "," 1.83 m "," 1.82 m "," 1.84 m "," 1.88 m "," 1.90 m "," 1.92 m "," 1.91 m "," 1.87 m "};
					string record[11]={" 771 goals "," 890 goals "," 888 goals "," 679 goals "," 189 goals "," 167 goals "," 442 goals "," 420 goals "," 397 goals "," 590 goals "," 672 goals "};
             		        cout<<endl<<endl<<"\tName of Players of Team Liverpool= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<name[i]<<"  ";
		                    }
		                        cout<<endl<<endl<<"\tDate of Birth of the Players in a given Sequence= "<<endl<<endl;
		                    for(int j=0;j<11;j++){
		                    cout<<dob[j]<<"  ";
		                    }
		                    
		                    cout<<endl<<endl<<"\tHeight of the Players in a given Sequence= "<<endl<<endl;
		                    for(int k=0;k<11;k++){
		                   cout<<height[k]<<"  ";
		                    }
		                    cout<<endl<<endl<<"\tRecords of the Players in a given Sequence= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<record[i]<<"  ";
		                    }
		                
		}

speed s;
	s.set_player_speed();
}
void speed::show_speed(){
	if(count==1){
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
	
	 speed s;
     s.skills_kick();
}
void skills::show_skills(){
	if(count==1){
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
	kit k;
	k.kit_kick();
}
void kit::kit_show(){
	if(count==1){
			int kit[11]={18,23,20,15,3,2,5,8,21,22,10};
			cout<<"\nKit number:\n\n";
			for(int i=0;i<=10;i++){
		cout<<kit[i]<<"                  ";
	}
	cout<<endl;
		}
		
		else if(count==2){
			int kit[11]={4,26,66,12,6,32,8,3,5,21,14};
			cout<<"\nKit number:\n\n";
			for(int i=0;i<=10;i++){
		cout<<kit[i]<<"                  ";
	}
	cout<<endl;
		}
			
}



void speed::skills_kick(){
    skills s;
	s.set_skills();
}
void skills::kit_kick(){
    kit k;
    k.set_kit();
}  

int main(){
		team team1("Manchester");
		team team2("Barcelona");
		team1.display_team();
		team2.display_team();
		
	return 0;
}
