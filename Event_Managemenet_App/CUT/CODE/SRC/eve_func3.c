#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"eve_header.h"

EM *start1,*new1,*ptr1,*prev1;
extern cust *start, *new, *ptr, *prev;

/****************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : add_empersonal_details*********************************************************************DESCRIPTION: This function is used to add event manager personal*******************************************details in the event manager database by the event manager*************************************************RETURNS : No returns*******************************************************
 ********************************************************************************************************************************************************************************************************************/

int add_empersonal_details()
{
//adding event manager personal details function starts here
	int CODE;
	char psd[20];
	printf("enter EMCODE:");
	scanf("%d",&CODE);
	printf("\n");
	printf("enter password:");
	scanf("%s",psd);
	//move further only if the user is authorized
	if((strcmp (psd,"emp123"))==0)
	{

	if((new1=(EM*)calloc(1,sizeof(EM)))==NULL)
	{
		printf("\nmemory allocation failure\n");
		return EXIT_FAILURE;
	}
	while(1)
	{
		printf("\n enter your name:");
		scanf("%s", new1->name);
		if(strlen(new1->name)<5)
		{
			printf("\n minimum 5 characters required\n");
			continue;
		}
		if(alpha_valid(new1->name)==1)
		{
			printf("\n name should have only alphabets\n");
			continue;
		}
		else
			break;
	}
	while(1)
	{
	printf("\nenter your EMCODE-\n");
	scanf("%s",&new1->EMCODE);
	if(!start1)
	{
		start1=new1;
		new1->next=NULL;
	}
	else if(new1->EMCODE<start1->EMCODE)
	{
		new1->next=start1;
		start1=new1;
	}
	else
	{
		for(ptr1=start1; (ptr1)&& ptr1->EMCODE<new1->EMCODE; prev1=ptr1, ptr1=ptr1->next);
		prev1->next=new1;
		new1->next=ptr1;
	}
	}
	while(1)
	{

	printf("\nenter your password-\n");
	scanf("%s",&new1->password);
	if(!start1)
	{
		start1=new1;
		new1->next=NULL;
	}
	else if(new1->password<start1->password)
	{
		new1->next=start1;
		start1=new1;
	}
	else
	{
		for(ptr1=start1; (ptr1)&& ptr1->password<new1->password; prev1=ptr1, ptr1=ptr1->next);		
		prev1->next=new1;
		new1->next=ptr1;
		}

	}
	while(1)
	{
	printf("\nenter event specialized:\n");
	scanf("%s",&new1->specialized);
	}
        while(1)
	{
	printf("\nenter event assigned :\n");
	scanf("%s",&new1->event_assigned);
	}
	while(1)
	{
	printf("\nenter your experience :\n");
	scanf("%d",&new1->experience);
	}
	while(1)
	{
	if(!start1)
	{
		start1=new1;
		new1->next=NULL;
	}
	else if(new1->experience<start1->experience)
	{
		new1->next=start1;
		start1=new1;
	}
	else
	{
		for(ptr1=start1; (ptr1)&& ptr1->experience<new1->experience; prev1=ptr1, ptr1=ptr1->next);
		prev1->next=new1;
		new1->next=ptr1;
	}
	}
	while(1)
	{
	printf("\n enter nevents_completed :\n");
	scanf("%d",&new1->nevents_completed);
	if(!start1)
	{
		start1=new1;
		new1->next=NULL;
	}
	else if(new1->nevents_completed<start1->nevents_completed)
	{
		new1->next=start1;
		start1=new1;
	}
	else
	{
		for(ptr1=start1; (ptr1)&& ptr1->nevents_completed<new1->nevents_completed; prev1=ptr1, ptr1=ptr1->next);
		prev1->next=new1;
		new1->next=ptr1;
	}
	
		
}
}
       else
 {
	 printf("\n WRONG PASSWORD \n");
	 printf(" \n Try Again...!!!!!\n");
	
 }
	}


//adding event manager personal details function ends here

/********************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : view_empersonal_details********************************************************************DESCRIPTION : This function is used to view the event manager personal 
***********************************details in the event manager database by the event manager*************************************************RETURNS : No returns*************************************************************************************************************************************************************************************************************************************************************************/

int view_empersonal_details()
{
//view event manager personal details function starts here
	if(!start1)
	{
		{
			printf("\nEmpty list\n");
			system("read a");
			system("clear");
			return EXIT_FAILURE;
		}
		printf("\n name\n");
		printf("\n specialized\n");
		printf("\n event_assigned\n");
		printf("\n experience\n");

		for(ptr1=start1 ; (ptr1) ; ptr1=ptr1->next)
		{
			printf("\n %s %s %s %s \n",ptr1->name,ptr1->specialized,ptr1->event_assigned,ptr1->experience);
		}
		system("read a");
		system("clear");
		return EXIT_SUCCESS;
	}
}
//view event manager personal details function ends here

/****************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : edit_empersonal_details*********************************************************************DESCRIPTION: This function is used to edit event manager personal*******************************************details in the event manager database by the event manager*************************************************RETURNS : No returns******************************************************
 ********************************************************************************************************************************************************************************************************************/

int edit_empersonal_details()
{
//editing event manager personal details function starts here
	if(!start1)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("\n existing name is %s name is %s\n", ptr1->name);
	printf("enter new name:");
	scanf("%s",ptr1->name);
	printf("enter new specialized:");
	scanf("%s",ptr1->specialized);
	printf("\n enter new event_assigned:");
	scanf("%s",ptr1->event_assigned);
	printf("\n enter new experience :");
	scanf("%s",ptr1->experience);

	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}
// editing the event manager personal details function ends here

/****************************************************************************************************************************************************************************************************************************************************FUNCTION NAME : view_cust_details**************************************************************************DESCRIPTION: This function is used to view customer personal***********************************************details in the customer database by the event manager******************************************************RETURNS : No returns******************************************************
 ********************************************************************************************************************************************************************************************************************/

int view_cust_details()
{
//view customer details function by the event manager starts here
	if(!start)
	{
		printf("\n empty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("\nname\n");
	printf("\nAadhar\n");
	printf("\nEvent_type\n");
	printf("\nstart_date\n");
	printf("\nend_date\n");
	printf("\nbudget\n");
	printf("\nno.of budget\n");
	for(ptr=start; (ptr); ptr=ptr->next)
	{
		printf("\n %s %lld %s %d %d %d %ld %d \n", ptr->cust_name,ptr->Aadharno,ptr->event_type,ptr->start_date,ptr->budget,ptr->ndays);
	}
}

	
// view customer details function by the event manager ends here

