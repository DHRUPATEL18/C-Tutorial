#include<stdio.h>
#include "StorageClasses1.c" // <4>. Register Variable
// You can link other C file to using #include "file_name.c"


extern int VK; // <2>. External Variable

int Var() // <3>. Static Variable
{
        static int a = 1;
        printf("%d\n", a);

        a++;

}

int mysum(int a, int b) // <1>. Automatic Variable
{
        auto int sum = a + b; // you can use sum Variable without useing of auto because of that is keyword is by defult printed when you declare any varible (Local one must be)
        return sum;
}

int main()
{
        // Declaration - Telling the compiler about variable (NO SPACE RESERVED)
        // Definition - Declaration + Space reserved

        int a = 18;
        int b = 7;

        printf("%d\n", mysum(a,b));

        printf("The jersey number of VK is %d", VK);
        printf("\n");
                   
        Var();
        Var();
        Var();
        Var();
        Var();
        Var();

        return 0;
}
/*
 -->    That is defines followings atttributes about a vartiable in c 
         <1>>. Scope  -- The Range of any varialbe
         <2>. Define intial value -- Define variable ex.. int a;
         <3>. Lifetime -- Life of the variable
    
 -->    Type of Storage Classes
         <1>. Automatic Variable
         <2>. External Variable
         <3>. Static Variable
         <4>. Register Variable

 -->    <1>. Scope = Local to the functions body they are define in 
        <2>. Default Value = Garbage Value (Random value are there in)
        <3>. Life time = Till the end of the function block they are define in

        KEYWORD = auto

        That is a Defult Variable
        int dhru; and auto int dhru; this ia are same

 -->   <1>. Scope = Global to the program they are define
       <2>. Defult Value = 0
       <3>. Life time = This Variables are declared outside of any functions. They are available throughout the lifetime of the program.

       KEYWORD = extern

       It's same like a Global Variable
       This Variablecan be changed by any of other function in the program

 -->   <1>. Scope = Local to the block they are define
       <2>. Define Value = 0
       <3>. Life time =  They are available throughout the lifetime of the program

       KEYWORD = static
       
       That is Variable remains under existence for use within the fucntion for entire program run
        
 -->   <1>. Scope = Local to the function they are define
       <2>. Default Value = Garbage Value (Random value are there in)
       <3>. Life time = Tyer are available till the end of the fucntion block, in which the variable is define

       It is requests the compiler to store the variable in the CPU register instead of storing in the memory to have faster access
       Generally this is done for the variables which are being used fequently 

*/
