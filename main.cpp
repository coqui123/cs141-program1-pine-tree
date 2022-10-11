/**------------------------------------------

    Program 1: Layered Pine Tree
    Prompt for the number of tree layers and display
    ASCII layered pine tree

    Course: CS 141, Fall 2022.
    System: Windows 11
    Author: Alexander E. Carrillo
 ---------------------------------------------**/

#include <iostream>   // for cin and cout

#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main() {
    // Display the menu and get the user choice
    int menu_option = 0;
    std::cout << "Program 1: The Pine Tree            " << std::endl <<
        "Choose from the following options:  " << std::endl <<
        "   1. Display the HELLO graphic  " << std::endl <<
        "   2. Display The Pine Tree        " << std::endl <<
        "   3. Exit the program          " << std::endl <<
        "Your choice -> ";
    std::cin >> menu_option;

    if (menu_option == 3) { // Handle menu option of 3 to exit
        exit(0); // The call to exit the code successfully (0 means the runs didn't encounter any problem).  
    }
    else if (menu_option == 1) { // Handle menu option of 1 to display custom ASCII graphics
        // Display ASCII graphics for "HELLO".  
        // The main purpose of this part is to give you hints about usnig setw and setfill and their behaviors.

        //the character for the frame of our display.
        char frame = '-';
        std::cout << "Enter your frame character: ";
        std::cin >> frame;
        std::cout << std::endl;
        // The goal of next three lines is to print a line with 77 dashes differently. 
        std::cout << std::setfill(frame); //change the default character for filling the fields defined using setw. You can change it fill to different character to see the difference.
        std::cout << std::setw(78) << std::endl; // \n counts in 78 so you will get 77 dashes plus one \n  
        std::cout << std::setw(78) << std::endl; ///after setfill you need to pass a string or character to push setfil to fill the field, otherwise you will see an empty line for this instruction. See the differnce in output from this line and the above line. 
        std::cout << std::setw(77) << frame << std::endl; //I use 77 with setfill and one extra at the end to get the same result

        std::cout << std::setw(8) << " " << "   **    **    ********    **         **         ********    " << std::setw(9) << std::endl;
        std::cout << std::setw(8) << " " << "   **    **    ********    **         **         ********    " << std::setw(9) << std::endl;
        std::cout << std::setw(8) << " " << "   **    **    **          **         **         **    **    " << std::setw(9) << std::endl;
        std::cout << std::setw(8) << " " << "   ********    ********    **         **         **    **    " << std::setw(9) << std::endl;
        std::cout << std::setw(8) << " " << "   ********    ********    **         **         **    **    " << std::setw(9) << std::endl;
        std::cout << std::setw(8) << " " << "   **    **    **          **         **         **    **    " << std::setw(9) << std::endl;
        std::cout << std::setw(8) << " " << "   **    **    ********    ********   ********   ********    " << std::setw(9) << std::endl;
        std::cout << std::setw(8) << " " << "   **    **    ********    ********   ********   ********    " << std::setw(9) << std::endl;
        std::cout << std::setw(77) << frame << std::endl; //the extra character is - so in total we will have 77 dashes.
        std::cout << std::setw(78) << std::endl; //again, the extra character is \n so you have set the width to 78	

        //you can do it this way using a for-loop too 
        for (int i = 0; i < 77; i++) {
            std::cout << frame;
        }
        std::cout << endl;
    }
    else if (menu_option == 2) {

        // Prompt for and get the number of layers for the tree.
        int number_of_tree_layers = NULL;

        std::cout << "Number of tree layers -> ";
        std::cin >> number_of_tree_layers;
        std::cout << std::endl; //do not remove this line. It is essential for the autograder!

        int square = (5 + (number_of_tree_layers - 1) * 2);

        int trunk_length = (2 * number_of_tree_layers); //calculates the number layers of the trunk

        for (int i = 1; i <= number_of_tree_layers; i++) { // for loop with prints each layer

            int initial_space = (square / 2 - (i - 1) + 1); //calculates the initial spaces for the initial row

            int initial_stars = (2 * i - 1); //amount of stars in the inital layer

            for (int x = 1; x <= 3; x++) { // makes sure each row has 3 layers and goes to a new line every row
                for (int z = NULL; z < initial_space - x; z++) { // loop for the initial spaces for the top of the tree the leaves 
                    std::cout << " ";
                }

                for (int y = NULL; y < (initial_stars + 2 * (x - 1)); y++) { // loop which prints the * character for us in the proper places
                    std::cout << "*";
                }

                std::cout << endl; //ends the line for each tree rows
            }
        }                                                                       
        for (int i = NULL; i < trunk_length; i++) { // for loop which prints the trunk for us
            for (int k = NULL; k < number_of_tree_layers; k++) { // calculates the amount of spaces prior to the trunk being printed 
                std::cout << " ";
            }

            for (int frog = NULL; frog < 3; frog++) { //prints the right amount of | character for the trunk
                std::cout << "|";
            }

            std::cout << endl; // changing row  after printing each row of trunk
        }
    }
    std::cout << endl;
    return 0;
}