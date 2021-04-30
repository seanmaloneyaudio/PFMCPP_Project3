/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/






/*
Thing 1) Restaurant
5 properties:
    1) Number of tables
    2) Number of employees
    3) Restaurant name
    4) Size of restaurant in square feet
    5) Amount of profit each day
3 things it can do:
    1) Feed hungry customers
    2) Charge customers
    3) Provide salary to employees
 */

/*
Thing 2) Family
5 properties:
    1) Size of family
    2) Number of kids
    3) Number of parents
    4) Mother's name
    5) Father's name
3 things it can do:
    1) Eat dinner together
    2) Go to church
    3) Bicker
 */

/*
Thing 3) Synthesizer
5 properties:
    1) Number of keys
    2) Number of synth voices
    3) Name of synth
    4) Output gain
    5) Number of outputs
3 things it can do:
    1) Play sound
    2) Change output gain amount
    3) Change number of outputs
 */

/*
Thing 4) Laptop
5 properties:
    1) Model year
    2) Amount of RAM
    3) Amount of storage
    4) Screen size
    5) Manufacturer
3 things it can do:
    1) Compile code
    2) Browse the web
    3) Play movies
 */

/*
Thing 10) Arsenal Soccer Club
5 properties:
    1) Goalie
    2) Head Coach
    3) Striker
    4) Fan
    5) Referree
3 things it can do:
    1) Host home game
    2) Visit away game
    3) Celebrate championship
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
