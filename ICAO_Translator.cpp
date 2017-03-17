//***************************************************************************
// CSS 1 Spring 2017                                                  Lab # 5
// Dror Manor
// This program will translate 0-9 and aA-zZ to ICAO phonetic codes
//***************************************************************************
#include <iostream>
#include <string>

using namespace std;

//Prototyping the functions
void displayLine();
void translateICAO(char c);
void translateICAONumbers(int num);
void makeLines();

int main () {
    //declaring and initilizing the variables and the messages to be used in the application
    string title = "\tThe International Civil Aviation Organization (ICAO) Translator\n";
    string message = "Please enter a letter: ";
    string endMessage = "To terminate the program enter \'$\'\n";
    string errorMessage = "No codes is associated with the letter: ";
    string goodByeMessage = "Thank you for using the ICAO Translator";

    char entry = ' ';

    //printing the title.
    displayLine();
    cout << endl<< title << endl;
    displayLine();

    //using do while loop to ensure that the program will run at least once
    // user will enter '$' to terminate
    do {



        //printing instructions and capturing input
        cout << endl << endMessage << endl << endl << message;
        cin >> entry;
        cout << endl;
        //termitation clause
        if (entry == '$') {
            continue;
        }
        // if the entry is alphabetical will use the corrosponding function
        else if ((entry >= 'A' || entry >= 'a') && ( entry >= 'Z' || entry <= 'z')){
            displayLine();
            translateICAO(entry);
            displayLine();
        }
        // will use the numeric function if 0-9
        else if (entry >= '0' && entry <= '9') {
            displayLine();
            // casting to int and substracting 48 to convert back to the number from ASCI
            translateICAONumbers(static_cast<int>(entry)-48);
            displayLine();
        }
        //error checking
        else {
            displayLine();
            cout << errorMessage << "\'" << entry << "\'" << endl;
            displayLine();
        }
    makeLines();

    } while ( entry != '$'); //termination statment
    //printing goodbye message
    displayLine();
    cout << endl << goodByeMessage << endl << endl;
    displayLine();
    return 0;
}

void displayLine() {
    for (int i = 1; i <= 80; i++) {
        cout << '#';
    }
    cout << endl;
}

void translateICAO(char c) {
    //will take an arrgument of a char form a to z either lower case or upper and will output the corrosponding ICAO code
    //will output an error message if entry is invalid
    string translation = "";

    switch (c){
        case 'A':
        case 'a':
            translation = "Alfa";
            break;
        case 'B':
        case 'b':
            translation = "Bravo";
            break;
        case 'C':
        case 'c':
            translation = "Charlie";
            break;
        case 'D':
        case 'd':
            translation = "Delta";
            break;
        case 'E':
        case 'e':
            translation = "Echo";
            break;
        case 'F':
        case 'f':
            translation = "Foxtrot";
            break;
        case 'G':
        case 'g':
            translation = "Golf";
            break;
        case 'H':
        case 'h':
            translation = "Hotel";
            break;
        case 'I':
        case 'i':
            translation = "India";
            break;
        case 'J':
        case 'j':
            translation = "Juliett";
            break;
        case 'K':
        case 'k':
            translation = "Kilo";
            break;
        case 'L':
        case 'l':
            translation = "Lima";
            break;
        case 'm':
        case 'M':
            translation = "Mike";
            break;
        case 'N':
        case 'n':
            translation = "November";
            break;
        case 'O':
        case 'o':
            translation = "Oscar";
            break;
        case 'P':
        case 'p':
            translation = "Papa";
            break;
        case 'Q':
        case 'q':
            translation = "Quebec";
            break;
        case 'R':
        case 'r':
            translation = "Romeo";
            break;
        case 'S':
        case 's':
            translation = "Sierra";
            break;
        case 'T':
        case 't':
            translation = "Tango";
            break;
        case 'U':
        case 'u':
            translation = "Uniform";
            break;
        case 'V':
        case 'v':
            translation = "Victor";
            break;
        case 'W':
        case 'w':
            translation = "Whiskey";
            break;
        case 'X':
        case 'x':
            translation = "X-ray";
            break;
        case 'Y':
        case 'y':
            translation = "Yankee";
            break;
        case 'Z':
        case 'z':
            translation = "Zulu";
            break;
        default:
            translation = "Invalid";
            }
    //second error check
    if ( translation == "Invalid") {
        cout << endl << c << " is not a valid input, please try again." << endl << endl;
    } else {
        cout << endl << "The ICAO codes associated with the letter \'" << c << "\' corresponds to " << translation << endl << endl;
    }

}
void translateICAONumbers(int num) {
    //will take an arrgument of an int form 0-9 and will output the corrosponding ICAO code
    //will output an error message if entry is invalid
    string translation = "";
    switch (num){
        case 0:
            translation = "Zero";
            break;
        case 1:
            translation = "One";
            break;
        case 2:
            translation = "Two";
            break;
        case 3:
            translation = "Three";
            break;
        case 4:
            translation = "Fo-wer";
            break;
        case 5:
            translation = "Five";
            break;
        case 6:
            translation = "Six";
            break;
        case 7:
            translation = "Seven";
            break;
        case 8:
            translation = "Ait";
            break;
        case 9:
            translation = "Niner";
            break;
        default:
            translation = "Invalid";
            }
    //second error check
    if ( translation == "Invalid") {
        cout << endl << num << " is not a valid input, please try again." << endl << endl;
    } else {
        cout << endl << "The ICAO codes associated with the letter \'" << num << "\' corresponds to " << translation << endl << endl;
    }
}

void makeLines() {
//will loop a number of endl to make space between cycles
    for (int i = 0; i < 8; i++) {
        cout << endl;
    }
}
