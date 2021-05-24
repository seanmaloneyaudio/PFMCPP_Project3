/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.



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
        Kitchen();
    };
    void openKitchen(Kitchen kitchen);
    float charge(float foodCost, float taxPercentage = 8.2f);
    float payDay(int numWaiters, float chefSalary, float cashierSalary, float waiterSalary);
    Restaurant();

    //Kitchen saturdayBrunch;
 };

Restaurant::Restaurant()
{
    numTables = 0;
    numEmployees = 0;
    restaurantName = "New Restaurant";
}

void Restaurant::openKitchen(Kitchen kitchen)
{
    kitchen.isClean = true;
    kitchen.isServingBreakfast = true;
    kitchen.numWorkers = 20;
    std::cout << "Kitchen is open!";
}

float Restaurant::charge(float foodCost, float taxPercentage)
{
    float taxCost = foodCost * taxPercentage;
    float total = taxCost + foodCost;
    return total;
}

float Restaurant::payDay(int numWaiters, float chefSalary, float cashierSalary, float waiterSalary)
{
    float total;
    total = chefSalary/12 + cashierSalary/12 + (numWaiters * waiterSalary)/12;
    return total;
}

struct Family 
{
    Family();
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

Family::Family() 
{
    familySize = 0;
    numKids = 0;
    numParents = 0;
}

void Family::eatDinner(bool tacoTuesday)
{
    if(tacoTuesday)
    {
        std::cout << "Tacos for dinner.";
    }
    else
    {
        std::cout << "Hotdogs again...";
    }
}

bool Family::goToChurch(bool isSunday)
{
    std::cout << "It is " << isSunday << " that it is Sunday.";
    return isSunday;
}

void Family::bicker(Kid kid1, Kid kid2)
{
    if(kid1.playsSports && kid2.likesArt)
    {
        std::cout << "Loser!!";
        std::cout << "Jock!!";
    }
}

struct Synthesizer 
{
    Synthesizer();
    int numKeys = 88;
    int numVoices = 8;
    std::string synthName = "Prophet Rev 2";
    float outputGain = 34.4f;
    int numOutputChannels = 2;

    void playSound(int numOutputs);
    void adjustGain(float newAmount);
    void changeOutputs(int newOutputAmount);
};

Synthesizer::Synthesizer()
{
    numKeys = 0;
    numVoices = 0;
    synthName = "";
}

void Synthesizer::playSound(int numOutputs)
{
    if(numOutputs ==1)
    {
        std::cout << "Playing audio in " << numOutputs << " output.";
    }
    else 
    {
        std::cout << "Playing audio in " << numOutputs << " outputs.";
    }
}

void Synthesizer::adjustGain(float newAmount)
{
    std::cout << "Gain has been set to " << newAmount;
}

void Synthesizer::changeOutputs(int newOutputAmount)
{
    std::cout << "Number of available outputs: " << newOutputAmount;
}

struct Laptop
{
    Laptop();
    int modelYear = 2019;
    int ramInGb = 8;
    int storageInGb = 256;
    float screenSize = 13.2f;
    std::string manufacturer = "Apple";

    void compile(bool hasSyntaxErrors);
    void browseWeb(std::string searchText);
    void playMovie(std::string movieTitle);
};

Laptop::Laptop()
{
    modelYear = 0;
    ramInGb = 0;
    storageInGb = 0;
    screenSize = 0;
}

void Laptop::compile(bool hasSyntaxErrors)
{
    if(hasSyntaxErrors)
    {
        std::cout << "Cant compile";
    } 
    else 
    {
        std::cout << "Compiling...";
    }
}
void Laptop::browseWeb(std::string searchText)
{
    std::cout << "Google input: " << searchText;
}
void Laptop::playMovie(std::string movieTitle)
{
    std::cout << "Now playing " << movieTitle;
}

struct Compressor 
{
    Compressor();
    float hysteresis = 6.7f;
    float gainInDB = 4.5f;
    float thresholdInDB = 23.4f;
    float rangeInDB = 5.7f;
    float ratio = 6.4f;

    float limitSignal(float inputSignalGain, float maxOutputGain);
    float compress(float inputSignal, bool vocal, bool guitar, bool drums);
    float expand(float desiredDynamicRange);
};

Compressor::Compressor()
{
    hysteresis = 0.0f;
    gainInDB = 0.0f;
    thresholdInDB = 0.0f;
    rangeInDB = 0.0f;
    ratio = 0.0f;

}

float Compressor::limitSignal(float inputSignalGain, float maxOutputGain)
{
    std::cout << "Limiting signal...";
    if(inputSignalGain > maxOutputGain)
    {
        inputSignalGain = maxOutputGain;
    }
    return inputSignalGain;
}

float Compressor::compress(float inputSignal, bool vocal, bool guitar, bool drums)
{
    std::cout << "Compressing signal...";
    float compressionRatio = 1.0f;
    float threshold = 0.0f;
    if(vocal)
    {
        ratio = 3.0;
    }
    else if(guitar)
    {
        ratio = 4.0;
    }
    else if(drums)
    {
        ratio = 6.0;
    }
    return inputSignal - ((inputSignal-threshold)/compressionRatio) + threshold;
}
float Compressor::expand(float desiredDynamicRange)
{
    std::cout << "Expanding dynamic range...";
    float lowestOutput = 0;
    float highestOutput = desiredDynamicRange - lowestOutput;
    return highestOutput;
}

struct EQ 
{
    EQ();
    float highBandQ = 3.5f;
    float midBand1Q = 6.2f;
    float midBand2Q = 3.5f;
    float lowBandQ = 2.3f;
    float highBandGainInDB = 13.5f;

    void lowCut(float freq = 500.0f, int filterOrder = 2);
    void highCut(float freq = 8000.0f, int filterOrder = 1);
    void boost(float centerFreq, int desiredQ);
};

EQ::EQ()
{
    highBandQ = 0.0f;
    midBand1Q = 0.0f;
    midBand2Q = 0.0f;
    lowBandQ = 0.0f;
    highBandGainInDB = 0.0f;
}


void EQ::lowCut(float freq, int filterOrder)
{
    std::cout << "Cutting at " << freq << " Hz with an order of " << filterOrder;
}

void EQ::highCut(float freq, int filterOrder)
{
    std::cout << "Cutting at " << freq << " Hz with an order of " << filterOrder;
}

void EQ::boost(float centerFreq, int desiredQ)
{
    std::cout << "Boosting" << centerFreq << " Hz with a Q factor of " << desiredQ;
}

struct InputSection 
{
    InputSection();
    float lineGainInDB = 23.4f;
    float micGainInDB = 1.3f; 
    float padInDB = -30.0f;
    float inputNoiseInDB = 0.12f;
    float dynamicRange = 116.5f;

    void micToLine(float micInputLevel, float desiredLevel);
    void adjustLineLevel(float currentLineLevel, float desiredLevel); 
    float pad(float currentLevel);
};

InputSection::InputSection()
{
    lineGainInDB = 0.0f;
    micGainInDB = 0.0f;
    padInDB = 0.0f;
    inputNoiseInDB = 0.0f;
    dynamicRange = 0.0f;
}

void InputSection::micToLine(float micInputLevel, float desiredLevel)
{
    float boosted = desiredLevel - micInputLevel;
    std::cout << "Brought signal up to line level by " << boosted << "mV.";
}
void InputSection::adjustLineLevel(float currentLineLevel, float desiredLevel)
{
    float amountChanged = desiredLevel - currentLineLevel;
    std::cout << "Adjusted by " << amountChanged << "dB.";
}

float InputSection::pad(float currentLevel)
{
    std::cout << "Reducing the output by 30dB.";
    return currentLevel - 30.0f;
}

struct MonitorSection 
{
    MonitorSection();
    int cueOutput = 4;
    int masterOutput = 2;
    float masterLevelInDB = 55.6f;
    float headphoneLevelInDB = 12.5f;
    float talkbackLevelInDB = 20.4f;

    void route(int cueOutputToAdd, int masterOutputToAdd);
    float adjustMasterLevel(float currentMasterLevel, float amountToAdd);
    float adjustTalkbackLevel(float currentTalkbackLevel, float amountToAdd);
};

MonitorSection::MonitorSection()
{
    cueOutput = 0;
    masterOutput = 0;
    masterLevelInDB = 0.0f;
    headphoneLevelInDB = 0.0f;
    talkbackLevelInDB = 0.0f;
}

void MonitorSection::route(int cueOutputToAdd, int masterOutputToAdd)
{
    std::cout << "Routing to cue " << cueOutputToAdd << " and master output " << masterOutputToAdd;
}

float MonitorSection::adjustMasterLevel(float currentMasterLevel, float amountToAdd)
{
    std::cout << "New master level: ";
    return currentMasterLevel += amountToAdd;
}

float MonitorSection::adjustTalkbackLevel(float currentTalkbackLevel, float amountToAdd)
{
    std::cout << "New talkback level: ";
    return currentTalkbackLevel + amountToAdd;
}

struct AuxSection 
{
    AuxSection();
    float auxSend1Level = 20.f;
    float auxSend2Level = 10.f;
    float auxSend3Level = 44.5f;
    float auxSend4Level = 14.f;
    float auxSend5Level = 2.6f;

    void routeToSend(bool send1, bool send2, bool send3, bool send4, bool send5);
    void setSendGainLevels(float send1Gain, float send2Gain, float send3Gain, float send4Gain, float send5Gain);
    void createStereoSend(std::string leftAuxSend, std::string rightAuxSend);
};

AuxSection::AuxSection()
{
    auxSend1Level = 0.0f;
    auxSend2Level = 0.0f;
    auxSend3Level = 0.0f;
    auxSend4Level = 0.0f;
    auxSend5Level = 0.0f;
}

void AuxSection::routeToSend(bool send1, bool send2, bool send3, bool send4, bool send5)
{
    if(send1)
    {
        std::cout << "Routed to send 1";
    }
    if(send2)
    {
        std::cout << "Routed to send 2";
    }
    if(send3)
    {
        std::cout << "Routed to send 3";
    }
    if(send4)
    {
        std::cout << "Routed to send 4";
    }
    if(send5)
    {
        std::cout << "Routed to send 5";
    }
}

void AuxSection::setSendGainLevels(float send1Gain, float send2Gain, float send3Gain, float send4Gain, float send5Gain)
{
    std::cout << "Send 1 gain: " << send1Gain;
    std::cout << "Send 2 gain: " << send2Gain;
    std::cout << "Send 3 gain: " << send3Gain;
    std::cout << "Send 4 gain: " << send4Gain;
    std::cout << "Send 5 gain: " << send5Gain;
}
void AuxSection::createStereoSend(std::string leftAuxSend, std::string rightAuxSend)
{
    std::cout << "Pairing " << leftAuxSend << " and " << rightAuxSend;
}

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

void NeveVRConsole::record(InputSection inputs)
{
    std::cout << "Recording line input with a gain of " << inputs.lineGainInDB;
    std::cout << "Recording mic input with a gain of " << inputs.micGainInDB;
}

void NeveVRConsole::compressChannel(int channel, Compressor compressorSettings)
{
    std::cout << "Compressing channel " << channel << "with a ratio of " << compressorSettings.ratio;
}

void NeveVRConsole::chooseOutputs(MonitorSection monitorOuts, AuxSection auxOuts)
{
    std::cout << "Monitor output level: " << monitorOuts.masterLevelInDB;
    std::cout << "Aux output 1 level: " << auxOuts.auxSend1Level;
    std::cout << "Aux output 2 level: " << auxOuts.auxSend2Level;
    std::cout << "Aux output 3 level: " << auxOuts.auxSend3Level;
    std::cout << "Aux output 4 level: " << auxOuts.auxSend4Level;
}

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
    Example::main();
    Family johnsons;
    Synthesizer prophetRev2;
    EQ eq;
    std::cout << "What is for dinner?\n";
    johnsons.eatDinner(false);
    std::cout << "\n";
    std::cout << "Lets turn on our synth and hook it up to my monitors.\n";
    prophetRev2.playSound(2);
    std::cout << "\n";
    std::cout << "Hmmm... Too quiet.\n";
    prophetRev2.adjustGain(20.0f);
    std::cout << "\n";
    std::cout << "Sounds muddy. Lets take out that low frequency rumble.\n";
    eq.lowCut(100, 2);
    std::cout << "\n";
    std::cout << "good to go!" << std::endl;
}
