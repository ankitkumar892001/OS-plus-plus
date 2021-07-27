//**********************************************
//Program for checking password correctness
//**********************************************


#include <fstream.h>
#include "password.h"
#include <conio.h>
#include <string.h>


int password::checkpd(char pass[50])
{
	fstream form("Password.dar",ios::out|ios::noreplace);
	form.close();
	fstream fs("Password.dar",ios::binary|ios::in);
	if(!fs)
	{
		cout<<"not able to check";
		getch();
		return 0;
	}
	fs.getline(buffer,sizeof(buffer));
	if(strcmp(buffer,pass)==0)
		return 1;
	return 0;
}
