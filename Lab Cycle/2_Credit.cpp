
#include <iostream>
#include "Credit_Card.h"
#include <fstream>
#include <ctime>
#include <sstream>

using namespace std;



Credit_Card::Credit_Card()
{
	string fName;
	ifstream fin;
	ostringstream n;

	srand((unsigned)time(0));
	Ano = (rand() % 100000) + 1;
	n << Ano << flush;
	fName = "CC" + n.str() + ".txt";
	fin.open(fName.c_str());
	while (fin.is_open())
	{
		fin.close();
		Ano = (rand() % 100000) + 1;
		n << Ano << flush;
		fName = "CC" + n.str() + ".txt";
		fin.open(fName.c_str());


	}
	fin.close();
	vC_Limit = 1000;
	vBal_due = 0;
	CCName = fName;
	CCLName = "CCL" + n.str() + ".txt";
	write_status();
	write_log("Account " + n.str() + " opened. ");

}
Credit_Card::Credit_Card(int a)
{
	string fName;
	ifstream fin;
	ostringstream n;
	vErr = false;

	n << a << flush;
	fName = "CC" + n.str() + ".txt";
	fin.open(fName.c_str());
	if (fin.is_open())
	{
		Ano = a;
		fin >> vC_Limit;
		fin >> vBal_due;
		fin.close();
		CCName = fName;
		CCLName = "CCL" + n.str() + ".txt";
		write_log("Account " + n.str() + " reopened.");

	}
	else
	{
		Ano = 0;
		vC_Limit = 0;
		vBal_due = 0;
		vErr = true;
		vE_Msg = "Account " + n.str() + " could not be opened.";
	}


}
int Credit_Card::getAcc_No()
{
	return Ano;
}
double Credit_Card::getCredit_Limit()
{
	return vC_Limit;
}
double Credit_Card::getBalance_Due()
{
	return vBal_due;
}
double Credit_Card::Avail_Cred()
{
	return vBal_own;
}
void Credit_Card::Transaction1()
{

		vBal_own = vBal_own - charge + payment;
		vBal_due = vBal_due + charge - payment;

}
/*int Credit_Card::Cred_Inc()
{
	//if statement
}*/

void Credit_Card::write_status()
{
	vErr = false;
	vE_Msg = "";
	ofstream fout;
	fout.open(CCName.c_str());
	if (fout.is_open())
	{
		fout << vC_Limit << endl;
		fout << vBal_due << endl;
		fout.close();
	}
	else
	{
		vErr = true;
		vE_Msg = "Unable to write status file.";
	}
}
void Credit_Card::write_log(string m)
{
	vErr = false;
	vE_Msg = "";
	time_t rawtime;
	time(&rawtime);

	ofstream fout;
	fout.open(CCLName.c_str(), ios_base::app);

	if (fout.is_open())
	{
		fout << m << " on " << ctime(&rawtime);
		fout.close();
	}
	else
	{
		vErr = true;
		vE_Msg = "Unable to write log entry " + m;
	}


}
// write log to send to main, use vector, similar to 6

Credit_Card::~Credit_Card()
{

}
