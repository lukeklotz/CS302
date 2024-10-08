


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
    //name = "unknown"
    //maxFear = 10
    //fearIncrement = 0
    Attendee();

    //constructor
    //sets name to inherited class name (mouse, cat or dog)
    //sets fearIncrement to inherited class fearIncrement (1, 2 or 3)
    Attendee(char * name, maxFear, fearIncrement);

    //destructor
    ~Attendee()
    
    //updates fear level
    //the fear level has a max value
    void updateScaredLevel(int fearIncrement);

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
    bool specialAbilityToggle; // Special ability on/off switch 
}; 


/////////////////////////////////////////////////
/// Mouse class:
///   The mouse is one of three classes the user can choose from to traverse the maze
///   Its "fear increment" is very low, which means it does not get fear easily
///

class Mouse: public Attendee{
  public:
    //default constructor
    Mouse();

    //constructor
    Mouse();

    //destructor
    ~Mouse();

    void specialAbilityRoll(bool specialAbilityToggle)

  private:

}
