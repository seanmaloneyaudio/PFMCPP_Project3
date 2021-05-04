 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different than the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */
 struct Restaurant 
 {
    int numTables = 10;
    int numEmployees = 25;
    std::string restaurantName = "Joe's";
    int restaurantArea = 1000;
    float dailyProfit = 2600.89f;

    struct Kitchen
    {
        std::string specialOfTheDay = "Tomato soup";
        std::string headChef = "Gordon Ramsey";
        bool isServingBreakfast = true;
        int numWorkers = 15;
        bool isClean = false;

        void makeMeal(std::string order);
        int getOrderCount(bool isOpen);
        int waitTimeInMinutes(bool isBusy);
    };
    void openKitchen(Kitchen kitchen);
    float charge(float foodCost, float taxPercentage = 8.2f);
    float payDay(int numEmployees, float chefSalary, float cashierSalary, float waiterSalary);

    Kitchen saturdayBrunch;
 };

 struct Family 
 {
    int familySize = 5;
    int numKids = 3;
    int numParents = 2;
    std::string momName = "Betty";
    std::string dadName = "Joe";

    struct Kid 
    {
        std::string kidName = "JimBob";
        int age = 0;
        bool playsSports = false;
        bool likesArt = true;
        bool playsAnInstrument = false;
    };

    void eatDinner(bool tacoTuesday);
    bool goToChurch(bool isSunday);
    void bicker(Kid kid1, Kid kid2);

    Kid newBorn;
 };

struct Synthesizer 
{
    int numKeys = 88;
    int numVoices = 8;
    std::string synthName = "Prophet Rev 2";
    float outputGain = 34.4f;
    int numOutputChannels = 2;
    void playSound(int numOutputs);
    void adjustGain(float newAmount);
    void changeOutputs(int newOutputAmount);
};

 struct Laptop
 {
    int modelYear = 2019;
    int ramInGb = 8;
    int storageInGb = 256;
    float screenSize = 13.2f;
    std::string manufacturer = "Apple";

    void compile(bool hasSyntaxErrors);
    void browseWeb(std::string searchText);
    void playMovie(std::string movieTitle);
 };

 struct Compressor 
 {
    float hysteresis = 6.7f;
    float gainInDB = 4.5f;
    float thresholdInDB = 23.4f;
    float rangeInDB = 5.7f;
    float ratio = 6.4f;

    float limitSignal(float inputSignalGain, float maxOutputGain);
    float compress(float inputSignal, bool vocal, bool guitar, bool drums);
    float expand(float desiredDynamicRange);
 };

 struct EQ 
 {
    float highBandQ = 3.5f;
    float midBand1Q = 6.2f;
    float midBand2Q = 3.5f;
    float lowBandQ = 2.3f;
    float highBandGainInDB = 13.5f;

    void lowCut(float freq = 500.0f, int filterOrder = 2);
    void highCut(float freq = 8000.0f, int filterOrder = 1);
    void boost(float centerFreq, int desiredQ);
 };

 struct InputSection 
 {
    float lineGainInDB = 23.4f;
    float micGainInDB = 1.3f; 
    float padInDB = -30.0f;
    float inputNoiseInDB = 0.12f;
    float dynamicRange = 116.5f;

    void micToLine(float micInputLevel, float desiredLevel);
    void adjustLineLevel(float currentLineLevel, float desiredLevel); 
    float pad(float currentLevel);
 };

struct MonitorSection 
{
    int cueOutput = 4;
    int masterOutput = 2;
    float masterLevelInDB = 55.6f;
    float headphoneLevelInDB = 12.5f;
    float talkbackLevelInDB = 20.4f;

    void route(int cueOutputToAdd, int masterOutputToAdd);
    float adjustMasterLevel(float currentMasterLevel, float amountToAdd);
    float adjustTalkbackLevel(float currentTalkbackLevel, float amountToAdd);
};

 struct AuxSection 
 {
    float auxSend1Level = 20.f;
    float auxSend2Level = 10.f;
    float auxSend3Level = 44.5f;
    float auxSend4Level = 14.f;
    float auxSend5Level = 2.6f;

    void routeToSend(bool send1, bool send2, bool send3, bool send4, bool send5);
    void newGain(float send1Gain, float send2Gain, float send3Gain, float send4Gain, float send5Gain);
    void createStereoSend(std::string leftAuxSend, std::string rightAuxSend);
 };

 struct NeveVRConsole
 {
    Compressor neveLimiterCompressor;
    EQ parametricEQ;
    InputSection input1;
    MonitorSection neveMonitorSection;
    AuxSection neveAuxSection;

    void record(InputSection inputs);
    void compressChannel(int channel, Compressor compressorSettings);
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
