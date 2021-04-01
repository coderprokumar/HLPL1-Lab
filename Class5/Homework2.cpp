#include "std_lib_facilities.h"

//DECLARATION OF ALL THE FUNTIONS THAT WE WILL BE USING THROUGHTOUT THIS PROGRAM.
void         Input_Data             (vector <string> & String_Copy);
vector <int> Find_Size              (vector <string> & String_Copy);
void         Print_Data             (vector <string> & String_Copy, vector <int> & Size);
void         Sort_DatabySize        (vector <string> & String_Copy, vector <int> & Size);
void         Lexicographically_Sort (vector <string> & String_Copy, vector <int> & Size);

//ERROR TYPE SPECIFIED IF STRING IS INPUTTED WRONGLY OR ANY DIGIT IS INPUTTED.
class Bad_String {};

//INITALIZED LOOP VARIABLES AS GLOBAL VARIABLES THAT WE WILL USE.
int Loop_Counter1 = 0, Loop_Counter2 = 0, Loop_Counter3 = 0;

int main(){

    //ASKING USER TO ENTER THE NUMBER OF STRINGS.
    int Counter;
    cout << "ENTER THE NUMBER OF STRINGS: ";
    cin >> Counter;

    //INITALIZATION OF VECTORS WITH IT'S SIZE THAT WE WILL BE USING THROUGHOUT THIS PROGRAM.
    vector <string> String   (Counter);
    vector <int>    SizeCopy (Counter);

    //USING THE TRY CATCH BLOCK TO CHECK USER HASN'T ENTERED ALL DIGITS IN THE STRING.
    try{
       Input_Data (String); 
    }catch(Bad_String){
        cout << "SORRY! THIS STRING CONTAINS ALL DIGITS AND SO IT CAN'T BE A STRING." 
        << endl << "TRY AGAIN! BUT WITH A STRING";
        return 1;
    }

    SizeCopy = Find_Size (String);

    Print_Data             (String, SizeCopy);
    Sort_DatabySize        (String, SizeCopy);
    Lexicographically_Sort (String, SizeCopy);

    return 0;
}

void Input_Data (vector <string> & String_Copy){

    string Temp;
    cin.ignore();

    for (Loop_Counter1 = 0; Loop_Counter1 < String_Copy.size(); Loop_Counter1++){
        int Digit_Count = 0;

        cout << "ENTER STRING NUMBER " << Loop_Counter1 + 1 << ": "; 
        getline(cin, String_Copy[Loop_Counter1],'\n');

        for(Loop_Counter3 = 0; Loop_Counter3 < String_Copy[Loop_Counter1].length(); Loop_Counter3++){

        if (String_Copy[Loop_Counter1][Loop_Counter3] >= '0' && 
            String_Copy[Loop_Counter1][Loop_Counter3] <= '9'){
                Digit_Count++;
        }
        }
        if (Digit_Count == String_Copy[Loop_Counter1].length()){
            throw Bad_String{};
        }
    }
}

vector <int> Find_Size(vector <string> & String_Copy){
    int Length;
    Length = String_Copy.size();

    vector <int> StringSize(Length);

    for (Loop_Counter1 = 0; Loop_Counter1 < String_Copy.size(); Loop_Counter1++){
       StringSize[Loop_Counter1] = String_Copy[Loop_Counter1].length(); 
    }
return StringSize;
}

void Print_Data (vector <string> & String_Copy, vector <int> & Size)
{
    system("cls");
    cout << "-------------------------------------------------" << endl;
    cout << "DATA BEFORE ANY SORTING HAS BEEN DONE!" << endl << endl;

    for (Loop_Counter1 = 0; Loop_Counter1 < String_Copy.size(); Loop_Counter1++){
        cout << "STRING NUMBER " << Loop_Counter1 + 1 << " is: '"; cout << 
        String_Copy[Loop_Counter1] << "' AND IT'S SIZE IS: " << Size[Loop_Counter1]  << endl;
    }
}

void Sort_DatabySize (vector <string> & String_Copy, vector <int> & Size){

    cout << endl; 
    cout << "NOW THIS WHOLE DATA IS SORTED BY IT'S SIZE!" << endl;
    vector <string> String_Copy2;
    vector <int> Size2;

    String_Copy2 = String_Copy;
    Size2 = Size;

    for (Loop_Counter1 = 0; Loop_Counter1 < String_Copy2.size(); Loop_Counter1++){

        for (Loop_Counter2 = 0; Loop_Counter2 < String_Copy2.size(); Loop_Counter2++){

            if (String_Copy2[Loop_Counter1].length() < String_Copy2[Loop_Counter2].length()){

                string TempStr;
                double TempDig;

                //SORTING STRINGS
                TempStr = String_Copy2[Loop_Counter2];
                String_Copy2[Loop_Counter2] = String_Copy2[Loop_Counter1];
                String_Copy2[Loop_Counter1] = TempStr;

                //SORTING SIZES
                TempDig = Size2[Loop_Counter2];
                Size2[Loop_Counter2] = Size2[Loop_Counter1];
                Size2[Loop_Counter1] = TempDig;
            }
        }
    }

    for (Loop_Counter1 = 0; Loop_Counter1 < String_Copy2.size(); Loop_Counter1++){

        cout << "STRING: " << String_Copy2[Loop_Counter1] << " SIZE: " << Size2[Loop_Counter1] << endl;
    }

    int StringSize;
    string Long_String, Short_String, Long_String2, Short_String2;
    int Long_Size, Short_Size, Long_Size2, Short_Size2; 
    
    StringSize = String_Copy2.size();

    Short_String = String_Copy2[0];
    Short_Size = Size2[0];

    Short_String2 = String_Copy2[1];
    Short_Size2 = Size2[1];
   

    if (Short_Size == Short_Size2){

    cout << endl;
    cout << "FIRST MOST SHORTEST STRING AND THE SECOND MOST SHORTEST STRING BOTH HAVE SAME LENGTHS!" << endl;
    cout << "THE FIRST SHORTEST STRING IS: " << Short_String << " AND IT'S SIZE IS: " << Short_Size << "." << endl;
    cout << "THE SECOND SHORTEST STRING IS: " << Short_String2 << " AND IT'S SIZE IS: " << Short_Size2 << "." << endl;
    }

    else{

    cout << endl;
    cout << "THE SHORTEST STRING IS: " << Short_String << " AND IT'S SIZE IS: " << Short_Size << "." << endl;
    }

    Long_String = String_Copy2[StringSize - 1]; 
    Long_Size = Size2[StringSize - 1];

    Long_String2 = String_Copy2[StringSize - 2];
    Long_Size2 = Size2[StringSize - 2];
   
    if (Long_Size == Long_Size2){

    cout << endl;    
    cout << "THE FIRST MOST lONGEST STRING AND THE SECOND MOST LONGEST STRING BOTH HAVE SAME LENGTHS!" << endl;
    cout << "THE FIRST MOST LONGEST STRING IS: " << Long_String << " AND IT'S SIZE IS: " << Long_Size << "." << endl;
    cout << "THE SECOND MOST LARGEST STRING IS: " << Long_String2 << " AND IT'S SIZE IS: " << Long_Size2 << "." << endl;
    } 
   
    else{

    cout << endl;
    cout << "THE LONGEST STRING IS: " << Long_String << " AND IT'S SIZE IS: " << Long_Size << "." << endl;
    }
}

void Lexicographically_Sort (vector <string> & String_Copy, vector < int> & Size){

   cout << endl;
   cout << "-------------------------------------------------" << endl;
   cout << "DATA AFTER SORTING IT LEXICOGRAPICALLY!" << endl; 

    for (Loop_Counter1 = 0; Loop_Counter1 < String_Copy.size(); Loop_Counter1++){

        for (Loop_Counter2 = 0; Loop_Counter2 < String_Copy.size(); Loop_Counter2++){

            if (String_Copy[Loop_Counter1] < String_Copy[Loop_Counter2]){

                string TempStr;
                double TempDig;

                //SORTING STRINGS
                TempStr = String_Copy[Loop_Counter2];
                String_Copy[Loop_Counter2] = String_Copy[Loop_Counter1];
                String_Copy[Loop_Counter1] = TempStr;

                //SORTING SIZES
                TempDig = Size[Loop_Counter2];
                Size[Loop_Counter2] = Size[Loop_Counter1];
                Size[Loop_Counter1] = TempDig;
            }
        }
    }

    for (Loop_Counter1 = 0; Loop_Counter1 < String_Copy.size(); Loop_Counter1++){
        cout << "STRING ' " << String_Copy[Loop_Counter1] << "' SIZE: " << Size[Loop_Counter1]  << endl;
    }
}