/* NewApp.cpp
   This is a hello world
*/

#include "../inc/NewApp.h"
#include <stdio.h>
#include <string.h>


Stringer::Stringer(){
// Initializes class
//
// input: none
// output:none
//

	helloWorld = "Hello World";

}

Stringer::setHelloWorld(string inVal){
// Sets attribute hello world 
//
// input: string value
// output:none
//

	helloWorld = inVal;

}

Stringer::getHelloWorld(){
// Returns hello world
//
// input: none
// output: string value
//

	return helloWorld;

}

// MAIN FUNCTION

using namespace std;

int main(int argc, chard ** argv){

	Stringer hello;
	string writeOut;

	hello.setHelloWorld("Hello World!");

	writeOut = hello.getHelloWorld();

	cout << "Here is my string: " << endl;
	cout  << writeOut << endl;

	exit(0);

}