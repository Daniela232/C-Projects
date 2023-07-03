/*
	Name: Soccer Player
	Copyright: 2023
	Author: Daniela Valerio
	Date: 04/23/2023 
	Description: Get information about a soccer team,
	calculate the teams score, and name the player with highest score.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Data definition
struct SoccerData{
    char namePlayer[100];
    int numPlayer;
    int numScores;
};

void getScore(SoccerData[], int);
void printResults(const SoccerData[], int);
int calcTeamScore(const SoccerData[], int);
int getHighestScore(const SoccerData[], int);
void printSoccerTeam(const SoccerData[], int);

//Main test driver
int main(int argc, char **argv)
{
    
    const int NUM_PLAYERS = 12;
    SoccerData soccerInfo[NUM_PLAYERS];
    getScore(soccerInfo, NUM_PLAYERS);
    printSoccerTeam(soccerInfo, NUM_PLAYERS);
    printResults(soccerInfo, NUM_PLAYERS);
    getHighestScore(soccerInfo, NUM_PLAYERS);
    return 0;
   

}

void getScore(SoccerData data[], int size)
{
    cout << "Enter the following information about Soccer Player:" << endl;
    for(int i = 0; i < size; i++){
        cout << "Player " << i + 1 << " name: ";
        cin.getline(data[i].namePlayer, sizeof(data[i].namePlayer));
        cout << "Player " << i + 1 << " jersey number: ";
        cin >> data[i].numPlayer;
        if (data[i].numPlayer < 0)
        {
            cout << "Invalid input, please enter a number is not negative. " << endl;
            cout << "Player " << i + 1 << " jersey number: ";
            cin >> data[i].numPlayer;
            cout << "Player " << i + 1 << " total points scored: ";
            cin >> data[i].numScores;
            cout << endl;
        }
        else
        {
            cout << "Player " << i + 1 << " total points scored: ";
            cin >> data[i].numScores;
            cout << endl;
        }
    }

}

//calculates the total points scored by the whole team
int calcTeamScore(const SoccerData data[], int size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
    {
        total += data[i].numScores;
    }
    return total;

}

//gets player with the highest score
int getHighestScore(const SoccerData data[], int size)
{
    int name;
    int max = data[0].numScores;
    for(int i = 1; i < size; i++)
    {
        if(data[i].numScores > max)
        {
            max = data[i].numScores;
            name = i + 1;

        }
}
    return max;

}

//prints table with the information of the soccer team
void printSoccerTeam(const SoccerData info[], int size)
{
    cout << "SOCCER TEAM INFORMATION" << endl;
    cout << setw(18) << right  << "PLAYER NAME" 
          << setw(22) << right << "PLAYER JERSEY NUMBER"
          << setw(16) << right << "PLAYER SCORE" << "\n\t";
          
    cout << setw(50) << setfill('-') << "\n" << setfill(' ');
    
    for (int index = 0; index < size; index++)
    {
        cout << "\t";
        cout << setw(17) << left  << info[index].namePlayer 
              << setw(13) << right << info[index].numPlayer
              << setw(12) << right << info[index].numScores << " pts\n" ;
    }
    cout << endl;
}

//Print results of total points scored and the player with highest score/
void printResults(const SoccerData info[], int size)
{
    cout << "TOTAL POINTS SCORED BY THE TEAM: " << calcTeamScore(info, size) << endl;
    cout << "INFORMATION OF THE PLAYER WITH HIGHEST SCORE: " << getHighestScore(info, size);
}