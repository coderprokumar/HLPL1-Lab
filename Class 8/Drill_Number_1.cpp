// A FILE WHICH CONTAINS ALL THE HEADER FILES SO WE DON'T NEED TO INITALIZE OR INCLUDE HEADERS FOR EACH PIECE OF CODE OR FUNCTION.
#include "std_lib_facilities.h"

// A LOOP VARIABLE THAT WE WILL USE THROUGHOUT THIS PROGRAM.
int Loop_Counter_1 = 0;

void Print_Array_10 ( ostream& os, int* a ) {

    cout << "DRILL NUMBER # 01, TASK NUMBER # 04." << endl;
    
    // THIS WILL OUTPUT VALUES STORED AND ADDRESS VALUE FOR ALL THE ARRAY LOCATIONS.
    for( Loop_Counter_1 = 0; Loop_Counter_1 < 10; Loop_Counter_1++ ) {
		cout << a [ Loop_Counter_1 ] << " ";                
    }
    cout << endl << endl;
}

void Print_Array_10_2 ( ostream& os, int* a ) {

    cout << "DRILL NUMBER # 01, TASK NUMBER # 05." << endl;

    // THIS WILL OUTPUT VALUES STORED AND ADDRESS VALUE FOR ALL THE ARRAY LOCATIONS.
    for( Loop_Counter_1 = 0; Loop_Counter_1 < 10; Loop_Counter_1++ ){
		cout << a [ Loop_Counter_1 ] << " ";
    }
    cout << endl << endl;
}

void Print_Array_11 ( ostream& os, int* a, int n ) {

    cout << "DRILL NUMBER # 01, TASK NUMBER # 07." << endl;
    
    // THIS WILL OUTPUT VALUES STORED AND ADDRESS VALUE FOR ALL THE ARRAY LOCATIONS.
    for( Loop_Counter_1 = 0; Loop_Counter_1 < n; Loop_Counter_1++ ){
		cout << a [ Loop_Counter_1 ]  << " ";
    }
    cout << endl << endl;
}

void Print_Array_20 ( ostream& os, int* a, int n ) {

    cout << "DRILL NUMBER # 01, TASK NUMBER # 08." << endl;

    // THIS WILL OUTPUT VALUES STORED AND ADDRESS VALUE FOR ALL THE ARRAY LOCATIONS.
    for( Loop_Counter_1 = 0; Loop_Counter_1 < n; Loop_Counter_1++ ){
	cout << a [ Loop_Counter_1 ] << " ";
    }
    cout << endl << endl;
}

//  WE WILL USE THIS FUNCTION TO ALLOCATE VALUES TO AN ARRAY.
int* Allocation_Of_Values_To_Array ( int n ){

	int* Array_Copy = new int [ n ];

	int Initalizer = 100;

    // HERE WE WILL STORE THE VALUES IN ARRAY.
	for( Loop_Counter_1 = 0; Loop_Counter_1 < n; Loop_Counter_1++ ) {
		Array_Copy [ Loop_Counter_1 ] = Initalizer++;
    }

	return Array_Copy;
}

// WE WILL USE THIS FUNCTION TO ALLOCATE VALUES TO A VECTOR.
vector <int*> Allocation_Of_Values_To_Vector ( int n ){

	vector < int* > Vector_Copy;

	int Initalizer = 100;
  
    // HERE WE WILL STORE THE VALUES IN VECTOR.
	for( Loop_Counter_1 = 0; Loop_Counter_1 < n; Loop_Counter_1++ ) {
		Vector_Copy.push_back( new int { Initalizer++ } );
    }

	return Vector_Copy;
}


int main(){
   // USED TO CLEAR SCREEN.
    system( "cls" );
    
    // JUST A OPENING NOTE. TELLING USER ABOUT THE PROGRAM.
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;

	cout << "BJARNE STROUSTROUP BOOK!"                                              << endl;
    cout << "PROGRAMMING: PRINCIPLES AND PRACTICE USING C++ (2ND EDITION)."         << endl;
    cout << "CHAPTER NUMBER # 17."                                                  << endl;
    cout << "DRILL NUMBER # 01."                                            << endl << endl;

    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;
    
    // ASKING USER TO PRESS ENTER TO MOVE TO DRILL NUMBER 1 AND TASK NUMBER 1. AFTER THAT WE WILL CLEAR SCREEN AND MOVE TO DRILL NUMBER 1, TASK NUMBER 1.
    cout << "PRESS ENTER TO SEE DRILL NUMBER: 1, TASK NUMBER: 1...... ";
    cin.ignore( numeric_limits < streamsize> :: max( ), '\n');
    system( "cls" );
    

    // DRILL NUMBER 1, TASK NUMBER 1.
    // 1. ALLOCATE AN ARRAY OF TEN INTS ON THE FREE STORE USING 'NEW'.

        cout << "DRILL NUMBER # 01, TASK NUMBER # 01." << endl;

	    int Length_Of_An_Array = 10;
	    int* Array_Of_Ten_Ints = new int [ Length_Of_An_Array ];
	   
	    for ( Loop_Counter_1 = 0; Loop_Counter_1 < Length_Of_An_Array; Loop_Counter_1++ ) {
                 Array_Of_Ten_Ints [ Loop_Counter_1 ] = 0;
            }

    // DRILL NUMBER 1, TASK NUMBER 2.
    // 2. PRINT THE VALUES OF THE TEN INTS TO COUT.

        cout << "DRILL NUMBER # 01, TASK NUMBER # 02." << endl;
        
        // OUTPUTTING THE ARRAY POSITION, IT'S CONTENT AND ADDRESS VALUE TO THE USER.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < Length_Of_An_Array; Loop_Counter_1++ ){
		    cout << "ARRAY POSITION NUMBER: " << Loop_Counter_1 << " HAS CONTENT: "<< Array_Of_Ten_Ints [ Loop_Counter_1 ] << " AND ADDRESS VALUE: " << Array_Of_Ten_Ints + 1 << endl;
        }
        	
        cout << "VALUE OF ARRAY IS " << Array_Of_Ten_Ints << endl << endl;
	    for (Loop_Counter_1 = 0; Loop_Counter_1 < Length_Of_An_Array; Loop_Counter_1++ ){
		    Array_Of_Ten_Ints [ Loop_Counter_1 ] = Loop_Counter_1;
        }

    // DRILL NUMBER 1, TASK NUMBER 3.
    // 3. DEALLOCATE THE ARRAY ( USING DELETE[] ).

        cout << "DRILL NUMBER # O1, TASK NUMBER # 03." << endl; 

        // WE HAVEN'T DELETED ELEMENTS AS WE WILL BE NEEDING THE ARRAY IN UPCOMING QUESTION. BUT IT IS WRITTEN IN UPCOMING QUESTION TOO.
        // delete[] Array_Of_Ten_Ints;

    // DRILL NUMBER 1, TASK NUMBER 4.
    // 4. WRITE A FUNCTION PRINTARRAY10 (OSTREAM& OS, INT* A) THAT PRINTS OUT THE VALUES OF A ( ASSUMED TO HAVE TEN ELEMENTS TO OS ).
        
        // A FUNCTION WHICH WILL PRINT THE ELEMENTS AND IT'S LOCATION AFTER THAT WE WILL DELETE ALL THE ELEMENTS.
        Print_Array_10 ( cout, Array_Of_Ten_Ints);
	    delete[] Array_Of_Ten_Ints;
    

    // DRILL NUMBER 1, TASK NUMBER 5.
    // 5. ALLOCATE AN ARRAY OF TEN INTS ON THE FREE STORE; INITALIZE IT WITH THE VALUES 100, 101, 102, ETC.; AND PRINT OUT IT'S VALUES.
        
        // WE CALLED A FUNCTION WHICH WILL ALLOCATE ALL THE VALUES TO THE ARRAY.
	    int* Array_Of_Ten_Ints_2 = Allocation_Of_Values_To_Array ( 10 );

        // A FUNCTION WHICH WILL PRINT THE ELEMENTS AND IT'S LOCATION AFTER THAT WE WILL DELETE ALL THE ELEMENTS.
	    Print_Array_10_2 ( cout, Array_Of_Ten_Ints_2 );
	    delete[] Array_Of_Ten_Ints_2;

        
    // DRILL NUMBER 1, TASK NUMBER 6.
    // 6. ALLOCATE AN ARRAY OF 11 INTS ON THE FREE STORE; INITALIZE IT WITH THE VALUES 100, 101, 102, ETC.; AND PRINT OUT IT'S VALUES.

        cout << "Drill NUMBER # 01, TASK NUMBER # 06." << endl;

        // AGAIN USING THIS FUNCTION TO ALLOCATE VALUES TO THE ARRAY. BUT THIS TIME FOR DIFFERENT NUMBER OF LOCATIONS.
        int* Array_Of_Eleven_Ints = Allocation_Of_Values_To_Array ( 11 );
        
        // OUTPUTTING VALUES WITHOUT USING FUNCTION.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < 11; Loop_Counter_1++ ) {
		    cout << Array_Of_Eleven_Ints [ Loop_Counter_1 ] << " ";
        }
        cout << endl << endl;

        // AFTER THAT WE WILL DELETE ALL THE VALUES.
        delete[] Array_Of_Eleven_Ints;

    // DRILL NUMBER 1, TASK NUMBER 7.
    // 7. WRITE A FUNCTION PRINT_ARRAY ( OSTREAM& OS, INT* A, INT N) THAT PRINTS OUT THE VALUES OF A ( ASSUEMED TO HAVE N ELEMENTS ) TO OS.
       
        // AGAIN USING THIS FUNCTION TO ALLOCATE VALUES TO THE ARRAY. BUT THIS TIME FOR DIFFERENT NUMBER OF LOCATIONS.
       int* Array_Of_Eleven_Ints_2 = Allocation_Of_Values_To_Array ( 11 );

       // A FUNCTION WHICH WILL PRINT THE ELEMENTS AND IT'S LOCATION AFTER THAT WE WILL DELETE ALL THE ELEMENTS.
       Print_Array_11 ( cout, Array_Of_Eleven_Ints, 11);
       delete[] Array_Of_Eleven_Ints_2;

 
    // DRILL NUMBER 1, TASK NUMBER 8.
    // 8. ALLOCATE AN ARRAY OF 20 INTS ON THE FREE STORE; INITALIZE IT WITH THE VALUES 100, 101, 102, ETC.; AND PRINT OUT IT'S VALUES.
        
        // AGAIN USING THIS FUNCTION TO ALLOCATE VALUES TO THE ARRAY. BUT THIS TIME FOR DIFFERENT NUMBER OF LOCATIONS.
	    int* Array_Of_Twenty_Ints = Allocation_Of_Values_To_Array ( 20 );

        // A FUNCTION WHICH WILL PRINT THE ELEMENTS AND IT'S LOCATION.
        Print_Array_20 ( cout, Array_Of_Twenty_Ints, 20 );


    // DRILL NUMBER 1, TASK NUMBER 9.
    // 9. DID YOU REMEMBER TO DELETE THE ARRAYS? ( IF NOT, DO IT. )

        cout << "DRILL NUMBER # 01, TASK NUMBER # 09." << endl; 

        delete[] Array_Of_Twenty_Ints;

    // DRILL NUMBER 1, TASK NUMBER 10.
    // 10. DO 5, 6 AND 8 USING A VECTOR INSTEAD OF AN ARRAY AND A PRINT_VECTOR ( ) INSTEAD OF PRINT_ARRAY ( ).
         
        // QUESTION NUMBER 5, 6 AND 8.
        // 5. ALLOCATE AN ARRAY OF TEN INTS ON THE FREE STORE; INITALIZE IT WITH THE VALUES 100, 101, 102, ETC.; AND PRINT OUT IT'S VALUES.
        // 6. ALLOCATE AN ARRAY OF 11 INTS ON THE FREE STORE; INITALIZE IT WITH THE VALUES 100, 101, 102, ETC.; AND PRINT OUT IT'S VALUES.
        // 8. ALLOCATE AN ARRAY OF 20 INTS ON THE FREE STORE; INITALIZE IT WITH THE VALUES 100, 101, 102, ETC.; AND PRINT OUT IT'S VALUES.
	    
        // DRILL NUMBER 5.

        // THIS TIME WE WILL BE USING A DIFFERENT FUNCTION TO LOCALIZE VALUES TO THE VECTOR.
	    vector <int*> Vector_Of_Ten_Ints = Allocation_Of_Values_To_Vector ( 10 );

        cout << "DRILL NUMBER # 01, TASK NUMBER # 10 AND QUESTION NUMBER # 05." << endl;

        // THIS WILL OUTPUT VALUES STORED AND ADDRESS VALUE FOR ALL THE VECTOR LOCATIONS.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < Vector_Of_Ten_Ints.size(); Loop_Counter_1++ ){
		    cout << *Vector_Of_Ten_Ints [ Loop_Counter_1 ] << " ";
        }
        cout << endl << endl;
        
        // THEN WE WILL DELTE ALL THE ELEMENTS FROM THE VECTOR. WE CAN DO THIS EITHER BY DELETEING EACH VALUE ONE BY ONE. BUT WITH THE OTHER LINE WE CAN DEALLOCATE THE VECTOR TOO.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < Vector_Of_Ten_Ints.size(); Loop_Counter_1++ ) {
    	    delete Vector_Of_Ten_Ints [ Loop_Counter_1 ];
        }

        // DRILL NUMBER 6.

        // THIS TIME WE WILL BE USING A DIFFERENT FUNCTION TO LOCALIZE VALUES TO THE VECTOR.
	    vector <int*> Vector_Of_Eleven_Ints = Allocation_Of_Values_To_Vector ( 11 );

        cout << "DRILL NUMBER # 01, TASK # 10 AND QUESTION NUMBER # 06. " << endl;
	
        // THIS WILL OUTPUT VALUES STORED AND ADDRESS VALUE FOR ALL THE VECTOR LOCATIONS.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < Vector_Of_Eleven_Ints.size(); Loop_Counter_1++ ) {
		    cout << *Vector_Of_Eleven_Ints [ Loop_Counter_1 ] << " ";
        }
        cout << endl << endl;

        // THEN WE WILL DELTE ALL THE ELEMENTS FROM THE VECTOR. WE CAN DO THIS EITHER BY DELETEING EACH VALUE ONE BY ONE. BUT WITH THE OTHER LINE WE CAN DEALLOCATE THE VECTOR TOO.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < Vector_Of_Eleven_Ints.size(); Loop_Counter_1++ ) {
    	    delete Vector_Of_Eleven_Ints [ Loop_Counter_1 ];
        }

        // DRILL NUMBER 8.

        // THIS TIME WE WILL BE USING A DIFFERENT FUNCTION TO LOCALIZE VALUES TO THE VECTOR.
        vector < int* > Vector_Of_Twenty_Ints = Allocation_Of_Values_To_Vector ( 20 );

        cout << "DRILL NUMBER # 01, TASK # 10 AND QUESTION NUMBER # 08. " << endl;

        // THIS WILL OUTPUT VALUES STORED AND ADDRESS VALUE FOR ALL THE VECTOR LOCATIONS.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < Vector_Of_Twenty_Ints.size(); Loop_Counter_1++ ) {
		    cout << *Vector_Of_Twenty_Ints [ Loop_Counter_1 ] << " ";
        }
        cout << endl << endl;

        // THEN WE WILL DELTE ALL THE ELEMENTS FROM THE VECTOR. WE CAN DO THIS EITHER BY DELETEING EACH VALUE ONE BY ONE. BUT WITH THE OTHER LINE WE CAN DEALLOCATE THE VECTOR TOO.
        for( Loop_Counter_1 = 0; Loop_Counter_1 < Vector_Of_Twenty_Ints.size(); Loop_Counter_1++ ) {
    	    delete Vector_Of_Twenty_Ints [ Loop_Counter_1 ];
        }
return 0;
}
