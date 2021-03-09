 # Checkmate, Mate!
 
 > Authors: [Ashley Bautista](https://github.com/ashley-bautista),
  [Rodrigo Lamas](https://github.com/lb-rodrigo),
  [Bobby Lerias](https://github.com/bobbyyy57)
 
## Project Description
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
 * *Strategy Pattern*: This design pattern is a useful pattern in which we can change class behavior or algorithm at run time. In this pattern, we are meant to create an object whose behavior is dependent on the strategy it is applied to. There are several different objects representing these strategies. In our project in particular, we have six different strategies, each representing the different types of pieces on the chessboard. This design allows us to organize our pieces according to the type and color, which dictates how and where each piece moves on the board. 
 * *Abstract Factory*: This design pattern allows us to design an interface declaring distinct products, and uses concrete classes to create those products. We will find this pattern useful for the implementation of our two different menus, the beginning and game menu. The menu class will serve as our abstract factory, the beginning and game menu are to serve as our concrete classes. Our concrete products will then be the actual buttons themselves such as save, quit, load, and surrender. This design will allow us better organization and greater flexibility for our various buttons. 

## Class Diagram
 *Strategy Design Pattern*: The functionality of the strategy design pattern shines by allowing us to define a family of algorithms, putting each of them into a separate class while make their objects interchangeable at run time. This is very beneficial as we are able to use pure virtual functions to define algorithms while we allow each indivdual button to implement their algorithm.
![](images/OMT%20Strategy%20Pattern.png)
 *Abstract Factory*: The functionality of the abstract factory pattern can be portrayed by its avility to encapsulate a group of individual factories that have a common theme without specifying their concrete classes. This allows us to explicitly declare interfaces for each distinct product of the Piece family without having them to speciffically be dependent on the buiness logic of the interface.
 *~~~TEMPORARY OMT~~~
![](images/OMT%20Factory%20Method.png)
