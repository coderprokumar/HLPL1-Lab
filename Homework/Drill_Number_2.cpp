#include "std_lib_facilities.h"

// WE JUST DEFINED A Global Vector <int> gv; INITALIZE IT WITH Ten ints, 1, 2, 4, 8, 16, etc.
vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};


void f ( vector <int> Argument_Vector ){

    // 3. IN f():
    // a. DEFINE A Local Vector <int> lv WITH THE Same NUMBER OF ELEMENTS AS THE ARGUMENT Vector.

        // WE DEFINED A LOCAL Vector <int> lv WITH THE SAME NUMBER OF ELEMENTS AS THE ARGUMENT VECTOR.
        cout << "DEFINED A  LOCAL VECTOR <int> lv WITH THE SAME NUMBER OF ELEMENTS AS THE ARGUMENT VECTOR." << endl;
        vector <int> lv(10);
        
    // b. Copy THE ELEMENTS FROM gv INTO lv.

        // WE COPIED THE ELEMENTS FROM GV INTO LV.
        cout << "COPIED THE VALUES FROM GV INTO LV." << endl;
        lv = gv;
       
    // c. Print OUT THE Elements OF lv. 
        
        // WE INITALIZED A LOCAL LOOP COUNTER VARIABLE AND PRINT OUT THE ELEMENTS OF lv.
        int Loop_Counter = 0;
        
        cout << "HERE WE WILL PRINT OUT THE ELEMENTS OF lv." << endl << endl;

        for ( Loop_Counter = 0; Loop_Counter < lv.size(); Loop_Counter++ ){ 
            cout << "VECTOR POSITION NUMBER: " << ( Loop_Counter + 1 ) << " HAS ELEMENT: " << lv [ Loop_Counter ] << endl;
        }

    // d. DEFINE A Local Vector <int> lv2; INITALIZE IT TO BE A COPY OF THE ARGUMENT Vector.
        
        // WE JUST DEFINED A Local VECTOR <int> lv2; INITALIZE IT TO BE A COPY OF THE ARGUMENT VECTOR.
        cout << endl << "WE JUST DEFINED A Local VECTOR <int> lv2; INITALIZE IT TO BE A COPY OF THE ARGUMENT VECTOR." << endl;

        vector<int> lv2(Argument_Vector);

    // e. Print OUT THE Elements OF lv2.

        // WE INITALIZED A LOCAL LOOP COUNTER VARIABLE AND PRINT OUT THE ELEMENTS OF lv2.
        cout << "HERE WE WILL PRINT OUT THE ELEMENTS OF lv2." << endl << endl;

        for ( Loop_Counter = 0; Loop_Counter < lv.size(); Loop_Counter++ ){ 
            cout << "VECTOR POSITION NUMBER: " << ( Loop_Counter + 1 ) << " HAS ELEMENT: " << lv2 [ Loop_Counter ] << endl;
        }
}

int Factorial ( int Number ){ 
	if ( Number <= 1 ){
        return 1;
    }
    else {
        return Number * Factorial ( Number - 1 );
    }
}

int main(){
    // USED TO CLEAR SCREEN.
    system( "cls" );
    
    // JUST A OPENING NOTE. TELLING USER ABOUT THE PROGRAM.
    cout << "-------------------------------------------------------------" << endl << endl;

	cout << "BJARNE STROUSTROUP BOOK!"                                              << endl;
    cout << "PROGRAMMING: PRINCIPLES AND PRACTICE USING C++ (2ND EDITION)."         << endl;
    cout << "CHAPTER NUMBER # 18."                                                  << endl;
    cout << "DRILL NUMBER # 02."                                            << endl << endl;

    cout << "-------------------------------------------------------------" << endl << endl;
    
    // ASKING USER TO PRESS ENTER TO MOVE TO DRILL NUMBER 2 AND TASK NUMBER 1. AFTER THAT WE WILL CLEAR SCREEN AND MOVE TO DRILL NUMBER 2, TASK NUMBER 1.
    cout << "PRESS ENTER TO SEE DRILL NUMBER: 2, TASK NUMBER: 1...... ";
    cin.ignore( numeric_limits < streamsize> :: max( ), '\n');
    system( "cls" );

    // STANDARD LIBRARY VECTOR DRILL:
    // 1. DEFINE A Global Vector <int> gv; INITALIZE IT WITH Ten ints, 1, 2, 4, 8, 16, etc.

        // DEFINED A GLOBAL INT VECTOR ga OF TEN INTS INITALIZED TO 1, 2, 4, 8, 16, etc.
        cout << "DEFINED A GLOBAL INT VECTOR NAMED ga AND INITALIZED IT WITH TEN INTS." << endl;
       
          
    // 2. DEFINE A Function f() TAKING A vector <int> ARGUMENT.

        // DEFINED A Function f() TAKING A vector <int> ARGUMENT.
        cout << "DEFINED A Function f() TAKING A vector <int> ARGUMENT." << endl;

   
    // 4. IN main():
    // a. Call f() with gv AS IT'S Argument.

        // WE CALLED f() WITH gv AS IT'S ARGUMENT.
        cout << "CALLED f() WITH gv AS IT'S ARGUMENT" << endl;
        f(gv);


    // b. DEFINE A Vector <int> vv, AND INITALIZE IT WITH THE FIRST Ten Factorial Values (1, 2*1, 3*2*1, 4*3*2*1, etc.)

        // DEFINED A Vector <int> vv, AND INITALIZE IT WITH THE FIRST Ten Factorial Values (1, 2*1, 3*2*1, 4*3*2*1, etc.)
        cout << "DEFINED A Vector <int> vv, AND INITALIZE IT WITH THE FIRST Ten Factorial Values (1, 2*1, 3*2*1, 4*3*2*1, etc.)" << endl;
        vector<int> vv(10);
        int Loop_Counter = 0;
        
        for (Loop_Counter = 0; Loop_Counter < vv.size(); Loop_Counter++ ){
            vv [ Loop_Counter ] = Factorial ( Loop_Counter + 1 );
        }

    // c. Call f() WITH vv AS IT'S Argument.

        // WE CALLED f() WITH vv AS IT'S Argument.
        cout << "CALLING f() WITH aa AS IT'S ARGUMENT." << endl << endl;
        f(vv);
        
        cout << endl << "END OF THE PROGRAM." << endl;
return 0;
}