#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"eve_header.h"

cust *start,*new,*ptr,*prev;

/***********************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : add_cust_details***************************************************************************DESCRIPTION : This function is used to add customer details in the cu**************************************stomer database by the customer***************************************************************************************************************************************************************************************RETURNS : No returns**********************************************************************************************************************************************************************************************************************************************************************/

int add_cust_details()
{
//add customer details function starts here
	int PASS;
	char pwd[20];
	printf("Enter Your userid");
	scanf("%s",&PASS);
	printf("\n");
	printf("enter password:");
	scanf("%s",pwd);
if((strcmp (pwd,"emp123"))==0)
{
		if((new=(cust*)calloc(1,sizeof(cust)))==NULL)
		{
			printf("\nMemory allocation failure\n");
			return EXIT_FAILURE;
		}
		while(1)
		{

			printf("Enter Your Name:");
			scanf("%s",new->cust_name);
			if(strlen(new->cust_name)<5)
			{
				printf("\n Minimum 5 characters required\n");
				continue;
			}
			if(alpha_valid(new->cust_name)==1)
			{
				printf("\n Name should have only alphabets\n");
				continue;
			}
			else
				break;

		}
		while(1)
		{
			printf("Enter Your Aadharno");
			scanf("%lld",&new->Aadharno);

			if(!start)
			{
				start=new;
				new->next=NULL;
			}
			else if(new->Aadharno<start->Aadharno)
			{
				new->next=start;
				start=new;
			}
			else
			{
				for(ptr=start; (ptr) && ptr->Aadharno<new->Aadharno;prev=ptr,ptr=ptr->next);
				prev->next=new;
				new->next=ptr;
			
			}}
			while(1)
			{
				printf("Enter the Event Type");
				scanf("%s",new->event_type);
			}
			while(1)
			{
				printf("Enter the start date of your event");
				scanf("%d",&new->start_date);
			}

			while(1)
			{
				printf("Enter Your Budget");
				scanf("%d",&new->budget);
				if(!start)
				{
					start=new;
					new->next=NULL;
				}
				else if(new->budget<start->Aadharno)
				{
					new->next=start;
					start=new;
				}
				else
				{
					for(ptr=start; (ptr) && ptr->Aadharno<new->Aadharno;prev=ptr,ptr=ptr->next);
					prev->next=new;
					new->next=ptr;
				}
			}
			while(1)
			{
				printf("Enter NO.OF.DAYS of your event");
				scanf("%d",&new->ndays);

				if(!start)
				{
					start=new;
					new->next=NULL;
				}
				else if(new->ndays<start->ndays)
				{
					new->next=start;
					start=new;
				}
				else
				{
					for(ptr=start; (ptr) && ptr->Aadharno<new->Aadharno;prev=ptr,ptr=ptr->next);
					prev->next=new;
					new->next=ptr;
				}
			}
		
}
		else 
		{
			printf("\n WRONG PASSWORD \n");
			printf("\n Try Again.... OR Else Check Whether you are new to the application\n");


		}


}	     
//add customer details function ends here


/***********************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : view_cust_details**************************************************************************DESCRIPTION : This function is used to view customer details in the c**************************************ustomer database by the customer***************************************************************************************************************************************************************************************RETURNS : No returns*********************************************************************************************************************************************************************************************************************************************************************/
int view_cust_details()
{  
// view customer details function starts here
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}

	printf("\nName\n");
	printf("\nAadhar\n");

	printf("\nEvent-type\n");

	printf("\nstart date\n");
	printf("\n end date\n");
	printf("\nBudget\n");
	printf("\nNo.of days\n");
	for(ptr=start ; (ptr) ; ptr=ptr->next)
	{
		printf("\n%s\n  \n%lld\n \n%s\n \n%d\n  \n%d\n  \n%ld\n \n %d  \n",ptr->cust_name,ptr->Aadharno,ptr->event_type,ptr->start_date,ptr->budget,ptr->ndays);
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}
int edit_cust_details()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int Aadharno;
	printf("Enter your Aadharno");
	scanf("%lld",&Aadharno);
	for(ptr=start ; (ptr) && ptr->Aadharno!=Aadharno ; ptr=ptr->next);
	if(!ptr)
	{
		printf("Aadharno  %lld does not exist\n",Aadharno);
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("\n Existing name is %s name is %s\n",ptr->cust_name);
	printf("Enter new name-");
	scanf("%s",ptr->cust_name);
	printf("Enter new event-type");
	scanf("%s",ptr->event_type);
	int start_date;
	printf("enter start-date");
	scanf("%d",&ptr->start_date);
	printf("Enter new budget");
	scanf("%d",&ptr->budget);

	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}
//view customer details function ends here


/***********************************************************************************************************************************************************************************************************************************************************FUNCTION NAME :delete_cust_details*************************************************************************DESCRIPTION : This function is used to delete customer details in the**************************************customer database by the customer*************************************************************************************************************************************************************************************RETURNS : No returns********************************************************************************************************************************************************************************************************************************************************************/
int delete_cust_details()
{
//delete customer details function starts here
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int taadhar;
	printf("Enter Aadharno to delete record-");
	scanf("%d",&taadhar);
	if(taadhar == start->Aadharno)
	{
		ptr=start;
		start=start->next;
		free(ptr);
	}
	else
	{
		for(ptr=start ; (ptr) && ptr->Aadharno!=taadhar ; prev=ptr,ptr=ptr->next);{
		if(!ptr)
		{
			printf("Aadhar  no %lld does not exist\n",taadhar);
			system("read a");
			system("clear");
			return EXIT_FAILURE;
		
		}
	}
		prev->next=ptr->next;
		free(ptr);
		return EXIT_SUCCESS;
	
	}
}
//delete customer details function ends here
