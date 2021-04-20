#include "std_lib_facilities.h"

// WE JUST DEFINED A GLOBAL INT ARRAY NAMED ga OF TEN INTS INITALIZED TO 1, 2, 4, 8, 16, etc.
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    

void f( int Argument_Array [ ], int Number_Of_Elements ){

    // 3. IN f():
    // a. Define A Local Int Array la OF Ten Ints.

        // WE DEFINED A LOCAL INT ARRAY la OF TEN INTS.
        cout << "DEFINED A LOCAL INT ARRAY la OF TEN INTS." << endl;
        int la [ 10 ] = { };

    // b. Copy THE VALUES FROM ga INTO la.
       
        // WE INITALIZED A LOCAL LOOP COUNTER VARIABLE AND COPIED THE VALUES FROM GA INTO LA.
        int Loop_Counter = 0;
        
        cout << "COPIED THE VALUES FROM GA INTO LA." << endl;
        for (  Loop_Counter = 0; Loop_Counter < Number_Of_Elements; Loop_Counter++ ){ 
            la [ Loop_Counter ] = ga [ Loop_Counter ];
        }

    // c. Print OUT THE Elements OF la.

        // HERE WE WILL PRINT OUT THE ELEMENTS OF la.
        cout << "HERE WE WILL PRINT OUT THE ELEMENTS OF la." << endl << endl;
        for ( Loop_Counter = 0; Loop_Counter < Number_Of_Elements; Loop_Counter++ ){ 
            cout << "ARRAY POSITION NUMBER: " << ( Loop_Counter + 1 ) << " HAS ELEMENT: " << la [ Loop_Counter ] << endl;
        }

    // d. Define A Pointer p TO Int AND Initialize IT WITH AN Array ALLOCATED ON THE Free Store WITH THE SAME Number OF Elements AS THE ARGUMENT Array.

        // WE JUST DEFINED A Pointer p TO INT AND INITALIZED IT WITH AN ARRAY ALLOCATED ON THE FREE STORE WITH THE SAME Number OF ELEMENTS AS THE ARGUMENT ARRAY.
        cout << endl << "DEFINED A Pointer p TO INT AND INITALIZED IT WITH AN ARRAY ALLOCATED ON THE FREE STORE WITH THE SAME Number OF ELEMENTS AS THE ARGUMENT ARRAY." << endl;
        int* p = new int [ Number_Of_Elements ];

    // e. Copy THE Values FROM THE ARGUMENT Array INTO THE Free-Store Array.

        // WE JUST COPIED THE VALUES FROM THE ARGUMENT ARRAY INTO THE FREE-STORE ARRAY.
        cout << "COPIED THE VALUES FROM THE ARGUMENT ARRAY INTO THE FREE-STORE ARRAY." << endl;
        for ( Loop_Counter = 0; Loop_Counter < Number_Of_Elements; Loop_Counter++ ) {
            p [ Loop_Counter ] = Argument_Array [ Loop_Counter ];
        }

    // f. Print OUT THE ELEMENTS OF THE Free-Store Array.

        // WE WILL PRINT OUT THE ELEMENTS OF THE FREE-STORE ARRAY.
        cout << "PRINTING OUT THE ELEMENTS OF THE FREE-STORE ARRAY." << endl << endl;
        for ( Loop_Counter = 0; Loop_Counter < Number_Of_Elements; Loop_Counter++ ){
            cout << "ARRAY POSITION NUMBER: " << ( Loop_Counter + 1 ) << " HAS ELEMENT STORED ON FREE-STORE IS: " << p [ Loop_Counter ] << endl;
        }

    // g. Deallocate THE Free-Store Array.

        // WE JUST DEALLOCATED THE FREE-STORE ARRAY.
        cout << endl <<"DEALLOCATED THE FREE-STORE ARRAY" << endl;
        delete[] p;
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
    cout << "DRILL NUMBER # 01."                                            << endl << endl;

    cout << "-------------------------------------------------------------" << endl << endl;
    
    // ASKING USER TO PRESS ENTER TO MOVE TO DRILL NUMBER 1 AND TASK NUMBER 1. AFTER THAT WE WILL CLEAR SCREEN AND MOVE TO DRILL NUMBER 1, TASK NUMBER 1.
    cout << "PRESS ENTER TO SEE DRILL NUMBER: 1, TASK NUMBER: 1...... ";
    cin.ignore( numeric_limits < streamsize> :: max( ), '\n');
    system( "cls" );

    // ARRAY DRILL:
    // 1. DEFINE A Global Int Array ga OF Ten Ints INITALIZED TO 1, 2, 4, 8, 16, etc.
   
        // DEFINED A GLOBAL INT Array ga OF Ten Ints INITALIZED TO 1, 2, 4, 8, 16, etc.
        cout << "DEFINED A GLOBAL INT ARRAY NAMED ga AND INITALIZED IT WITH TEN INTS." << endl;

    // 2. DEFINE A Function f() TAKING AN Int Array Argument AND AN Int Argument INDICATING THE NUMBER OF Elements IN THE Array.

        // WE DEFINED A Function f() TAKING AN INT ARRAY ARGUMENT AND AN INT ARGUMENT INDICATING THE NUMBER OF ELEMENTS IN THE ARRAY.
        cout << "DEFINED A Function f() TAKING AN Int Array Argument AND AN Int Argument INDICATING THE NUMBER OF Elements IN THE Array." << endl;

    // 4. In main():
    // a. Call f() WITH ga AS IT'S ARGUMENT.
 
        // WE CALLED f() WITH ga AS IT'S ARGUMENT.
        cout << "CALLED f() WITH ga AS IT'S ARGUMENT" << endl;
        f(ga, 10);

    // b. Define AN Array aa WITH Ten Elements, AND INITALIZE IT WITH FIRST Ten Factorial Values (1, 2*1, 3*2*1, 4*3*2*1, etc.)
    
        // FIRST WE INITALIZED A LOOP VARIABLE. THEN WE DEFINED AN ARRAY aa WITH TEN ELEMENTS, AND INITALIZE IT WITH FIRST TEN FACTORIAL VALUES (1, 2*1, 3*2*1, 4*3*2*1, etc.)
        cout << "DEFINED AN ARRAY aa WITH TEN ELEMENTS, AND INITALIZE IT WITH FIRST TEN FACTORIAL VALUES (1, 2*1, 3*2*1, 4*3*2*1, etc.)" << endl;
        int Loop_Counter = 0;
        int aa [ 10 ] = { };
    
        for ( Loop_Counter = 0; Loop_Counter < 10; Loop_Counter++ ){
            aa [ Loop_Counter ] = Factorial ( Loop_Counter + 1 );
        }

    // c. Call f() WITH aa AS IT'S ARGUMENT.
   
        // CALLING f() WITH aa AS IT'S ARGUMENT.
        cout << "CALLING f() WITH aa AS IT'S ARGUMENT." << endl << endl;
        f(aa, 10); 

        cout << "END OF THE PROGRAM." << endl;
return 0;
}