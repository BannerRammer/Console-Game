#include <iostream>
#include <string>


// Hey guys, this is my first ever console game program made in C++.
/* Because this is a console game the game only works on a terminal or compiler */
/* If you want to see game play of this code, then go this link (Link). Copy and paste the link in your google omni box */
// Made by Lorenzo Tablante
// Follow me on YouTube (BlastCorp), Itch.io (BlastCorp), Scratch (ltabalnte08) and on GitHub (BlastCorp)

using namespace std;

int main () {
    int Choice;
    int GameOrTutorial;
    int ContorSkip;
    int ChoiceGame01;
    int ChoiceGame02;
    int RestartOrGoBack;
    int MainMenu03;
    int GameOrTutorial02;
    int ContOrSkip02;
    int ChoiceGame03;
    int Choice02;
    int ChoiceGame04;
    int ChoiceGame05;
    int Attack001;
    int Move001;
    int RaiseTheFlag;
    int DiaryOrCombat;
    
    // Main Menu 1
    std::cout<<"WWII\n" << endl;
    std::cout<<"1. Play Game" << endl;
    std::cout<<"2. Credits" << endl;
    std::cout<<"3. Quit" << endl;
    scanf("%d", &Choice);
    
    // Credits
    if (Choice == 2) {
        std::cout<<"Credits:\n" << endl;
        // Programming Section
        std::cout<<"Programmed by Lorenzo Tablante" << endl;
        std::cout<<"Made in C++\n" << endl;
        // Programs Section
        std::cout<<"Programs Used:" << endl;
        std::cout<<"Terminal" << endl;
        std::cout<<"Xcode\n" << endl;
        // Made By
        std::cout<<"Created by Lorenzo Tablante" << endl;
        std::cout<<"Me on YouTube (BlastCorp), Itch.io (BlastCorp) and Scratch (ltablante08)" << endl;
        std::cout<<"Copyright (c) Lorenzo Tablante" << endl;
        std::cout<<"All Rights Reserved\n" << endl;
        // Go back Section
        std::cout<<"Please Press [0] to Go Back to Main Menu" << endl;
        scanf("%d", &Choice);
    }
    // Main Menu 2
    if (Choice == 0) {
        std::cout<<"WWII\n" << endl;
        std::cout<<"1. Play Game" << endl;
        std::cout<<"2. Credits" << endl;
        std::cout<<"3. Quit" << endl;
        scanf("%d", &Choice);
    }
    // Quit
    if (Choice == 3) {
        std::cout<<"Quit" << endl;
        return 0;
    }
    // Choice
    if (Choice == 1) {
        std::cout<<"Welcome to WWII (the console game)\n" << endl;
        std::cout<<"Type in 1 to figure out how to play or press 2 to just play the game" << endl;
        scanf("%d", &GameOrTutorial);
    }
    // How to Play
    if (GameOrTutorial == 1) {
        // Attack Section
        std::cout<<"How to Attack an Enemy\n" << endl;
        std::cout<<"When you attack, your given a little health bar menu which tells how much" << endl;
        std::cout<<"health you and your enemy is. How much armour is there. Your Health and how much" << endl;
        std::cout<<"ammo you have left.\n" << endl;
        std::cout<<"To shoot a rifle press 2." <<endl;
        std::cout<<"To shoot a submachine press 7" << endl;
        std::cout<<"To fire a handgun press 3." << endl;
        std::cout<<"To bayonnet attack your enemy press on 4." << endl;
        std::cout<<"To use a Knife press 5.\n" << endl;
        std::cout<<"Press [1] to continue on how to play the game." << endl;
        std::cout<<"Press [0] to skip the tutorial and go straight into the game\n" << endl;
        scanf("%d", &ContorSkip);
    }
    // Descion Section
    if (ContorSkip == 1) {
        std::cout<<"Your Descions are based of what numbers between 1 - 10 you type in.\n" << endl;
        // Example
        std::cout<<"For Example:" << endl;
        std::cout<<"You kill an officer, what do you wish to do?\n" << endl;
        std::cout<<"1. Hide the body" << endl;
        std::cout<<"2. Bury the body" << endl;
        std::cout<<"3. Show the officer’s wife the body.\n" << endl;
        // More
        std::cout<<"The story will change based of what number you choose between 1 - 10." << endl;
        std::cout<<"All numbers that make a choice is a must to put in.\n" << endl;
        std::cout<<"Press [0] to play the game" << endl;
        scanf("%d", &ContorSkip);
    }
    // Game
    if (ContorSkip == 0) {
        std::cout<<"Basic Training\n" << endl;
        std::cout<<"After coming in your division's training facility you went to the Sergeant" << endl;
        std::cout<<"1. Ask him what to do" << endl;
        std::cout<<"2. Kill Him\n" << endl;
        scanf("%d", &ChoiceGame01);
    }
    if (ChoiceGame01 == 1) {
        std::cout<<"The Sergeant asks you to get the bugler to play the bugle" << endl;
        std::cout<<"You tell the bugler to play the bugle.\n" << endl;
        std::cout<<"What do you wish to do?" << endl;
        std::cout<<"1. Get Ready for Basic Training" << endl;
        std::cout<<"2. Screw this, I'm going" << endl;
        scanf("%d", &ChoiceGame02);
    }
    if (ChoiceGame01 == 2) {
        std::cout<<"You kill the officer and now you are sentenced to death instantly for murder." << endl;
        std::cout<<"7. Restart the whole entire game from the main menu" << endl;
        std::cout<<"8. Go back to start of Basic Traning" << endl;
        scanf("%d", &ChoiceGame02);
    }
    if (ChoiceGame02 == 1) {
      std::cout<<"You Get Ready for basic training\n" << endl;
      std::cout<<"Sergeant:" << endl;
      std::cout<<"3, 2, 1, charge!\n" << endl;
      std::cout<<"1. Do Basic Training" << endl;
      std::cout<<"2. Kill The Officer" << endl;
      scanf("%d", &ChoiceGame05);
    }
    
    // Choice 2
    if (Choice == 8) {
        std::cout<<"Basic Training\n" << endl;
        std::cout<<"After coming in your division's training facility you went to the Sergeant" << endl;
        std::cout<<"1. Ask him what to do" << endl;
        std::cout<<"2. Kill Him\n" << endl;
        scanf("%d", &ChoiceGame01);
    }
    // Main Menu 3
    if (Choice == 7) {
        std::cout<<"WWII\n" << endl;
        std::cout<<"1. Play Game" << endl;
        std::cout<<"2. Credits" << endl;
        std::cout<<"3. Quit" << endl;
        scanf("%d", &MainMenu03);
    }
    // Credits 2
    if (MainMenu03 == 2) {
        std::cout<<"Credits:\n" << endl;
        // Programming Section
        std::cout<<"Programmed by Lorenzo Tablante" << endl;
        std::cout<<"Made in C++\n" << endl;
        // Programs Section
        std::cout<<"Programs Used:" << endl;
        std::cout<<"Terminal" << endl;
        std::cout<<"Xcode\n" << endl;
        // Made By
        std::cout<<"Created by Lorenzo Tablante" << endl;
        std::cout<<"Me on YouTube (BlastCorp), Itch.io (BlastCorp) and Scratch (ltablante08)" << endl;
        std::cout<<"Copyright (c) Lorenzo Tablante" << endl;
        std::cout<<"All Rights Reserved\n" << endl;
        // Go back Section
        std::cout<<"Please Press [0] to Go Back to Main Menu" << endl;
        scanf("%d", &MainMenu03);
    }
    if (MainMenu03 == 0) {
        std::cout<<"WWII\n" << endl;
        std::cout<<"1. Play Game" << endl;
        std::cout<<"2. Credits" << endl;
        std::cout<<"3. Quit" << endl;
        scanf("%d", &MainMenu03);
    }
    if (MainMenu03 == 1) {
        std::cout<<"Welcome to WWII (the console game)\n" << endl;
        std::cout<<"Type in 1 to figure out how to play or press 2 to just play the game" << endl;
        scanf("%d", &GameOrTutorial02);
    }
    if (GameOrTutorial02 == 1) {
           // Attack Section 02
        std::cout<<"How to Attack an Enemy\n" << endl;
        std::cout<<"When you attack, your given a little health bar menu which tells how much" << endl;
        std::cout<<"health you and your enemy is. How much armour is there. Your Health and how much" << endl;
        std::cout<<"ammo you have left.\n" << endl;
        std::cout<<"To shoot a rifle press 2." <<endl;
        std::cout<<"To shoot a submachine gun press 7" << endl;
        std::cout<<"To fire a handgun press 3." << endl;
        std::cout<<"To bayonnet attack your enemy press on 4." << endl;
        std::cout<<"To use a Knife press 5.\n" << endl;
        std::cout<<"Press [1] to continue on how to play the game." << endl;
        std::cout<<"Press [0] to skip the tutorial and go straight into the game\n" << endl;
        scanf("%d", &ContOrSkip02);
    }
    if (ContOrSkip02 == 1) {
      // Descion Section 02
      std::cout<<"Your Descions are based of what numbers between 1 - 10 you type in.\n" << endl;
        // Example
        std::cout<<"For Example:" << endl;
        std::cout<<"You kill an officer, what do you wish to do?\n" << endl;
        std::cout<<"1. Hide the body" << endl;
        std::cout<<"2. Bury the body" << endl;
        std::cout<<"3. Show the officer’s wife the body.\n" << endl;
        // More
        std::cout<<"The story will change based of what number you choose between 1 - 10." << endl;
        std::cout<<"All numbers that make a choice is a must to put in.\n" << endl;
        std::cout<<"Press [0] to play the game" << endl;
        scanf("%d", &GameOrTutorial02);
    }
    if (GameOrTutorial02 == 0) {
        std::cout<<"Basic Training\n" << endl;
        std::cout<<"After coming in your division's training facility you went to the Sergeant" << endl;
        std::cout<<"1. Ask him what to do" << endl;
        std::cout<<"2. Kill Him\n" << endl;
        scanf("%d", &ChoiceGame03);
    }
    if (ChoiceGame03 == 2) {
        std::cout<<"You kill the officer and now you are sentenced to death instantly for murder." << endl;
        std::cout<<"7. Restart the whole entire game from the main menu" << endl;
        std::cout<<"8. Go back to start of Basic Traning" << endl;
        scanf("%d", &Choice02);
    }
    if (ChoiceGame03 == 1) {
       std::cout<<"The Sergeant asks you to get the bugler to play the bugle" << endl;
        std::cout<<"You tell the bugler to play the bugle.\n" << endl;
        std::cout<<"What do you wish to do?" << endl;
        std::cout<<"1. Get Ready for Basic Training" << endl;
        std::cout<<"2. Screw this, I'm going" << endl;
        scanf("%d", &ChoiceGame04);
    }
    if (ChoiceGame04 == 1) {
        std::cout<<"You Line up in a straight line for bayonnet attack" << endl;
        std::cout<<"It is now your turn to use bayonnet attack\n" << endl;
        std::cout<<"Type in 4 to use your Bayonnet Attack" << endl;
        scanf("%d", &Attack001);
    }
    if (Attack001 == 4) {
        std::cout<<"You used your Bayonnet to attack" << endl;
    std::cout<<"Now the Sergeants orders you to move forward to the next german bean bag.\n" << endl;
        std::cout<<"Type in 1" << endl;
    scanf("%d", &Move001);
    }
    if (Move001 == 1) {
        std::cout<<"You moved to the bean bag. Now shoot it with your rifle./n" << endl;
        scanf("%d", &Attack001);
    }
    if (Attack001 == 2) {
        std::cout<<"You quicknoscoped the bean bag. Now move to the final bean bag to silent kill\n" << endl;
        scanf("%d", &Attack001);
    }
    if (Attack001 == 5) {
        std::cout<<"You made it through basic training now you have to raise the division's flag.\n" << endl;
        std::cout<<"Type 1 to raise the flag" << endl;
        scanf("%d", &RaiseTheFlag);
    }
    if (RaiseTheFlag == 1) {
        std::cout<<"Raise the Flag" << endl;
        std::cout<<"You are now being transported to the Marne for combat" << endl;
        std::cout<<"To skip to battle press 1 or to read the diary press 2" << endl;
        scanf("%d", &DiaryOrCombat);
    }
    if (DiaryOrCombat == 2) {
        std::cout<<"Dear Maurice:" << endl;
        std::cout<<"We are on our way for our first battle at the Marne in Paris, please send me your picture to me." << endl;
        std::cout<<"L.T" << endl;
    }
    return 0;
}
// Please do not copy or claim that this code or respoistory is yours because this act is prohibited.
// Copyright (c) Lorenzo Tablante
// All rights reserved
// Lorenzo Tablante 18/03/18
// Thanks for viewing.
