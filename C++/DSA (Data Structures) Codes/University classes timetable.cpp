//SOURCE CODE PART 1
#include<iostream>
#include<conio.h>
#include<ctime>
#include<string.h>
#include<cstring>
using namespace std;

int Time[8] = { 8,9,10,11,12,2,3,4 };
string Day[6] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
string Monday[8] = { "Physics","Chemistry","Maths","English","Programming","French","ECA","Reference" };
string Tuesday[8] = { "English","Maths","Chemistry","Physics","Reference","French","ECA","Programming" };
string Wednesday[8] = { "Physics","ECA","Maths","English","Programming","French","Chemistry","Reference" };
string Thursday[8] = { "Chemistry","Physics","Maths","English","Programming","Reference","ECA","French" };
string Friday[8] = { "Reference","Chemistry","Maths","English","Programming","French","ECA","Physics" };
string Saturday[8] = { "Physics","Programming","Maths","English","Chemistry","French","ECA","Reference" };


int time(int var1);
int main()
{
	int var1;
	int var2;
	int var3;
	cout << "Enter the Time" << endl;
	cin >> var1;
	char day[15];
	if (var1 == Time[0])
	{
		cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[0]<<endl;;
            cout<<Monday[1];
            }
            else
            {
                cout<<Friday[0]<<endl;
                cout<<Friday[1];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[0]<<endl;;
            cout<<Tuesday[1];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[0]<<endl;;
            cout<<Wednesday[1];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[0]<<endl;;
            cout<<Thursday[1];
            }
            else
            {

                cout<<Saturday[0]<<endl;
                cout<<Saturday[1];
            }
        }
	}
	if (var1 == Time[1])
	{
        		cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[1]<<endl;;
            cout<<Monday[2];
            }
            else
            {
                cout<<Friday[1]<<endl;
                cout<<Friday[2];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[1]<<endl;;
            cout<<Tuesday[2];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[1]<<endl;;
            cout<<Wednesday[2];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[1]<<endl;;
            cout<<Thursday[2];
            }
            else
            {

                cout<<Saturday[1]<<endl;
                cout<<Saturday[2];
            }
        }
	}
	
	if (var1 == Time[2])
	{
        cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[2]<<endl;;
            cout<<Monday[3];
            }
            else
            {
                cout<<Friday[2]<<endl;
                cout<<Friday[3];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[2]<<endl;;
            cout<<Tuesday[3];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[2]<<endl;;
            cout<<Wednesday[3];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[2]<<endl;;
            cout<<Thursday[3];
            }
            else
            {

                cout<<Saturday[2]<<endl;
                cout<<Saturday[3];
            }
        }
	}
	if (var1 == Time[3])
	{
         cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[3]<<endl;;
            cout<<Monday[4];
            }
            else
            {
                cout<<Friday[3]<<endl;
                cout<<Friday[4];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[3]<<endl;;
            cout<<Tuesday[4];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[3]<<endl;;
            cout<<Wednesday[4];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[3]<<endl;;
            cout<<Thursday[4];
            }
            else
            {

                cout<<Saturday[3]<<endl;
                cout<<Saturday[4];
            }
        }
	}
	if (var1 == Time[4])
	{
        cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[4]<<endl;;
            cout<<Monday[5];
            }
            else
            {
                cout<<Friday[4]<<endl;
                cout<<Friday[5];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[4]<<endl;;
            cout<<Tuesday[5];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[4]<<endl;;
            cout<<Wednesday[5];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[4]<<endl;;
            cout<<Thursday[5];
            }
            else
            {

                cout<<Saturday[4]<<endl;
                cout<<Saturday[5];
            }
        }
	}
	if (var1 == Time[5])
	{
         cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[5]<<endl;;
            cout<<Monday[6];
            }
            else
            {
                cout<<Friday[5]<<endl;
                cout<<Friday[6];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[5]<<endl;;
            cout<<Tuesday[6];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[5]<<endl;;
            cout<<Wednesday[6];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[5]<<endl;;
            cout<<Thursday[6];
            }
            else
            {

                cout<<Saturday[5]<<endl;
                cout<<Saturday[6];
            }
        }
	}
	if (var1 == Time[6])
	{
        cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[6]<<endl;;
            cout<<Monday[7];
            }
            else
            {
                cout<<Friday[6]<<endl;
                cout<<Friday[7];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[6]<<endl;;
            cout<<Tuesday[7];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[6]<<endl;;
            cout<<Wednesday[7];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[6]<<endl;;
            cout<<Thursday[7];
            }
            else
            {

                cout<<Saturday[6]<<endl;
                cout<<Saturday[7];
            }
        }
	}
	if (var1 == Time[7])
	{
           cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[7]<<endl;;
            cout<<Monday[8];
            }
            else
            {
                cout<<Friday[7]<<endl;
                cout<<Friday[8];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[7]<<endl;;
            cout<<Tuesday[8];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[7]<<endl;;
            cout<<Wednesday[8];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[7]<<endl;;
            cout<<Thursday[8];
            }
            else
            {

                cout<<Saturday[7]<<endl;
                cout<<Saturday[8];
            }
        }
	}
	if (var1 == Time[8])
	{
        cout << "Enter the day";
		cin>>day;
		var2 = strlen(day);
        if(strlen(day)==6)
        {
            if(day[1]=='o'){
            cout<<Monday[8]<<endl;;
            cout<<Monday[8];
            }
            else
            {
                cout<<Friday[8]<<endl;
                cout<<Friday[8];
            }
        }
        if(strlen(day)==7)
        {
            cout<<Tuesday[8]<<endl;;
            cout<<Tuesday[8];

        }
         if(strlen(day)==9)
        {
            cout<<Wednesday[8]<<endl;;
            cout<<Wednesday[8];

        }
        if(strlen(day)==8)
        {
            if(day[1]=='h'){
            cout<<Thursday[8]<<endl;;
            cout<<Thursday[8];
            }
            else
            {

                cout<<Saturday[8]<<endl;
                cout<<Saturday[8];
            }
        }
	}

	getch();
}

