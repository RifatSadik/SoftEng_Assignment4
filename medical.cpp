#include<iostream>
using namespace std;

//functions for UI options
void current_med(){};
void new_med(){};
void form(){};
bool exit_prog(){return false;};

int main(void)
{
    string patient; //patient name
    bool on=true;   //variable to run while loop
    int opt;        //variable to manage selections

    cout<<"------------------Medical Dosage Management------------------"<<endl<<endl;
    while(on)
    {
        opt=0;

        cout<<"Enter patient name: ";
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
