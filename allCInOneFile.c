	***        ********  **       *          * * * *     **      *  * * * * *                                        
        ***             *      * *      *        *         *   * *     *  *                      
       **               *      *  *     *       *           *  *  *    *  *           
       **        ***    *      *   *    *       *           *  *   *   *  * * * * *            
       **               *      *    *   *       *           *  *    *  *  *                 
       ***              *      *      * *        *         *   *     * *  *              
          ***        ********  *        *          * * * *     *       *  * * * * *  
          
          * * * * **  ********   *          ********
          *              *       *          * 
          *              *       *          *
          * * * * *      *       *          *******
          *              *       *          *
          *              *       *          *
          *           ********   *********  ********




/*
author : dennis ritchie && ken thompson at AT&T 
year : 1978
origin : for unix operating system{originally create for writing compilers and operating system}
level : low level system programming language 
*/
--------------------------------------------------------------------------------------------------------
/*
**********************************
structure of C_PROGRAM ::
# include <____(7)____>
	(2)
(1) _functionName(___(3)___)
   {
 
 (4)     --------
 	-------- (5)
 	 ----------
 	  --------
 
 
 ______ (6)
 }
 
 Meaning of above daclaration :
 (1) it define's waht is the function type,  
 (2)  what is the function name
 (3)  what arguments,function is accepting
 (4)  block,body of the function.all variables declared in the function are local to that function.visible to that function only.
 (5)  statements/expressions/snytax/...all stuff related to that function
 (6)  value return by the fuction,it purely depends on (1)
 (7)  header file inclusion.
*/
--------------------------------------------------------------------------------------------------------------
//include required header file,which contains....
#include <requiredHeaderFile.h>
/*
*****/Some standard header file's/******
1. <stdio.h> //standard input/output
     '--> some usefull function's
     |--> printf("foramt_identifer",); // for printing on VDU.
     |--> scanf(""); //for accepting input from the keyboard
     |--> 
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     
2. <stdlib.h> //standard library
'--> some usefull function's
     |--> malloc()_
     |--> calloc()_
     |--> realloc()_
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->

3. <math.h> //standard library
'--> some usefull function's
     |--> 
     |--> 
     |--> 
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->

4. <string.h> //standard library
'--> some usefull function's
     |--> strlen()
     |--> strcmp()
     |--> strcmpi()
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->

5. <.h> //standard library
'--> some usefull function's
     |-->
     |-->
     |--> 
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->
     |-->


*/

// variable's which are out-side of all the function are treated as _GLOBAL-VARIABLE.
// properties of _GLOBAL-VARIABLE.
// 	|--->
// 	      1. global variable are available at through-out the program.
//	      2. global variable are initialize to zero.
//	      3. changes made to global variable are globally affected.

	int integerAsGlobalVariable;  		
	char characterAsGlobalVariable;
	long longAsGlobalVariable;
	double doubleAsGlobalVariable;
	float floatAsGlobalVariable;
	short shortAsGlobalVariable;
	
	//entry point funtion with command line argument
	
	
	
	typedef struct Node{
	int rollNumber;
	char name[20];
	char surname[20];
	int age;
	float marks;
	char address[50];
	};
	
int main(int argc,char *argv[]) 
{// function body start
	int integerAsLocalVariable; // it means we instruct (_Operating System || request the operating system_) through compiler,to get 32 bit continuous bits of memory.(depending on system architecture)
	char characterAsLocalVariable; // it means we instruct (_Operating System || request the operating system_) through compiler,to get 1 bit of memory.(depending on system architecture)
	long longAsLocalVariable; // it means we instruct (_Operating System || request the operating system_) through compiler,to get 32 bit continuous bits of memory.(depending on system architecture)
	double doubleAsLocalVariable; // it means we instruct (_Operating System || request the operating system_) through compiler,to get 32 bit continuous bits of memory.(depending on system architecture)
	float floatAsLocalVariable;// it means we instruct (_Operating System || request the operating system_) through compiler,to get 32 bit continuous bits of memory.(depending on system architecture)
	short shortAsLocalVariable; // it means we instruct (_Operating System || request the operating system_) through compiler,to get 32 bit continuous bits of memory.(depending on system architecture)

printf("This is how c-programming language standards\n");

// conditional statement 
if(conditon_true){ 
	printf("if condition executed,true[NON_ZERo]");
}else{
	printf("else condition executed");
 }

return _value_according_to_function_data_type;
}//funtion body ends
