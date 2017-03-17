#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::string;
using std::cout;
using std::cin;
using std::endl;

enum class MonsterType
{
	Ghost,
	Dragon,
};

struct Player
{
	string name;
	int attack;
	double health;
	int magic;
};


struct Monster
{
	string name;
	MonsterType monsteType;
	int attack;
	double health;
};



//Simple Use of ‘const’

//

//The simplest use is to declare a named constant.This was available in the ancestor of C++, C.

//

//To do this, one declares a constant as if it was a variable but add ‘const’ before it.One has to initialise it immediately in the constructor because, of course, one cannot set the value later as that would be altering it.For example,

//

//const int Constant1 = 96;

//

//will create an integer constant, unimaginatively called ‘Constant1’, with the value 96.

//

//Such constants are useful for parameters which are used in the program but do not need to be changed after the program is compiled.It has an advantage for programmers over the C preprocessor ‘#define’ command in that it is understood & used by the compiler itself, not just substituted into the program text by the preprocessor before reaching the main compiler, so error messages are much more helpful.

//

//It also works with pointers but one has to be careful where ‘const’ is put as that determines whether the pointer or what it points to is constant.For example,

//

//const int * Constant2

//

//declares that Constant2 is a variable pointer to a constant integer and

//

//int const * Constant2

//

//is an alternative syntax which does the same, whereas

//

//int * const Constant3

//

//declares that Constant3 is constant pointer to a variable integer and

//

//int const * const Constant4

//

//declares that Constant4 is constant pointer to a constant integer.Basically ‘const’ applies to whatever is on its immediate left(other than if there is nothing there in which case it applies to whatever is its immediate right).

