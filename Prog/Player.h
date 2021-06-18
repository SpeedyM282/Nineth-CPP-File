/* 
Name: Akhadbek Rizakulov
ID: U2010227
Date: 17.03.2021 
*/
#include<iostream> 
#include<string>
using namespace std;
class Player
{
private:
    int player_id, matches_played, goal_scored;
public:
    static int count;
    int countPlayer;
    int* id, * mp, * gs;
    Player() {}
    void setplayer_id(int player_id)
    {
        this->player_id = player_id;
    }
    int getplayer_id()
    {
        return this->player_id;
    }
    void setmatches_played(int matches_played)
    {
        this->matches_played = matches_played;
    }
    int getmatches_played()
    {
        return this->matches_played;
    }
    void setgoal_scored(int goal_scored)
    {
        this->goal_scored = goal_scored;
    }
    int getgoal_scored()
    {
        return this->goal_scored;
    }
    int getCount() {
        return countPlayer;
    }
    ~Player() {}
    void create_player()
    {
        ++count;
        countPlayer = count;
        cout << "Input Played ID : ";
        cin >> player_id;
        id = new int(player_id);
        cout << "Input Matches that played : ";
        cin >> matches_played;
        mp = new int(matches_played);
        cout << "Input Goals that scored : ";
        cin >> goal_scored;
        gs = new int(goal_scored);
        cout << endl;
        cout << "\n\n \t Created" << endl;
        cout << endl;
    }
    void display_player() 
    {
        cout << "ID : " << *id << endl;
        cout << "Matches played :" << *mp << endl;
        cout << "Goal scored : " << *gs << endl;

    }
    void delete_player()
    {
        delete  id;
        delete  mp;
        delete  gs;
        cout << "\t\tPLayers are deleted!";
    }
};
int Player::count = 0;
