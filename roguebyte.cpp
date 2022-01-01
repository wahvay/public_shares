// roguebyte.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Title print
    std::cout << "\n\n---------------\n";
    std::cout << "---ROGUEBYTE---\n";
    std::cout << "---------------\n\n";
    //First choice
    std::cout << "Wise Old Man:\n";
    std::cout << "      An adventurer like you comes along often, but usually fails to survive to see the stone of Machrial and make his wish upon it.\n";
    std::cout << "Tell me what kind of adventurer are you?\n\n";
    std::cout << "I think I'm...:\n";
    std::cout << "1) Smart\n";
    std::cout << "2) Tough\n";
    std::cout << "3) Brave\n\n";
    //primary variable trait
    int player_trait;
    int path_var;
    int damage = 100;
    bool translate = false;
    std::string trait;
    std::cin >> player_trait;
    //output first choice
    if (player_trait == 1) {
        std::cout << "\nYou ask the wise old man for directions to the nearest town to resupply\n";
        path_var = 1;
        trait = "smart";
    }
    else if (player_trait == 2) {
        std::cout << "\nYou scoff at the old man, -can't he see how ripped you are??\n";
        path_var = 3;
        trait = "tough";
    }
    else if (player_trait == 3) {
        std::cout << "\nPatting your sword you display your willingness to pursue your goal regardless.\n";
        path_var = 3;
        trait = "brave";
    }
    else {
        std::cout << "\nThe wise man disliked your answer and slayed you where you stood\n";
        path_var = 100;
    }

    //Smart path
    int smart_choice1;
    while (path_var < 3) {
        std::cout << "\nFollowing along the path you come across a house, a wirey lady outside seems to ask something of you but you can't speak the language\n";
        std::cout << "1) Assume her a threat and attack.\n";
        std::cout << "2) Ask her what she said.\n\n";
        std::cin >> smart_choice1;

        if (smart_choice1 == 1) {
            std::cout << "\nShe quickly raises her hand, disapearing. You notice your left arm is now missing, but also a basic transcript to your language is left on the ground.\n\n";
            damage -= 25;
            translate = true;
            path_var = 3;
        }
        else if (smart_choice1 == 2) {
            std::cout << "\nWith a smile she hands you a loaf of bread and points towards a new_path, you thank her and continue on\n\n";
            damage += 20;
            path_var = 3;
        }

    }
    //1st main path choice 
    int main_path_choice;
    while (path_var < 5) {
        std::cout << "You come across a forked path. In the center is a decrepit sign with weird symbols.\n";
        if (translate == true) {
            std::cout << "You look at the sheet you found and see a translation, you read the locations. Which path do you choose?\n";
            std::cout << "1) Machrial Meadows\n";
            std::cout << "2) Rose Mountain\n";
        }
        else {
            std::cout << "Which path do you choose?\n";
            std::cout << "1) |@|#g$# |@|@s%^d&*\n";
            std::cout << "2) u$^2%fji $JKi56d\n";
        }
        std::cin >> main_path_choice;
        if (main_path_choice == 1) {
            path_var = 6;
        }
        else if (main_path_choice == 2) {
            path_var = 7;
        }
        else {
            path_var = 100;
            std::cout << "\n\nYou wait at the sign and slowly die of exposure...\n\n";
        }
    }
    //choice if statement 7
    int mountain_path_choice;
    if (path_var == 7) {
        std::cout << "You continue on the path, but it keeps getting steeper. You wonder if you should take a break or treach along thru the night.\n";
        std::cout << "Being a " << trait << " person, you...?\n";
        std::cout << "1) Rest the night.\n";
        std::cout << "2) Move along!\n";
        std::cin >> mountain_path_choice;
        //calc on conditional choice
        if (player_trait == 1 && mountain_path_choice == 1) {
            std::cout << "\nYou decide to camp out and search for food, finding berries to soothe the hunger pains.\n\n";
            path_var = 9;
        }
        else if (player_trait == 1 && mountain_path_choice == 2) {
            std::cout << "\nWalking in the dark you slip and fall off the cliff\n\n";
            path_var = 100;
        }
        else if (player_trait == 2 && mountain_path_choice == 1) {
            std::cout << "\nYou settle into camp but hunger sets in \n\n";
            damage -= 25;
            path_var = 9;
        }
        else if (player_trait == 2 && mountain_path_choice == 2) {
            std::cout << "\nYou keep going, stumbling off a cliff in the dark you manage to hang on by a branch. You pull yourself up but it takes a lot out of you.\n\n";
            damage -= 50;
            path_var = 9;
        }
        else if (player_trait == 3 && mountain_path_choice == 1) {
            std::cout << "\nYou settle into camp but hunger sets in \n\n";
            damage -= 25;
            path_var = 9;
        }
        else if (player_trait == 3 && mountain_path_choice == 2) {
            std::cout << "\nYou use a stick to guide you up, making your way to the other side\n\n";
            path_var = 9;
        }
        else {
            std::cout << "You wait and slowly die of exposure...\n\n";
            path_var = 100;
        }
    }
    //Path 9 to path 6
    if (path_var == 9) {
        std::cout << "At the top of the summit you see the stone in the distance across a meadow, you must go back from the path you came. Thirst is taking its toll.\n\n";
        damage -= 50;
        path_var = 6;
    }
    // choice if statement 6
    int meadow_path_choice;
    if (path_var == 6) {
        std::cout << "You continue on the path until a red meadow comes to view, and a shrill alarms you. A man dressed in rags barrels toward you, knife in hand.\n";
        std::cout << "Being a " << trait << " person, you...?\n";
        std::cout << "1) Run!\n";
        std::cout << "2) Fight!\n";
        std::cin >> meadow_path_choice;
        //calc on conditional choice
        if (player_trait == 1 && meadow_path_choice == 1) {
            std::cout << "\nYou escape succesfully\n\n";
            path_var = 8;
        }
        else if (player_trait == 1 && meadow_path_choice == 2) {
            std::cout << "\nYou are stabbed in the side, and reel in pain, the man succombs to old wounds on top of you.\n\n";
            damage -= 50;
            path_var = 8;
        }
        else if (player_trait == 2 && meadow_path_choice == 1) {
            std::cout << "\nYou trip over a mound of dirt, your pride drains from you. The man stops to laugh and mock you and you succomb to the fatal wound to your ego.\n\n";
            path_var = 100;
        }
        else if (player_trait == 2 && meadow_path_choice == 2) {
            std::cout << "\nYou do some fancy Judo crap, the man becomes fearful and runs away. You then step in a bear trap and lose your foot.\n\n";
            damage -= 50;
            path_var = 8;
        }
        else if (player_trait == 3 && meadow_path_choice == 1) {
            std::cout << "\nYou run away, but at a slow pace to make it look like you're in a brisk walk. He catches up and slashes your body, then flees.\n\n";
            damage -= 25;
            path_var = 8;
        }
        else if (player_trait == 3 && meadow_path_choice == 2) {
            std::cout << "\nStanding your ground, the man runs to you and attacks. You dodge and trip him. Falling on his blade he dies.\n\n";
            path_var = 8;
        }
        else {
            std::cout << "Panicked you stand still and take the full force of the blade, killing you instantly\n\n";
            path_var = 100;
        }
    }


    //path from 8
    int path8_choice;
    if (path_var == 8 && damage > 0) {
        if (translate == true) {
            std::cout << "You stumble to a carved stone, it reads 'Machrial Stone: Place your disembodied hand'. What do you do?:\n";
            std::cout << "1) Walk away\n";
            std::cout << "2) Cut your hand off and place it";
        }
        else {
            std::cout << "You stumble to a carved stone, it reads '@#%&GAUJ$*934#A'. What do you do?:\n";
            std::cout << "1) Walk away\n";
            std::cout << "2) $%&FGU$YQ4YA\n";
        }
        std::cin >> path8_choice;
        if (path8_choice == 1) {
            std::cout << "Unsatisfied, and broken you return home with " << damage << " health\n\n";
        }
        else if (path8_choice == 2 && player_trait != 1) {
            std::cout << "You feel compelled to cut your hand off and place it at the head of the plaque.\n\n";
            damage -= 25;
            path_var = 10;
        }
        else if (path8_choice == 2 && player_trait == 1) {
            std::cout << "You cut your hand off and place it at the head of the plaque.\n\n";
            damage -= 25;
            path_var = 10;
        }
        else {
            std::cout << "You wait and slowly die of exposure...\n\n";
            path_var = 100;
        }
    }
    
    
    if (path_var == 10 && damage > 0) {
        std::cout << "you make your wish.\n";
        std::cout << "You made it adventurer, your wish was granted and you made it home with " << damage << " health.\n\n";
    }

    else if (path_var == 10 && damage <= 0) {
        path_var = 100;
    }
    
    if (path_var == 100) {
        std::cout << "\nYou've run out of health...\n\n";
        std::cout << "The adventure was too tough for a " << trait << " person like you.\n\n";
    }








}