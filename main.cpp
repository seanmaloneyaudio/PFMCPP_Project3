/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
struct CarWash
{

};
*/

/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};

/*
Thing 1) Restaurant
5 properties:
    1) Number of tables
    2) Number of employees
    3) Restaurant name
    4) Size of restaurant in square feet
    5) Amount of profit each day
3 things it can do:
    1) Open the kitchen
    2) Charge customers
    3) Provide salary to employees
 */
 struct Restaurant 
 {
    //Number of tables
    int numTables = 10;
    //Number of employees
    int numEmployees = 25;
    //Restaurant name
    std::string restaurantName = "Joe's";
    //Size of restaurant in square feet
    int restaurantArea = 1000;
    //Amount of profit each day
    float dailyProfit = 2600.89f;

    struct Kitchen
    {
        std::string specialOfTheDay;
        std::string headChef;
        bool isServingBreakfast;
        int numWorkers;
        bool isClean;

        void makeMeal(std::string order);
        int getOrderCount(bool isOpen);
        int waitTimeInMinutes(bool isBusy);
    };
    //Open the kitchen
    void openKitchen(Kitchen kitchen);
    //Charge customers
    float charge(float foodCost, float taxPercentage = 8.2f);
    //Provide salary to employees
    float payDay(int numEmployees, float chefSalary, float cashierSalary, float waiterSalary);

    Kitchen saturdayBrunch;
 };
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
 struct Family 
 {
    // Size of family
    int familySize = 5;
    // Number of kids
    int numKids = 3;
    // Number of parents
    int numParents = 2;
    // Mother's name
    std::string momName = "Betty";
    // Father's name
    std::string dadName = "Joe";

    struct Kid {
        std::string kidName;
        int age;
        bool playsSports;
        bool likesArt;
        bool playsAnInstrument;
    };

    // Eat dinner together
    void eatDinner(bool tacoTuesday);
    // Go to church
    bool goToChurch(bool isSunday);
    // Bicker
    void bicker(Kid kid1, Kid kid2);

    Kid newBorn;
 };

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

struct Synthesizer 
{
    // Number of keys
    int numKeys = 88;
    // Number of synth voices
    int numVoices = 8;
    // Name of synth
    std::string synthName = "Prophet Rev 2";
    // Output gain
    float outputGain = 34.4f;
    // Number of outputs
    int numOutputChannels = 2;
    // Play sound
    void playSound(int numOutputs);
    // Change output gain amount
    void adjustGain(float newAmount);
    // Change number of outputs
    void changeOutputs(int newOutputAmount);
};
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
 struct Laptop
 {
    // Model year
    int modelYear = 2019;
    // Amount of RAM
    int ramInGb = 8;
    // Amount of storage
    int storageInGb = 256;
    // Screen size
    float screenSize = 13.2f;
    // Manufacturer
    std::string manufacturer = "Apple";



    // Compile code
    void compile(bool hasSyntaxErrors);
    // Browse the web
    void browseWeb(std::string searchText);
    // Play movies
    void playMovie(std::string movieTitle);
 };

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
 struct Compressor 
 {
    // Hysteresis
    float hysteresis = 6.7f;
    // Gain 
    float gainInDB = 4.5f;
    // Threshold
    float thresholdInDB = 23.4f;
    // Range
    float rangeInDB = 5.7f;
    // Ratio
    float ratio = 6.4f;

    // Limit 
    float limitSignal(float inputSignalGain, float maxOutputGain);
    // Compress 
    float compress(float inputSignal, bool vocal, bool guitar, bool drums);
    // Expand 
    float expand(float desiredDynamicRange);
 };

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
 struct EQ 
 {
    // highBandQ
    float highBandQ = 3.5f;
    // midBand1Q
    float midBand1Q = 6.2f;
    // midband2Q
    float midBand2Q = 3.5f;
    // lowbandQ
    float lowBandQ = 2.3f;
    // highBand gain
    float highBandGainInDB = 13.5f;

    //Cut out low end
    void lowCut(float freq = 500.0f, int filterOrder = 2);
    //Cut out high end
    void highCut(float freq = 8000.0f, int filterOrder = 1);
    //Boost certain freqs
    void boost(float centerFreq, int desiredQ);
 };

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
 struct InputSection 
 {
    // line gain
    float lineGainInDB = 23.4f;
    // mic gain
    float micGainInDB = 1.3f; 
    // pad amount
    float padInDB = -30.0f;
    // input noise in dB
    float inputNoiseInDB = 0.12f;
    // dynamic range
    float dynamicRange = 116.5f;

    //Bring signal from mic to line level
    void micToLine(float micInputLevel, float desiredLevel);
    //Add/subtract gain of line level input
    void adjustLineLevel(float currentLineLevel, float desiredLevel); 
    //Pad a signal 30 dB
    float pad(float currentLevel);
 };

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

struct MonitorSection 
{
    // selected cue output numbers
    int cueOutput = 4;
    // selected master output numbers
    int masterOutput = 2;
    // master level
    float masterLevelInDB = 55.6f;
    // headphone level
    float headphoneLevelInDB = 12.5f;
    // talkback level
    float talkbackLevelInDB = 20.4f;

    //Route audio to different cues/playback outputs
    void route(int cueOutputToAdd, int masterOutputToAdd);
    //Adjust master level
    float adjustMasterLevel(float currentMasterLevel, float amountToAdd);
    //Adjust talkback level
    float adjustTalkbackLevel(float currentTalkbackLevel, float amountToAdd);
};
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
 struct AuxSection 
 {
    // aux send 1 level
    float auxSend1Level = 20.f;
    // aux send 2 level
    float auxSend2Level = 10.f;
    // aux send 3 level
    float auxSend3Level = 44.5f;
    // aux send 4 level
    float auxSend4Level = 14.f;
    // aux send 5 level
    float auxSend5Level = 2.6f;

    //Route audio to selected sends
    void routeToSend(bool send1, bool send2, bool send3, bool send4, bool send5);
    //Adjust gain sent to each send
    void newGain(float send1Gain, float send2Gain, float send3Gain, float send4Gain, float send5Gain);
    //Group two mono sends as stereo
    void createStereoSend(std::string leftAuxSend, std::string rightAuxSend);
 };

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
 struct NeveVRConsole
 {
    // Compressor
    Compressor neveLimiterCompressor;
    // EQ
    EQ parametricEQ;
    // Input Section
    InputSection input1;
    // Monitor Section
    MonitorSection neveMonitorSection;
    // Aux Section
    AuxSection neveAuxSection;

    //Record incoming audio
    void record(InputSection inputs);
    //Compress audio
    void compressChannel(int channel, Compressor compressorSettings);
    //Send to multiple outputs
    void chooseOutputs(MonitorSection monitorOuts, AuxSection auxOuts);
 };

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
