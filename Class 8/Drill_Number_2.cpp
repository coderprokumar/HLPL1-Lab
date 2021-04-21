// A FILE WHICH CONTAINS ALL THE HEADER FILES SO WE DON'T NEED TO INITALIZE OR INCLUDE HEADERS FOR EACH PIECE OF CODE OR FUNCTION.
#include "std_lib_facilities.h"

// A LOOP VARIABLE THAT WE WILL USE THROUGHOUT THIS PROGRAM.
int Loop_Counter_1 = 0;

int main(){
   // USED TO CLEAR SCREEN.
    system( "cls" );
    
    // JUST A OPENING NOTE. TELLING USER ABOUT THE PROGRAM.
    cout << "=============================================================" << endl << endl;

	cout << "BJARNE STROUSTROUP BOOK!"                                              << endl;
    cout << "PROGRAMMING: PRINCIPLES AND PRACTICE USING C++ (2ND EDITION)."         << endl;
    cout << "CHAPTER NUMBER # 17."                                                  << endl;
    cout << "DRILL NUMBER # 02."                                            << endl << endl;

    cout << "=============================================================" << endl << endl;
    
    // ASKING USER TO PRESS ENTER TO MOVE TO DRILL NUMBER 1 AND TASK NUMBER 1. AFTER THAT WE WILL CLEAR SCREEN AND MOVE TO DRILL NUMBER 1, TASK NUMBER 1.
    cout << "PRESS ENTER TO SEE DRILL NUMBER: 2, TASK NUMBER: 1...... ";
    cin.ignore( numeric_limits < streamsize> :: max( ), '\n');
    system( "cls" );
    
    
    // DRILL NUMBER 2, TASK NUMBER 1.
    // 1. ALLOCATE AN INT, INITALIZE IT TO 7, AND ASSIGN IT'S ADDRESS TO A VARIABLE p1.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 01." << endl; 
            
            // ALLOCATING AN INT, INITALIZING IT TO 7. AND ASSIGNING IT'S ADDRESS TO A NEW VARIABLE p1.
            int My_Integer = 7;
	        int* p1 = &My_Integer;

    // DRILL NUMBER 2, TASK NUMBER 2.
    // 2. PRINT OUT THE VALUE OF p1 AND OF THE INT IT POINTS TO.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 02." << endl << endl; 
            
            // PRINTING OUT THE VALUE OF p1.
            cout << "THE VALUE OF p1: " << *p1 << "." << endl << endl;
      
	// DRILL NUMBER 2, TASK NUMBER 3.
    // 3. ALLOCATE AN ARRAY OR 7 INTS; INITALIZE IT TO 1, 2, 4, 8, ETC.; AND ASSIGN IT'S ADDRESS TO A VARIABLE p2.
    
        cout << "DRILL NUMBER # 02, TASK NUMBER # 03." << endl; 
            
            // ALLOCATING AN ARRAY OF LENGTH 7. INITALIZING IT WITH SOME VARIABLES. AND AFTER THAT ASSIGNING IT'S ADDRESS TO p2.
            int My_Array [ 7 ] = { 1, 2, 4, 8, 16, 32, 64 };
	        int* p2 = My_Array;
        
    // DRILL NUMBER 2, TASK NUMBER 4.
    // 4. PRINT OUT THE VALUE OF p2 AND OF THE ARRAY IT POINTS TO.

	    cout << "DRILL NUMBER # 02, TASK NUMBER # 04." << endl << endl; 
            
            // PRINTING OUT THE VALUE OF p2 AND OF THE ARRAY IT POINTS TO.
	        cout << endl << "THE VALUE OF p2 IS: " << *p2 << "." <<endl;
            cout << "THE VALUE OF ARRAY IT POINT'S TO IS: " << *My_Array << " ." <<endl << endl;

    // DRILL NUMBER 2, TASK NUMBER 5.
    // 5. DECLARE AN INT* CALLED p3 AND INITALIZE IT WITH p2.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 05." << endl; 
            
            // DECLARED AN INT CALLED p3 AND INITALIZED IT WITH p2.
            int* p3 = p2;
        
    // DRILL NUMBER 2, TASK NUMBER 6.
    // 6. ASSIGN p1 to p2.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 06" << endl; 
            
            // ASSIGNED p1 TO p2.
            p2 = p1;
        
        
    // DRILL NUMBER 2, TASK NUMBER 7.
    // 7. ASSIGN p3 to p2.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 07." << endl; 
            
            // ASSIGNING p3 TO p2.
            p2 = p3;
        
    // DRILL NUMBER 2, TASK NUMBER 8.
    // 8. PRINT OUT THE VALUES OF p1 AND p2 AND OF WHAT THEY POINT TO.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 08." << endl << endl; 
            
            // PRINTING OUT THE VALUES OF p1 AND p2 AND ALSO OF WHAT THEY POINT TO.
            cout << "THE VALUE OF p1 IS = " << p1 << ", AND IT POINTS TO = " << *p1 << "." <<endl;
	        cout << "THE VALUE OF p2 IS = " << p2 << ", AND IT POINTS TO = " << *p2 << "." << endl <<endl;
            
    // DRILL NUMBER 2, TASK NUMBER 9.
    // 9. DEALLOCATE ALL THE MEMORY YOU ALLOCATED FROM THE FREE STORE.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 09." << endl; 
            
            // WE CAN'T DEALLOCATE AS WE HAVN'T STORED IT USING 'NEW'.
            cout << "WE HAVE INITALIZED SOME LOCAL VARIABLES ON STACK."                                                                << endl;
            cout << "AND FOR LOCAL VARIABLES THERE IS A REGION CALLED PRE-ALLOCATED OR COMMITED MEMORY."                               << endl;
            cout << "AND WE CAN'T DEALLOCATE PRE-ALLOCATED OR COMMITED MEMORY."                                                        << endl;
            cout << "AND EVEN ACCORING TO THE BOOK WE REQUEST MEMORY TO BE ALLOCATED ON THE FREE STORE BY THE 'NEW' OPERATOR."         << endl;
            cout << "AND WE HAVEN'T USED 'NEW' TO INITALIZE THESE VARIABLES SO THAY AREN'T ALLOCATED FROM THE FREE STORE."             << endl;
            cout << "SO WE CAN'T DEALLOCATE THEM."                                                                                     << endl;
            cout << "FOR REFERENCE SEE PAGE NUMBER 593."                                                                       << endl << endl;

    // DRILL NUMBER 2, TASK NUMBER 10.
    // 10. ALLOCATE AN ARRAY OF TEN INTS; INITALIZE IT TO 1, 2, 4, 8, ETC.; AND ASSIGN IT'S ADDRESS TO A VARIABLE p1.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 10." << endl; 
            
            // ALLOCATING AN ARRAY OF LENGTH 10 AND THEN INITALIZING IT WITH VALUES. AFTER THAT WE WILL ASSIGN THE ADDRESS THE ARRAY TO p1.
	        int Array_Of_Ten_Ints [ 10 ] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	        p1 = Array_Of_Ten_Ints;

    // DRILL NUMBER 2, TASK NUMBER 11.
    // 11. ALLOCATE AN ARRAY OF TEN INTS, AND ASSIGN IT'S ADDRESS TO A VARAIBLE p2.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 11." << endl; 
            
            // ALLOCATING AN ARRAY WITH LENGTH 10 AND INITALIZE IT WITH DIFFERENT VARIABLES. AFTER THAT WE WILL ASSIGN THE ADDRESS OF ARRAY TO p2.
	        int Array_Of_Ten_Ints_2 [ 10 ] = { 3, 6, 12, 24, 48, 96, 192, 384, 768, 1536 };
	        p2 = Array_Of_Ten_Ints_2;

    // DRILL NUMBER 2, TASK NUMBER 12.
    // 12. COPY THE VALUES OF THE ARRAY POINTED TO THE p1 INTO THE ARRAY POINTED TO BY p2.

        cout << "DRILL NUMBER # 02, TASK NUMBER # 12." << endl; 
            
            // COPYING THE VALUES OF THE ARRAY POINTED TO THE p1 INTO THE ARRAY POINTED TO p2.
	        for( Loop_Counter_1 = 0; Loop_Counter_1 < 10; Loop_Counter_1++ ) {
		        *( p2 + Loop_Counter_1 ) =  *( p1 + Loop_Counter_1 );
            }

    // DRILL NUMBER 2, TASK NUMBER 13.
    // 13. REAPEAT 10–12 USING A VECTOR RATHER THAN AN ARRAY.

        // QUESTION NUMBER 10, 11 AND 12.
        // 10. ALLOCATE A VECTOR OF TEN INTS; INITALIZE IT TO 1, 2, 4, 8, ETC.; AND ASSIGN IT'S ADDRESS TO A VARIABLE p1.

            cout << "DRILL NUMBER # 02, TASK NUMBER # 13 AND QUESTION NUMBER # 10" << endl; 
                
                // ALLOCAING A VECTOR OF LENGTH 10 WITH DIFFERENT VARIABLES. AFTER THAT ASSIGNING IT'S ADDRESS TO p1.
                vector < int > Vector_Of_Ten_Ints { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	            p1 = &Vector_Of_Ten_Ints [ 0 ];

        // 11. ALLOCATE AN ARRAY OF TEN INTS, AND ASSIGN IT'S ADDRESS TO A VARAIBLE p2.

            cout << "DRILL NUMBER # 02, TASK NUMBER # 12 AND QUESTION NUMBER # 11" << endl;
                
                // ALLOCAING A VECTOR OF LENGTH 10 WITH DIFFERENT VARIABLES. AFTER THAT ASSIGNING IT'S ADDRESS TO p2.
	            vector < int > Vector_Of_Ten_Ints_2 { 3, 6, 12, 24, 48, 96, 192, 384, 768, 1536 };
	            p2 = &Vector_Of_Ten_Ints_2 [ 0 ];

        // 12. COPY THE VALUES OF THE VECTOR POINTED TO THE p1 INTO THE VECTOR POINTED TO BY p2.

            cout << "DRILL NUMBER # 02, TASK NUMBER # 13 AND QUESTION NUMBER # 12" << endl << endl; 
 
            // COPYING THE VALUES OF THE VECTOR POINTED TO THE p1 INTO THE VECTOR POINTED TO p2.
	        p2 = p1;
    return 0;
}
