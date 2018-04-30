#include<iostream>
using namespace std;

//functions for UI options
int doseinput();        //function to input dosage
void current_med();     //function to view and review current medication
void new_med(){};
void form(){};
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

        switch(opt){
        case 1: current_med(); break;
        case 2: new_med(); break;
        case 3: form(); break;
        case 4: on=exit_prog(); break;
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

    return ((day*10000)+dose);
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

bool exit_prog()
{
    return false;   //terminating loop and exiting program by making condition false
}
