#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <termios.h>
#include <sys/types.h>
#include <unistd.h>
#define MAXPW 32
#include "eve_header.h"

extern cust *start, *ptr, *new, *prev;
extern EM *start1, *ptr1, *new1, *prev1;
e *start2, *ptr2, *new2, *prev2;

/***************************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : admin*********************************************DESCRIPTION : This function is used to handle all the other functions from the admin database******************************************************************************************************************************************************************RETURNS : no returns*****************************************************************************************************************************************************************************************************************************************************************/ 
int admin()
{
	//admin function starts here
	while(1)
	{
		int admin_id;
		char pswd[20];
		system("read a");
		system("clear");
		printf("Enter admin_id");
		scanf("Enter password:");
		scanf("%s",pswd);
		if(strcmp(pswd,"emp123")==0)
		{
			system("clear");
			int choice=0;

			while(choice!=15)
			{

				printf("\n1.add_cust_details\n2.edit_cust_details3.del_cust_details\n4.view_cust_details\n5.add_empersonal_details\n6.view_empersonal_details\n7.edit_empersonal_details\n8.delete_empersonal_details\n9.Maintain_reports\n10.event_completed_reports\n11.event_budget_overrun\n12.successful_event_managers\n13.pending_event_list\n14.valued_customer\n");
				printf("\nEnter your choice\n");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:add_cust_details();
					       break;
					case 2:edit_cust_details();
					       break;
					case 3:delete_cust_details();
					       break;
					case 4:view_cust_details();
					       break;
					case 5:add_empersonal_details();
					       break;
					case 6:view_empersonal_details();
					       break;
					case 7:edit_empersonal_details();
					       break;
					case 8:delete_empersonal_details();
					       break;
					case 9:Maintain_reports();
					       break;
					case 10:event_completed_reports();
						break;
					case 11:event_budget_overrun();
						break;
					case 12:successful_event_managers();
						break;
					case 13:pending_events_list();
						break;
					case 14:valued_customers();
						break;
					case 15:return EXIT_SUCCESS;
					default:printf("\nInvalid Choice\n");
						continue;
				}
			}
		}
		else if((strcmp(pswd,"emp123"))!=0)
		{
			printf("\nWrong password\n");
			printf("\nTry Again...\n");
			continue;
		}
		else 
			break;
		//admin function ends here

/***************************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : event*********************************************DESCRIPTION : This function is used to handle the events from the event database*******************************************************************************************************************************************************************************RETURNS : no returns*****************************************************************************************************************************************************************************************************************************************************************/
		int event()
		{
			//event function starts here
			system("read a");
			system("clear");

			int choice=0;
			while(1)
			{

				printf("\nEnter The Event Type\n");
				printf("\n1.Marriage\n2.Annual Day\n3.Product Launch\n");
				scanf("%d",&new2->choice);
				if(new2->choice>5)
				{
					printf("\n Enter valid event type\n");
					continue;
				}
				else
				{

					if(new2->choice==1)
					{
						strcpy(new2->event_type,"Marriage");
					}

					if(new2->choice==2)
					{
						strcpy(new2->event_type,"Annual Day");
					}
					if(new2->choice==3)
					{
						strcpy(new2->event_type,"Product Launch");
					}
				}
				break;
			}




			extern int event_id; 
			printf("Enter Event_id range is 1-12:");
			scanf("%d",&new2->event_id);
			if(new2->event_id<1 || new2->event_id>12)
			{
				printf("\n Invalid Event_id range is 1-20\n");

			}

		}
		if(start2)
		{
			for(ptr2=start2;(ptr1) && ptr2->event_id!=new2->event_id;ptr2=ptr2->next)
				if((ptr2) && ptr2->event_id==new2->event_id)
				{
					printf("\nevent_id %d is duplicate \n",new2->event_id);
					continue;
				}
				else
					break;
		}

		extern char cust_name;	
		printf("Enter the customer for event");
		scanf("%s",&cust_name);
		char em_event_assigned;
		printf("Enter em_event_assigned");
		scanf("%d",&em_event_assigned);
		extern int start_date;
		printf("Enter your start date");
		scanf("%d",&start_date);
		extern int ndays;
		printf("Enter no.of.days");
		scanf("%d",&ndays);
		extern double budget;
		printf("Enter your budget");
		scanf("%lf",&budget);
		extern double actual_exp;
		printf("Enter actual expenses");
		scanf("%lf",&actual_exp);
		char completion_status;
		printf("Enter completion status");
		scanf("%s",&completion_status);
		char remarks;
		printf("Enter remarks");
		scanf("%s",&remarks);
	}
}
//event function ends here

/***************************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : Event_Completed_Reports_**************************DESCRIPTION : This function is used to handle the event completed reports from the event databse***************************************************************************************************************************************************************RETURNS : no returns*****************************************************************************************************************************************************************************************************************************************************************/

int Event_Completed_Reports()

{
	//event completed reports function starts here
	char completion_status;
	if(completion_status=1)
	{
		printf("Event completed Reports");
		scanf("%s",&completion_status);
		completion_status++;



	}
	//event completed reports ends here


/***************************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : Event_with_budget_overrun***************************DESCRIPTION : This function is used to handle the event with budget overrun from the event database**********************************************************************************************************************************************************RETURNS : no returns*****************************************************************************************************************************************************************************************************************************************************************/
	int Event_with_budget_overrun()
	{
		//event with budget ovverrun function starts here
	}
	//event with budget overrun function ends here
	
	
/***************************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : Successful_Event_Managers***************************DESCRIPTION : This function is used to handle the reports of successfuk event managers from the event database***********************************************************************************************************************************************RETURNS : no returns*****************************************************************************************************************************************************************************************************************************************************************/
	int Successful_Event_Managers()
	{
		//successful event manager function starts here
	}
	//successful event manager function ends here
	int Pending_Events_List()
	{
		//pending events list function starts here
	}
	//pending events list function ends here
	int Valued_Customers()
	{
		//valued customer function starts here
	}
	//valued customer function ends here
}

