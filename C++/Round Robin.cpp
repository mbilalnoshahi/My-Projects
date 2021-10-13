#include<iostream>
using namespace std;
int main()
{ int n, i, j, quantum, wt_total = 0, tat_total = 0, t = 0;
	float avg_wt, avg_tat;
	cout <<"Enter No.of Prcesses: ";
	cin >> n;
	int *p = new int[n];
	int *bt = new int[n];
	int *wt = new int[n];
	int *tat = new int[n];
	int *rem_bt = new int[n];
	cout <<"Enter Burst Time:\n";
	for (i = 0;i < n;i++)
	{p[i] = i + 1;
		cout <<"p "<< p[i] <<"=";
		cin >> bt[i];
		rem_bt[i] = bt[i];}
	cout <<"Enter Time Quantum: ";
	cin >> quantum;
	cout <<"\t\t\t\t\tGANTT CHART\n"<<endl<<endl;
	cout <<"|"<< 0;
	while (1)
	{           bool done = true;
		for (int i = 0; i < n; i++)
		{
			if (rem_bt[i] > 0)
			{         done = false;
if (rem_bt[i] > quantum)
{                            t += quantum;
					rem_bt[i] -= quantum;
					cout <<"|\tP"<< p[i] <<"\t|"<< t;           }
				else            {
					t = t + rem_bt[i];
					wt[i] = t - bt[i];
					rem_bt[i] = 0;
					cout <<"|\tP"<< p[i] <<"\t|"<< t;}}}
		if (done == true)
			break;}
	cout <<"|\n\n";
	for (i = 0;i < n;i++)
	{tat[i] = bt[i] + wt[i];
		wt_total = wt_total + wt[i];
		tat_total = tat_total + tat[i];
	}avg_wt = (float)wt_total / n;
	avg_tat = (float)tat_total / n;
	cout <<"Process \tBurst Time \t Waiting Time \tTurnaround_Time\n";
	for (i = 0;i < n;i++)
	{                  cout <<"p"<< p[i] <<"\t\t"<< bt[i] <<"\t\t"<< wt[i] <<"\t\t"<< tat[i] << endl ;}
	cout <<"Average Waiting Time: "<< avg_wt << endl;
	cout <<"Average Turnaround Time: "<< avg_tat << endl;
	delete[]p;
	delete[]bt;
	delete[]wt;
	delete[]tat;
	delete[]rem_bt;
	p = bt = wt = tat = rem_bt = NULL;
	return 0;}

