


//////////////////////////////////////////////
/// Attendee class:
///
/// This is the base class for the sub classes "mouse", "cat" and "dog".
///
/// Each class has:
///   A name.
///   Amount of fear the class can experience (fearIncrement).
///   Maximum amount of fear (this is constant across all classes).
///   Current fear level (currFear).
///   Special ability (this class just keeps track of wether its on or off).
/// 
/// The purpose of this class is to encapsulate the common behaviors of the sub classes.
/// 
////////////////////////////////////////////////

class Attendee{
 public:
    //default constructor
    Attendee();

    //constructor
    //sets name to inherited class name (mouse, cat or dog)
    //sets fearIncrement to inherited class fearIncrement (1, 2 or 3)
    Attendee(char * name, maxFear, fearIncrement);

    //destructor
    ~Attendee()
    
    //updates fear level
    //the fear level has a max value
    void reactToEvent(int fearIncrement, string eventType);

    //moves the attendee forward through the maze
    //TODO: I'm not sure how this will work as the "move" functionality requires 
    //      the class to know about the linked list and node pointers. 
    //      This might have to go somewhere else but im leaving it here for now...
    void move();

  private:
    
    char * name; //this will be the name of the class the user is playing with
                 //if the user selects "mouse" this will be set to "mouse" etc.. 
                 //
                 
    int maxFear; //this is the maximum amount of "fear points" the player
                        //can have. If this max is reached then the player loses
                        //
                        //
  protected:
    int currFear; // the current amount of "fear points" the player has
                         //
                         //
    int fearIncrement; // this value will change based on what the user decides to play as
                         //
                         //
    bool specToggle; // Special ability on/off switch 

    bool isPlaying; // if this is false, it means the player has lost and the game quits
}; 


/////////////////////////////////////////////////
/// Mouse class:
///
///   The mouse is one of three classes the user can choose from to traverse the maze
///   Its "fear increment" is very low, which means it does not get scared easily
///
///   special ability:
///     
///     blindness:
///       the mosue can go blind which is actually a good thing
///       because then it cant react to events, which means its invincible!
///
///   weakness:
///     
///     can get squashed:
///       since the mouse is so small, it needs to be careful!
///       Each time theres an event, the mouse has a chance of being squashed
///

class Mouse: public Attendee{
  public:
    //default constructor
    Mouse();

    //destructor
    ~Mouse();

    //event reactions
    void blindnessRoll(bool specToggle, bool isBlind);

    //certain events are dangerous for the mouse and will squish the mouse
    bool gotSquashed(string eventType, bool isSquashed)

  private:
    bool isBlind;
    bool isSquashed;
    int fearIncrement;

};


//////////////////////////////////////////////////////////////
/// Cat class:
///   
///   special ability:
///
///     sneak mode:
///
///       after each move, the cat has a chance of going into sneak mode
///       which allows it to move through part of the maze without 
///       being effected by events.
///
///   weakness:
///
///     curiosity:
///
///       sometimes gets too curious and will experience the same event twice!
///       this is not good since it can add dramatically to its currFear.
/////////////////////////////////////////////////////////////
class Cat: public Attendee{

  public:
    //default constructor
    Cat();

    //construtor
    Cat();

    //destructor
    ~Cat();

    //when a random event happens, this function is invoked to possibly toggle "isInSneakMode"
    bool sneakModeRoll();

    //when a random event happens, this function is invoked to possibly toggle "isCurious"
    bool curiosityRoll();

  private:

    bool isInSneakMode;
    bool isCurious;

};



/////////////////////////////////////////////////////
/// Dog class:
///
///    The dog is the most sensative, so he gets scared easily!
///    Luckily, when the dog gets scared, theres a chance that he runs! 
///    If this happens, the dog will bypass some rooms in the maze.
///
///    strength:
///       
///       isRunning: isRunning has a chance of getting toggled each time the dog
///       gets scared. This ability allows the dog to quickly bypass the next few
///       rooms of the maze.
///
///    weakness:
///       
///       the dog is unfortunately quite sensative, so it will gain lots of fear points
///       as it encounters events along the way.
/// ///////////////////////////////////////////////////

class Dog: public Attendee {
  public:
    //constructor
    Dog();
   
    //destructor
    ~Dog();
      
    void toggleRun()
  private:
      bool isRunning;

}
