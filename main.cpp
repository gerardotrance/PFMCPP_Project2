#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 int
 char
 bool
 float
 double

 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int age = 30;
    
    int height = 6;

    bool isOn = 0;

    bool isGreen = 0;

    bool isMetal = 0;

    float bar = 0.f;

    float phase = 0.f;

    float volume = 0.f;

    double dValue1 = 0.5;

    double dValue2 = 1.0;

    double dValue3 = 1.5;

    char cValue1 = 0;

    char cValue2 = 1;

    char cValue3 = 2;
    
    
    ignoreUnused(number, age, height, isOn, isGreen, isMetal, bar, phase, volume, dValue1, dValue2, dValue3, cValue1, cValue2, cValue3); //passing each variable declared to the ignoreUnused() function
}
void 
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return{}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool playRecord(int recordName, int recordGenre = 0)

{
  ignoreUnused(recordName, recordGenre);

  return{};

}
/*
 2)
 */
void nameTrack(int artist, int genre, int tempo, int date)

{
  ignoreUnused(artist, genre, tempo, date);

}
/*
 3)
 */
void run(int speed, int distance)
{
  ignoreUnused(speed, distance);

}
/*
 4)
 */
void createButton(int positionX, int positionY int height int length)
{
  ignoreUnused(positionX, positionY, height, length);

}
/*
 5)
 */
int displaySprite(int positionX, int positionY, int spriteType)
{

  ignoreUnused(positionX, positionY, spriteType);
  
  return{};

}
/*
 6)
 */
float chooseVolume(int roomNumber, float averageVolume)

{
  ignoreUnused(roomNumber, averageVolume);

  return{};
}
/*
 7)
 */
float walkDog(bool yes, float distance)

{
  ignoreUnused(yes, distance);

  return{};
}
/*
 8)
 */
double createRemix(int track1, int track2, float finishedTempo)
{
  ignoreUnused(track1, track2, finishedTempo);

  return{};
}
/*
 9)
 */
void chooseJacket(int wheatherType, float exactTemprature)

{
  ignoreUnused(wheatherType, exactTemprature);

}
/*
 10)
 */
int doPushups(int numPushups, int speed, bool withWeights)

{
  ignoreUnused(numPushups, speed, withWeights);

  return{};
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto donePushups = doPushups(100, 5, 0);
    //2)
    auto playingRecord = playRecord(1, 2);
    //3)
    auto sprite = displaySprite(1, 2, 3);
    //4)
    auto button = createButton(1, 1);
    //5)
    auto runningNow = run(12, 9);
    //6)
    auto jacket = chooseJacket(9, 12.5);
    //7)
    auto speakerVolume = chooseVolume(2, 2.5);
    //8)
    auto dogWalked = walkDog(0, 2.5);
    //9)
    auto remix = createRemix(1, 2, 120.5);
    //10)
    
    
    ignoreUnused(carRented, donePushups, playingRecord, sprite, button, runningNow, jacket, speakerVolume, dogWalked, remix);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
