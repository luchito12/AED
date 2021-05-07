#include <cassert>
#include <iostream> 
#include<string>
 using namespace std;

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

assert(5u==5u);                     //operacion ==
assert(7u!=8u);                    //operacion !=  
assert(6u<=9u);                   //operacion <=
assert(7u>=4u);                  //operacion >=
assert(4u+4u==8u);               //operacion +
assert(9u-8u==1u);              //operacion  -
assert(45u== 5u*9u);           //operacion *  
assert(10u/2u==5u);           //operacion /
assert(2u==8u%3u);           //operacion  %
 
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

assert(string("cc")==string("cc"));                                 //operacion ==
assert(string("cd")!=string("cj"));                                //operacion !=  
assert(string("ddd")<=string("dddd"));                            //operacion <=
assert(string("boca")>=string("boca"));                          //operacion >=
assert(string("mine")+string("craft")=="minecraft");            //operacion +
assert(string("ornitorrinco").length()==12);                   //operacion length
}
