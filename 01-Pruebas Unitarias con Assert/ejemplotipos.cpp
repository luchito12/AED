#include <cassert>
#include <iostream>
int main() { 

                         //asserts con bool 

assert(true == true);                          //operacion ==
assert(false!=true);                          //operacion !=  
assert(true or false);                       //operacion or
assert(true and true);                      //operacion and
assert(not false);                         //operacion not

                     //assert con char

assert('p'=='p');                         //operacion ==
assert('i'!='o');                        //operacion !=  
assert('a'<='b');                       //operacion <=
assert('b'>='a');                      //operacion >=
assert('A'+'$'=='e');                 //operacion +
assert('p'-'1'=='?');                //operacion  -
assert('B'*'F'==4620);              //operacion *  
assert('d'/'2'==2);                //operacion /
           
		      //assert con unsigned

assert(5==5);                     //operacion ==
assert(7!=8);                    //operacion !=  
assert(6<=9);                   //operacion <=
assert(7>=4);                  //operacion >=
assert(4+4==8);               //operacion +
assert(9-8==1);              //operacion  -
assert(45== 5*9);           //operacion *  
assert(10/2==5);           //operacion /
assert(2==8%3);           //operacion  %
 
                  //assert con int

assert(3==3);                      //operacion ==
assert(30!=300);                  //operacion !=  
assert(-4<=3);                   //operacion <=
assert(-1>=-6);                 //operacion >=
assert(4==3+1);                //operacion +
assert(-6== -3+-3);           //operacion  -
assert(30== 2*15);           //operacion *  
assert(200/2==100);         //operacion /
assert(0==9%3);            //operacion  %
  
                         //assert con dooble

assert(10.004==10.004);                           //operacion ==
assert(1234.678!=234.0987);                      //operacion !=  
assert(2.345<=3.14);                            //operacion <=
assert(1.618033988749895>=0.98);               //operacion >=
assert(10.1+10.4==20.5);                      //operacion +
assert(45.09999-20.00010==25.09989);         //operacion  -
assert(8.0892==2.14*3.78);                  //operacion *  
assert(1.4==3.5/2.5);                      //operacion /

                          //assert con string

assert("cc"=="cc");                                 //operacion ==
assert("cd"!="cj");                                //operacion !=  
assert("ddd"<="dddd");                            //operacion <=
assert("boca">="boca");                          //operacion >=
assert("minecraft"=="mine"+"craft");            //operacion +
assert("ornitorrinco".lenght()==12);           //operacion length
}