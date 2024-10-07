



/// attendee class start:
///
///

class Attendee:
  private:
    char * name;
    int maxScaredLevel;
    int currScaredLevel;
    int scaredIncrement;
  public:
    //default constructor
    //name = "unknown"
    //maxScaredLevel = 10
    //scaredIncrement = 0
    Attendee();

    //constructor
    //sets name to inherited class name (mouse, cat or dog)
    //sets scaredIncrement to inherited class scaredIncrement (1, 2 or 3)
    Attendee(char * name, maxScaredLevel, scaredIncrement);


    //updates scared level
    //the scared level has a max value
    void updateScaredLevel(int scaredIncrement);



