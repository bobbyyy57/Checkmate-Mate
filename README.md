 # Checkmate, Mate!
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: [Ashley Bautista](https://github.com/ashley-bautista),
 > [Rodrigo Lamas](https://github.com/lb-rodrigo),
 > [Bobby Lerias](https://github.com/bobbyyy57)
 
## Project Description
 > ## Phase I
 > **Importance/Interesting**:
 >   * All watching The Queen’s Gambit, out of the list of ideas in the project description, the Chess Game easily caught all of our attention. How complex and yet-so simple chess is, the possibilities of what we can do as a team drove us to choose this project. Even though each of us have had experience playing chess, the game itself and the world that possess it is so foreign. We saw an opportunity to dive deep into chess and understand its complexities all while applying technical skills we have obtained in class. 

 > **Languages/Tool**s:
 >   * *C++*
 >   * *VSCode*: source-code editor made by Microsoft for Linux, Windows, and macOS.
 >   * *Repl.It*: online IDE that stands for “read--evaluate--print loop”.
 
 > **Input/Output**:
 >   * *Input*:
 >     * the amount of players (one or two) which decides if the player will be playing against a computer or not
 >     * user's moves
 >     * 'q' = 'quit'
 >     * 'r' = 'redo'
 >     * 's' = 'save'
 >   * *Output*:
 >     * depending on amount of players, game will start with either two-players or against computer 
 >     * the pieces moving from one spot (node) to another by either a user of the computer.
 >     * quits the game
 >     * redos player's move
 >     * saves game and will allow player(s) to return to game
 
 > **Design Patterns**:
 >   * *Decorator Design Pattern*: This design pattern is used for implementing additional functionality to a particular object as opposed to to a class of subjects. This makes it easier to add individual functionality to an object without affecting the behavior of other objects from the same class. Meaning that we can add functionality to how our individual chess pieces without messing the established logic and behaviour for each chess piece.  Ex. first focusing on a pawns mobility and then about it eating other chess pieces. Thus making the process of chucking functions and class much easier.
 >   * *Composite Design Pattern*: This design pattern is a partitioning design pattern that describes a group of objects which are treated the same way as a single instance of the same type of object. It’s meant to compose objects into tree structures to represent part-whole hierarchies. This design pattern would allow us to separate our chess pieces in an orderly way. For example, pawns of each team are of the same object and are all controlled in the same way. Our program in particular could have the pawns represent one object in the tree structure that would also include objects of each chess piece. This pattern would allow us a structured and easier to manage organization of the many chess pieces our program contains.
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
