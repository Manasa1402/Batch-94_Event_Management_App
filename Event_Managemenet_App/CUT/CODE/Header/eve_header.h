#ifndef EVE_HEADER_H
#define EVE_HEADER_H
#define MAX 100

typedef struct Customer
{
	char cust_name[MAX];
	int choice;
	long long int Aadharno;
	int ndays[MAX];
	char start_date[MAX];
	char event_type[MAX];
	double budget;
	struct Customer *next;
}cust;

//temporary structure for customer
typedef struct cust_temp
{
	char cust_name[MAX];
	int choice;
	long long int Aadharno;
	int ndays[MAX];
	char start_date[MAX];
	char event_type[MAX];
	double budget;
}cust_temp;

typedef struct EventManager
{
	char name[MAX];
	char EMCODE;
	char password;
	char specialized;
	char event_assigned;
	char experience;
	int nevents_completed;
	struct Event_Manager *next;
}EM;


//temporary structure for Eventmanager
typedef struct EM_temp
{
        int choice;
	char name[MAX];
	char EMCODE;
	char password;
	char specialized;
	char event_assigned;
	char experience;
	int nevents_completed;
}EM_temp;



typedef struct event
{
	int event_id;
	int choice;
	char event_type[MAX];
	char cust_fr_event[MAX];
	int em_event_assigned;
	char start_date[MAX];
	int ndays[MAX];
	double budget;
        double actual_exp;
	char completion_status;
	char remarks;
	struct event *next;
}e;

//temporary structure for event
typedef struct e_temp
{
	int event_id;
	int choice;
	char event_type[MAX];
	char cust_fr_event[MAX];
	int em_event_assigned;
	char start_date[MAX];
	int ndays[MAX];
	double budget;
        double actual_exp;
	char completion_status;
	char remarks;

}e_temp;


int customer_corner();
int EventManager_corner();
int event_corner();


//operations performed on customer database
int add_cust_details();
int edit_cust_details();
int delete_cust_details();
int veiw_cust_details();

//operations performed on Eventmanager database
int add_empersonal_details();
int view_empersonal_details();
int edit_empersonal_details();
int view_cust_details();


int customer_file_to_list();
int alpha_valid(char *cust);
int Event_Manager_file_to_list();
int customer_list_to_file();
int Event_Manager_list_to_file();
//operations on Event database
int admin();
int event();
int delete_empersonal_details();
int event_list_to_file();
int event_file_to_list();
//Reports Generated 
int Maintain_reports();
int event_completed_reports();
int event_budget_overrun();
int successful_event_managers();
int pending_events_list();
int valued_customers();


#endif




