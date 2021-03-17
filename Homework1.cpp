#include "std_lib_facilities.h"

//DECLARATION OF ALL THE FUNTIONS THAT WE WILL BE USING THROUGHTOUT THIS PROGRAM.
void Input_Data (vector <string> & Names_Copy, vector < double> & Ages_Copy);
void Sort_Data  (vector <string> & Names_Copy, vector < double> & Ages_Copy);
void Print_Data (vector <string> & Names_Copy, vector < double> & Ages_Copy);
void Final_Data (vector <string> & Names_Copy, vector < double> & Ages_Copy);

//ERROR TYPE SPECIFIED IF AGE IS INPUTTED WRONGLY.
class Bad_Age {};

//INITALIZED LOOP VARIABLES AS GLOBAL VARIABLES.
int Loop_Counter1 = 0, Loop_Counter2 = 0;

int main(){

    //INITALIZATION OF VECTORS THAT WE WILL BE USING THROUGHOUT THIS PROGRAM.
    vector <string> Names(10);
    vector <double> Ages(10);

    Input_Data (Names, Ages);
    Print_Data (Names, Ages);
    Sort_Data  (Names, Ages);
    Final_Data (Names, Ages);

    return 0;
}

void Input_Data (vector <string> & Names_Copy, vector <double> & Ages_Copy){

    for (Loop_Counter1 = 0; Loop_Counter1 < 5; Loop_Counter1++){

        cout << "Enter Name Number " << Loop_Counter1 + 1 << ": ";
        getline(cin, Names_Copy[Loop_Counter1]);
    }

    try{
        for (Loop_Counter1 = 0; Loop_Counter1 < 5; Loop_Counter1++){

            cout << "Enter Age of " << Names_Copy[Loop_Counter1] << ": ";
            cin >> Ages_Copy[Loop_Counter1];

            if (Ages_Copy[Loop_Counter1] <= 0 || Ages_Copy[Loop_Counter1] > 150){
                throw Bad_Age{};}
        }
    }catch (Bad_Age){
        cout << "SORRY! YOU SEEM TO BE FROM OTHER WORLD";
    }
}

void Print_Data (vector <string> & Names_Copy, vector <double> & Ages_Copy){

    system("cls");
    cout << "-------------------------------------------------" << endl;
    cout << "DATA BEFORE ANY SORT IS DONE!" << endl << endl;

    for (Loop_Counter1 = 0; Loop_Counter1 < 5; Loop_Counter1++){

        cout << "Name: " << Names_Copy[Loop_Counter1];
        cout << " Age: " << Ages_Copy[Loop_Counter1] << endl;
    }
}

void Sort_Data (vector <string> & Names_Copy, vector <double> & Ages_Copy){

    for (Loop_Counter1 = 0; Loop_Counter1 < 5; Loop_Counter1++){

        for (Loop_Counter2 = 0; Loop_Counter2 < 5; Loop_Counter2++){

            if (Names_Copy[Loop_Counter1] < Names_Copy[Loop_Counter2]){

                string TempStr;
                double TempDig;

                TempStr = Names_Copy[Loop_Counter2];
                Names_Copy[Loop_Counter2] = Names_Copy[Loop_Counter1];
                Names_Copy[Loop_Counter1] = TempStr;

                TempDig = Ages_Copy[Loop_Counter2];
                Ages_Copy[Loop_Counter2] = Ages_Copy[Loop_Counter1];
                Ages_Copy[Loop_Counter1] = TempDig;
            }
        }
    }
}

void Final_Data (vector <string> & Names_Copy, vector <double> & Ages_Copy){
    cout << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "DATA AFTER SORTING IS DONE!" << endl << endl;

    for (Loop_Counter1 = 0; Loop_Counter1 < 5; Loop_Counter1++){

        cout << "Name: " << Names_Copy[Loop_Counter1] << " Age: " << Ages_Copy[Loop_Counter1] << endl;
    }
}