#include<iostream>
#define  MULT 10000
using namespace std;

//functions for UI options
int doseinput();        //function to input dosage
void current_med();     //function to view and review current medication
void new_med();         //function takes input new medication and dose
void form();            //function lists our medicines before taking input
string mediinput();     //function to input medication names
bool exit_prog();       //function to terminate loop

int main(void)
{
    string patient; //patient name
    bool on=true;   //variable to run while loop
    int opt;        //variable to manage selections

    cout<<"------------------Medical Dosage Management------------------"<<endl<<endl;
    while(on)
    {
        opt=0;

        cout<<"\nEnter patient name: ";
        cin>>patient;
        cout<<"Select from below:"<<endl
            <<"1. Current Medication"<<endl
            <<"2. New Medication"<<endl
            <<"3. Formulary"<<endl
            <<"4. Exit"<<endl
            <<"Enter option: "<<endl;
        cin>>opt;

        switch(opt)
        {
        case 1:
            current_med();
            break;
        case 2:
            new_med();
            break;
        case 3:
            form();
            break;
        case 4:
            on=exit_prog();
            break;
        }
    }
    cout<<endl;
}

int doseinput()
{
    int dose,day;       //variable to store single dose and number of doses per day
    cout<<"Enter dosage: ";     //single dose input
    cin>>dose;
    cout<<"Enter number of doses per day: ";    //number of doses input
    cin>>day;

    return ((day*MULT)+dose);
}

void current_med()
{
    int i,new_dose;     //variable for "if" control statement, and to input new dosage to record
    cout<<"Current medication and dosage:"<<endl    //User interface
        <<"Paracetamol 500mg 2 times/day"<<endl
        <<"1. Agree"<<endl                          //options to confirm or change dosage
        <<"2. Change dosage"<<endl;
    cin>>i;
    if(i==1)
        cout<<"Verified!"<<endl;
    else
    {
        new_dose = doseinput();
        cout<<"Dosage changed"<<endl;
    }
    return;
}

string mediinput()
{
    string s;   //string variable stores name
    int choice; //integer variable for selecting options
    while(1)
    {
        cout<<"Enter medication name: ";
        cin>>s;
        cout<<"Confirm: "<<s<<endl
            <<"1. OK \t 2. Change"<<endl;
        cin>>choice;
        if(choice==1)
            break;
    }
    return s;
}

void new_med()
{
    string medi;
    int dose, choice;

    while(1)
    {
        medi = mediinput();     //input name using function
        dose = doseinput();     //input dosage using function

        cout<<"Medication: "<<medi<<endl
            <<"Dosage: "<<dose%MULT<<"mg "<<dose/MULT<<" times/day"<<endl   //confirming the entered data
            <<"Confirm?"<<endl
            <<"1. OK \t 2. Change"<<endl;
        cin>>choice;
        if(choice==1)
            break;
    }
    return;
}

void form()
{
    string medi;
    int dose, choice;

    while(1)
    {
        cout<<"Paracetamol"<<endl           //list of medicines
            <<"Azithromycin"<<endl
            <<"Ocof"<<endl
            <<"Alatrol"<<endl
            <<"Thyronorm"<<endl
            <<"Thyroxin"<<endl
            <<"Bisakor 2.5"<<endl
            <<"Tears Natural Free"<<endl
            <<"Refresh Tears"<<endl;
        medi = mediinput();         //input name using function
        dose = doseinput();         //input dosage using function

        cout<<"Medication: "<<medi<<endl
            <<"Dosage: "<<dose%MULT<<"mg "<<dose/MULT<<" times/day"<<endl
            <<"Confirm?"<<endl                      //confirming the entered data
            <<"1. OK \t 2. Change"<<endl;
        cin>>choice;
        if(choice==1)
            break;
    }
    return;
}

bool exit_prog()
{
    return false;   //terminating loop and exiting program by making condition false
}
