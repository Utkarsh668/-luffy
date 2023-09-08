#include<iostream>
using namespace std;
class player
{
public:
    char name[10];
    int age;
    int type;
};
class batsman : public player
{
public:
    int runs;
    int sixes;
    int fours;
    int century;
    int half_century;
    int overs;
    int innings;
    void batsman1()
    {
        cout<<"Enter the name of player:- ";
        cin>>name;
        cout<<"Enter the age of the player:- ";
        cin>>age;
        cout<<"Enter total runs of the player:- ";
        cin>>runs;
        cout<<"Enter the number of sixes of the player in his career:- ";
        cin>>sixes;
        cout<<"Enter the number of fours of the player in his career:- ";
        cin>>fours;
        cout<<"Enter the number of centuries of the player in his career:- ";
        cin>>century;
        cout<<"Enter the number of half centuries of the player in his career:- ";
        cin>>half_century;
        cout<<"Enter the total number of overs played in his career:- ";
        cin>>overs;
        cout<<"Enter the number of innings the player has played in his career:- ";
        cin>>innings;
    }
    float strike(int n1,int n2)
    {
        float strike_rate=(float)n1/(n2*6);
        return strike_rate;
    }
    float avg(int n1,int n2)
    {
        float avg_runs=(float)n1/n2;
        return avg_runs;
    }

};
class bowler : public player
{
public:
    int wickets;
    int overs;
    int runs;
    int hat_tricks;
    int innings;
    void bowler1()
    {
        cout<<"Enter the name of player:- ";
        cin>>name;
        cout<<"Enter the age of the player:- ";
        cin>>age;
        cout<<"Enter the number of wickets of the player in his career:- ";
        cin>>wickets;
        cout<<"Enter the number of overs of the player in his career:- ";
        cin>>overs;
        cout<<"Enter the number of runs conceded by the player in his career:- ";
        cin>>runs;
        cout<<"Enter the number of hat tricks taken by the player in his career:- ";
        cin>>hat_tricks;
        cout<<"Enter the number of innings the player has played in his career:- ";
        cin>>innings;
    }
    float economy(int n1,int n2)
    {
        float avg_economy=(float)n1/n2;
        return avg_economy;
    }
    float wicket(int n1,int n2)
    {
        float avg_wicket=(float)n1/n2;
        return avg_wicket;
    }
};
int main()
{

    player obj;
    bool flag=1;
    while(flag)
    {
        cout<<"Enter if the player is\n1. Batsman\n2. Bowler\n:- ";
        cin>>obj.type;
        int ch;
        ch=obj.type;
        switch(ch)
        {
        case 1:
                {
                batsman obj1;
                obj1.batsman1();
                bool flag1=1;
                while(flag1)
                {
                    int ch1;
                    cout<<"Enter\n1 To calculate strike rate of the player's career\n2 To calculate average runs of the player's career\n3 To print all of the data:- ";
                    cin>>ch1;
                    switch(ch1)
                    {
                    case 1:
                        {
                            cout<<"\nAverage strike rate of the player's career is:- "<<obj1.strike(obj1.runs,obj1.overs);
                            break;
                        }
                    case 2:
                        {
                            cout<<"\nAverage runs of the player's career is:- "<<obj1.avg(obj1.runs,obj1.innings);
                            break;
                        }
                    case 3:
                        {
                            cout<<"\nName\tAge\tInnings\tSixes\tFours\t50's \t100's  "<<endl;
                            cout<<obj1.name<<"\t"<<obj1.age<<"\t"<<obj1.innings<<"\t"<<obj1.sixes<<"\t"<<obj1.fours<<"\t"<<obj1.half_century<<"\t"<<obj1.century;
                            break;
                        }
                    default:
                        {
                            cout<<"\nEnter a valid input";
                            break;
                        }
                    }
                    cout<<"\nEnter 1 to continue and 0 to end:- ";
                    cin>>flag1;
                }
                break;
            }
        case 2:
            {
                bowler obj1;
                obj1.bowler1();
                int flag1=1;
                while(flag)
                {
                    int ch2;
                    cout<<"\nEnter\n1 To calculate average economy of the player's career\n2 To calculate average wickets of the player's career\n3 To print all of the data:- ";
                    cin>>ch2;
                    switch(ch2)
                    {
                    case 1:
                        {
                            cout<<"\nAverage economy of the player's career is:- "<<obj1.economy(obj1.runs,obj1.overs);
                            break;
                        }

                    case 2:
                        {
                            cout<<"\nAverage wickets of the player's career is:- "<<obj1.wicket(obj1.wickets,obj1.innings);
                            break;
                        }
                    case 3:
                        {
                            cout<<"\nName\tAge\tInnings\tWickets\tHat_tricks  "<<endl;
                            cout<<obj1.name<<"\t"<<obj1.age<<"\t"<<obj1.innings<<"\t"<<obj1.wickets<<"\t"<<obj1.hat_tricks;
                            break;
                        }
                    default:
                        {
                            cout<<"\nEnter a valid input";
                            break;
                        }

                        break;
                    }
                    cout<<"\nEnter 1 to continue and 0 to end:- ";
                    cin>>flag1;
                }
            }
        default:
                    {
                        cout<<"\nEnter a valid input";
                        break;
                    }
        }
        cout<<"\nEnter 1 to enter more enteries and 0 to to end the program:- ";
        cin>>flag;
        }
        return 0;
}

