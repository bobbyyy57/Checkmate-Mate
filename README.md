 # Checkmate, Mate!
 
  Authors: [Ashley Bautista](https://github.com/ashley-bautista),
  [Rodrigo Lamas](https://github.com/lb-rodrigo),
  [Bobby Lerias](https://github.com/bobbyyy57)
 
## Project Description
  ## Phase I
  **Importance/Interesting**:
    * All watching The Queen’s Gambit, out of the list of ideas in the project description, the Chess Game easily caught all of our attention. How complex and yet-so simple chess is, the possibilities of what we can do as a team drove us to choose this project. Even though each of us have had experience playing chess, the game itself and the world that possess it is so foreign. We saw an opportunity to dive deep into chess and understand its complexities all while applying technical skills we have obtained in class. 

**Languages/Tool**s:
 * *C++*
 * *VSCode*: source-code editor made by Microsoft for Linux, Windows, and macOS.
 * *Repl.It*: online IDE that stands for “read--evaluate--print loop”.
 
**Input/Output**:
 * *Input*:
   * the amount of players (one or two) which decides if the player will be playing against a computer or not
   * user's moves
   * 'q' = 'quit'
   * 'r' = 'redo'
   * 's' = 'save'
 * *Output*:
   * depending on amount of players, game will start with either two-players or against computer 
   * the pieces moving from one spot (node) to another by either a user of the computer.
   * quits the game
   * redos player's move
   * saves game and will allow player(s) to return to game
 
**Design Patterns**:
 * *Command Design Pattern*: This design pattern is one where an object is used to contain the information needed to perform an action at a later time. We found this pattern to be useful to apply to the menu for our chess application. We will be encapsulating the information needed in a class representing the sender, which will be responsible for displaying the options on our menu such as save, load, and start a new game. Each of these options will have their own class, derived from a command class that contains their own special variables and functions specific to their command. These classes will then call functions in the receiver class which’ll perform the actual operations needed behind the scenes.
 * *Strategy Design Pattern*: This design pattern is a useful pattern in which we can change class behavior or algorithm at run time. In this pattern, we are meant to create an object whose behavior is dependent on the strategy it is applied to. There are several different objects representing these strategies. In our project in particular, we have six different strategies, each representing the different types of pieces on the chessboard. This design allows us to organize our pieces according to the type and color, which dictates how and where each piece moves on the board. 

## Class Diagram
  ## Phase II
 *Command Design Pattern*: The functionality of the command design pattern allows us to turn requests into a stand-alone object that contains all information about the request. This allows to parameterize methods with different requests without having the GUI code to become overly dependent on the menu's logic.
![](images/OMT%20Command%20Pattern.jpg)
 *Strategy Design Pattern*: The functionality of the strategy design pattern shines by allowing us to define a family of algorithms, putting each of them into a separate class while make their objects interchangeable at run time. This is very beneficial as we are able to use pure virtual functions to define algorithms but we allow each indivdual chess piece implement their algorithm. 
![](images/OMT%20Strategy%20Pattern.jpg)
