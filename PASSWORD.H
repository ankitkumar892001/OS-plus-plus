//****************************************************
//	Header file name: PASSWORD.H
//	Details: It ensures security of login password
//****************************************************

#ifndef PASSWORD_H
#define PASSWORD_H

class password
{
    private:
	char buffer[50];
    public:
	int checkpd(char *);
};

#endif
