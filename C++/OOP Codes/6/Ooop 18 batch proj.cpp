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
		team1='\0';
		}
		team(string t1)
		{	
			team1=t1;
		}
	void display_team();
};
class speed:public team{
		string speed1[11];
	public:
		void show_player_speed();
};
class player:public team
{
		string name[11],height[11],record[11],dob[11];
	public:	
		void show_player_info();
};
class skills:public team{
	string position[11],skill[11];
	public:
		void show_player_skills();	
};
class kit:public skills{
	string kit1[11];
	public:
		void show_player_kit();
};
void team::display_team(){
	if(team1=="Barcelona"){
		count=1;
	cout<<endl<<endl<<"Barcelona"<<endl<<endl;	
	}
	else
	{
	cout<<endl<<endl<<"Liverpool"<<endl<<endl;	
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
             		 cout<<endl<<endl<<"Name of Players of Team Barcelona= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<name[i]<<"  ";
		                    }
		                        cout<<endl<<endl<<"Date of Birth of the Players in a given Sequence= "<<endl<<endl;
		                    for(int j=0;j<11;j++){
		                    cout<<dob[j]<<"  ";
		                    }	                    
		                    cout<<endl<<endl<<"Height of the Players in a given Sequence= "<<endl<<endl;
		                    for(int k=0;k<11;k++){
		                   cout<<height[k]<<"  ";
		                    }
		                    cout<<endl<<endl<<"Records of the Players in a given Sequence= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<record[i]<<"  ";
		                    }
		}
		else { 
					string name[11]={" Virgil van Dijk "," Andrew Robertson "," Trent Alexander-Arnold "," Joe Gomez "," Dejan Lovren "," Joel Matip "," Naby Keïta "," Fabinho "," Georginio Wijnaldum "," Alex Oxlade-Chamberlain "," Jordan Henderson "};
            		string dob[11]={" Jan 11,1990 "," Feb 20,1991 "," Mar 21,1988 "," June 13,1994 "," Jul 23,1988 "," Feb 9,1990 "," Sep 9,1994 "," Nov 2,1992 "," Jan 7,1989 "," Nov 4,1987 "," Dec 13,1990 "};
					string height[11]={" 1.72 m "," 1.75 m "," 1.85 m "," 1.83 m "," 1.82 m "," 1.84 m "," 1.88 m "," 1.90 m "," 1.92 m "," 1.91 m "," 1.87 m "};
					string record[11]={" 771 goals "," 890 goals "," 888 goals "," 679 goals "," 189 goals "," 167 goals "," 442 goals "," 420 goals "," 397 goals "," 590 goals "," 672 goals "};
             		        cout<<endl<<endl<<"Name of Players of Team Liverpool= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<name[i]<<"  ";
		                    }
		                        cout<<endl<<endl<<"Date of Birth of the Players in a given Sequence= "<<endl<<endl;
		                    for(int j=0;j<11;j++){
		                    cout<<dob[j]<<"  ";
		                    }
		                    cout<<endl<<endl<<"Height of the Players in a given Sequence= "<<endl<<endl;
		                    for(int k=0;k<11;k++){
		                   cout<<height[k]<<"  ";
		                    }
		                    cout<<endl<<endl<<"Records of the Players in a given Sequence= "<<endl<<endl;
							 for(int i=0;i<11;i++){
		                    cout<<record[i]<<"  ";
		                    }
		}
speed s1;
s1.show_player_speed();
}
void speed::show_player_speed(){
	if(count==1){
			string speed[11]={" 30.9 km/h "," 34.3 km/h "," 31.2 km/h "," 36.7 km/h "," 36.4 km/h "," 32.9 km/h "," 30.7 km/h "," 37.7 km/h "," 34.8 km/h "," 35.7 km/h "," 33.6 km/h "};
			cout<<endl<<endl<<"Team Barcelona Players Speed= "<<endl<<endl;
			for(int i=0;i<11;i++){
	        	cout<<speed[i]<<"  ";
        	}
		}
		else{
			string speed[11]={" 32.4 km/h "," 35.2 km/h "," 33.7 km/h "," 35.2 km/h "," 31.2 km/h "," 35.4 km/h "," 34.5 km/h "," 30.7 km/h "," 38.3 km/h "," 32.43 km/h "," 32.3 km/h "};
			cout<<endl<<endl<<"Team Liverpool Players Speed= "<<endl<<endl;
	    	for(int j=0;j<11;j++){
	        	cout<<speed[j]<<"  ";
        	}
	}
	 skills s2;
     s2.show_player_skills();
}
void skills::show_player_skills(){
	if(count==1){
			string position[11]={" Goal Keeper "," Central Defender "," Left Back "," Wing Back "," Sweeper "," Central Midfield "," Full Back "," Centre Back "," Striker "," Sweeper "," Striker "};
        	string skills[11]={" Dribbling "," Passing Accuracy "," Body Control "," Speed "," Endurance "," Tactical Knowledge "," Risk Assessment "," Spatial Awareness "," Body Control "," Passing Accuracy "," Coordination "};
        	cout<<endl<<endl<<"Team Barcelona Players Position= "<<endl<<endl;
			for(int i=0;i<11;i++){
		        cout<<position[i]<<"  ";
        	}
        
        	cout<<endl<<endl<<"Team Barcelona Players Skills= "<<endl<<endl;
        	for(int j=0;j<11;j++){
	        	cout<<skills[j]<<"  ";
        	}
        
		}
		else{
			string position[11]={" Goal Keeper "," Full Back "," Wing Back "," Central Defender   "," Sweeper "," Central Midfield "," Centre Back "," Wide Midfield "," Striker "," Center Back "," Striker "};
        	string skills[11]={" Passing Accuracy "," Dribbling "," Ball Control "," Body Control "," Passing Accuracy "," Spatial Awareness"," Tactical Knowledge "," Risk Assessment "," Coordination "," Speed "," Body Control "};
	        cout<<endl<<endl<<"Team Liverpool Players Position= "<<endl<<endl;
			for(int i=0;i<11;i++){
		        cout<<position[i]<<"  ";
        	}
        
        	cout<<endl<<endl<<"Team Liverpool Players Skills= "<<endl<<endl;
        	for(int j=0;j<11;j++){
        		cout<<skills[j]<<"  "; 
         	}
    
		}
	kit k1;
	k1.show_player_kit();
}
void kit::show_player_kit(){
	if(count==1){
			string kit[11]={" 18 "," 23 "," 20 "," 15 "," 3 "," 2 "," 5 "," 8 "," 21 "," 22 "," 10 "};
			cout<<endl<<endl<<"Team Barcelona Players Kit Number in order= "<<endl<<endl;
			for(int i=0;i<11;i++){
		cout<<kit[i]<<"  ";
	}		}	
		else {
			string kit[11]={" 4 "," 26 "," 66 "," 12 "," 6 "," 32 "," 8 "," 3 "," 5 "," 21 "," 14 "};
			cout<<endl<<endl<<"Team Liverpool Players Kit Number in order= "<<endl<<endl;
			for(int j=0;j<11;j++){
		cout<<kit[j]<<"  ";
	}
			}	
}
int main(){
		team team1("\tLiverpool");
		team team2("\tBarcelona");
		cout<<endl<<endl<<"\t*****Liverpool*****"<<endl<<endl;
		team1.display_team();
		cout<<endl<<endl<<"\t*****Barcelona*****"<<endl<<endl;
		team2.display_team();		
	return 0;
}
