#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
class stu
{
private:
string  name,id;
public:
void set_stu()
{
cout<<"enter name of a student: "<<endl;
getline(cin,name);
cout<<"enter id of a student: "<<endl;
getline(cin,id);
}
void print()
{
cout<<"student name you entered: "<<name<<endl;
cout<<"student id you entered: "<<id<<endl;
}
};
int main() {
stu s1;
ofstream fout;
for(int i=0;i<3;i++)
{
s1.set_stu();
s1.print();
}
fout.open("Record.txt");
fout.write((char*)&s1,sizeof(s1));
fout.close();
ifstream fin;
fin.open("Record.txt");
fin.read((char*)&s1,sizeof(s1));
fin.close();
return 0;
}
