#include "std_lib_facilities.h"

//ERROR TYPE SPECIFIED IF FILE IS INPUTTED INCORRECTLY.
class Bad_File{};

//DECLARATION OF ALL FUNCTIONS THAT WE WILL BE USING THROUGHTOUT THIS PROGRAM.
int  CalculateSum (string Copy_File_Name);
void OutputResult (int    Copy_Sum      );

int main(){

    cout << "PLEASE ENTER THE NAME OF FILE!" << endl;
    string File_Name;
    cin >> File_Name;

    try{
        ifstream ReadFile{ File_Name };

        if ( !ReadFile ){
            throw Bad_File{};
        }
    }catch (Bad_File){
        cout << "SORRY WE WEREN'T ABLE TO LOCATE THIS FILE!" << endl;
        return 1;
    }

    int SumofDigits = 0;

    SumofDigits = CalculateSum ( File_Name );
    OutputResult ( SumofDigits );

    return 0;
}

int CalculateSum(string Copy_File_Name){

    ifstream ReadFile(Copy_File_Name);

    string Text;
    int SumofNumbers = 0, Digits;

    while (ReadFile >> Text){

        stringstream(Text) >> Digits;
        SumofNumbers = SumofNumbers + Digits;
    }
    return SumofNumbers;
}

void OutputResult (int Copy_Sum){

    system("cls");
    cout << endl << endl;

    cout << "-------------------------------------------------" << endl;
    cout << "THE SUM OF THE DIGITS IN THIS FILE IS: " << Copy_Sum << endl;
}
