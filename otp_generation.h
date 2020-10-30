//Program to send OTP for given mobile number.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

char check_mobile_number_numberic_or_not();
int get_random_number();
void get_mobile_number();
void send_otp_to_mobile_number(char*);
char validate_otp();

void call_function() __attribute__ ((constructor));

int random_number;
char* mobile_number;

void get_mobile_number()
{
	printf("Enter mobile number: ");
	scanf("%s", mobile_number);
}

char check_mobile_number_numberic_or_not()
{
	char status = '0';
	if(mobile_number[0] != '0')
	{
		status = '1';
		int counter = 0;
		for(int index = 0; index < strlen(mobile_number); index++)
		{
			if(isdigit(mobile_number[index]) != 0)
			{
				counter++;
			}
			else
			{
				status = '0';
				return status;
			}
		}
		if(counter != 10)
		{
			status = '0';
		}
	}
	return status;
}

int get_length_of_mobile_number()
{
	return strlen(mobile_number);
}

void call_function()
{
	get_mobile_number();
	if((get_length_of_mobile_number() != 10) && (check_mobile_number_numberic_or_not() == '0'))
	{
		printf("Enter a valid mobile number.");
		exit(0);
	}
	send_otp_to_mobile_number(mobile_number);
	if(validate_otp() == '0')
	{
		printf("Enter a valid OTP number.");
		exit(1);
	}
}


void send_otp_to_mobile_number(char* mobile_number)
{
	random_number = get_random_number();
	char command[600];
	sprintf(command, "wget \"http://psms.goforsms.com/API/sms.php?username=srushtiimages&password=tecnics&from=WEBSMS&to=%s&msg=%d is your one time password.\" -q", mobile_number, random_number);
	system(command);
}

char validate_otp()
{
	int OTP;
	char status;
	printf("Enter OTP: ");
	scanf("%d", &OTP);
	if(random_number == OTP)
	{
		status = '1';
	}
	else
	{
		status = '0';
	}
	return status;
}

int get_random_number()
{
	srand(time(NULL));
	return rand(); 
}

