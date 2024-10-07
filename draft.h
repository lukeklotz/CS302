
//////////////////////////////////////////////////
/// name: lucas klotz
/// class: cs 302
/// instructor: Karla Fant
/// date: 10/06/2024
/// assignment: 1: header file draft
/// /////////////////////////////////////////////
///
/// GAME OBJECTIVE:
///   make it out of the maze without getting scared!
///   each attendee has different abilities
///   
///   the mouse is the bravest (least sensitive)
///   the mouse is unfortunately quite slow, so it encounters every event
///
///   the cat is medium sensitivity
///   the cat has the ability to sneak, which means some events wont effect it.
///
///   the dog is the most sensitive and gets scared easily
///   however, when the dog gets scared, it might run, which means it might run
///   past events that could scare it.
///
///   
///   
///   
///
/// 5 CLASSES:
///   
///   attendee:
///     private:
///       char* name
///       int currScaredLevel
///       int scaredIncrement
///     public:
///       move()
///       turn()
///
///
///   mouse: public attendee:
///     private:
///
///     public:
///       
///
///   cat: public attendee:
///     private:
///       bool isSneaking
///       int sneakDuration
///     public:
///       int sneakRoll(isSneaking) // random number generator to toggle sneak on for
///                                   a certain duration of moves
///
///       void sneakDurationCounter() // decrements the sneak duration each time the cat moves
///       
///
///   dog: public attendee:
///     private:
///       int runDistance
///       bool isRunning
///
///     public:
///       void randomRun(isRunning, runDistance) //if the dog gets scared enough then isRunning is toggled
///                                                 and runDistance gets randomly assigned a value
///       
///
///    
///       
