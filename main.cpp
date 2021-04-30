/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
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
Thing 5) Compressor
5 properties:
    1) Hysteresis
    2) Gain 
    3) Threshold
    4) Range
    5) Ratio
3 things it can do:
    1) Limit 
    2) Compress 
    3) Expand 
 */

/*
Thing 6) EQ 
5 properties:
    1) highBandQ
    2) midBand1Q
    3) midband2Q
    4) lowbandQ
    5) highBand gain
3 things it can do:
    1) Cut out low end
    2) cut out high end
    3) boost certain freqs
 */

/*
Thing 7) Input Section
5 properties:
    1) line gain
    2) mic gain
    3) pad amount
    4) input noise in dB
    5) dynamic range
3 things it can do:
    1) Bring signal from mic to line level
    2) add/subtract gain of line level input
    3) Pad a signal 30 dB
 */

/*
Thing 8) Monitor Section
5 properties:
    1) selected cue output numbers
    2) selected master output numbers
    3) master level
    4) headphone level
    5) talkback level
3 things it can do:
    1) Route audio to different cues/playback outputs
    2) adjust master level
    3) adjust talkback level
 */

/*
Thing 9) Aux Section
5 properties:
    1) aux send 1 level
    2) aux send 2 level
    3) aux send 3 level
    4) aux send 4 level
    5) aux send 5 level
3 things it can do:
    1) route audio to selected sends
    2) adjust gain sent to each send
    3) Group two mono sends as stereo
 */

/*
Thing 10) Neve VR Audio Console
5 properties:
    1) Compressor
    2) EQ
    3) Input Section
    4) Monitor Section
    5) Aux Section
3 things it can do:
    1) Record incoming audio
    2) Compress audio
    3) Send to multiple outputs
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
