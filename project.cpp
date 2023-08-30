#include<bits/stdc++.h>
using namespace std;

// Class
class iqaGame
{
public:
   //  Variables
    int point=0;
    int life=2;

    iqaGame()
    {
        cout << " Your Life 3 " <<endl;
        cout << " Your Point 0 " <<endl;

    }


};

// inhertance
class Gamer : public iqaGame
{
    //Data hinding
private:
    string name;
public:
    Gamer()
    {
        name= "Guest";
    }

    // Setter and getter methods
    void setName(string n)
    {
        name=n;
    }
    string getName()
    {
        return name;
    }

// class function
    void displayinfo()
    {
        cout << "Game board" <<endl;
        cout << "Gammer : "<<getName()<<endl;
        cout << " Your Life : " <<life <<endl;
        cout << " Your Point : " <<point <<endl;
    }



// method
    void playGame( int press)
    {

        cout<< "......................" <<endl;

        cout << " Summmation in two number "<<endl;
        cout << " 2 + 5 " <<endl;
        int ans1;
        cin >> ans1;
        if(ans1 == 7)
        {
            point+=10;
            cout << "10+ point added " <<point <<endl;

            //start 2
            cout << " Multify in two number "<<endl;
            cout << " 3 * 8 " <<endl;
            int ans2;
            cin >> ans2;
            if(ans2 == 24)
            {
                point+=10;
                cout << "10+ point added " <<point <<endl;

                //start 3

                cout << " Subtraction in two number "<<endl;
                cout << " 187 - 179 " <<endl;
                int ans3;
                cin >> ans3;
                if(ans3 == 8)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;
//start 4
cout << " Which is the Search Engine? "<<endl;
                cout << "1.Google" <<endl;
                cout << "2.Amazon" <<endl;
                cout << "3.Facebook" <<endl;
                cout << "4.Youtube" <<endl;
                int ans4;
                cin >> ans4;
                if(ans4 == 1)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;

                        // start 5
                cout << " What is the capital of France? "<<endl;
                cout << "1.London" <<endl;
                cout << "2.Paris" <<endl;
                cout << "3.Rome" <<endl;
                cout << "4.Dhaka" <<endl;
                int ans5;
                cin >> ans5;
                if(ans5 == 2)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;

                        // start 6
                        cout << " What does CPU stand for? "<<endl;
                cout << "1.Central Process Unit" <<endl;
                cout << "2.Computer Processing Unit" <<endl;
                cout << "3.Central Processor Unit" <<endl;
                cout << "4.Central Power Unit" <<endl;

                int ans6;
                cin >> ans6;
                if(ans6 == 3)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;

                        // start 7

                        cout << " Add three number "<<endl;
                cout << "2+19+7" <<endl;

                int ans7;
                cin >> ans7;
                if(ans7 == 28)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;

                    // start 8

                        cout << "What is the chemical symbol for gold?"<<endl;
                cout << "1.Au" <<endl;
                cout << "2.Gu" <<endl;
                cout << "3.Cu" <<endl;
                cout << "4.Pu" <<endl;

                int ans8;
                cin >> ans8;
                if(ans8 == 1)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;
                        //start 9

                        cout << " Which programming language is often used for web development ?"<<endl;
                cout << "1.Java" <<endl;
                cout << "2.C++" <<endl;
                cout << "3.Javascript" <<endl;
                cout << "4.Python" <<endl;

                int ans9;
                cin >> ans9;
                if(ans9 == 3)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;
                    //star 10

                cout << " ______ Output ? "<<endl;
                cout << "(2*2)-2+1" <<endl;

                int ans10;
                cin >> ans10;
                if(ans10 == 1)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;
                    cout << "Your Are Win " <<endl;
                       displayinfo();
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }
                    //end 10
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }
                        //end 9
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }
                    // end 8

                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }

                        // end 7
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }

                        //end 6
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }

                        // end 5
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }

//end 4

                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }


                //end 3
            }
            else
            {
                if(life == 0 )
                {
                    cout << " Game Over " <<endl;
                    displayinfo();
                }
                else
                {
                    --life;
                    cout << " -1 Life " <<endl;
                    playGame(1);
                }
            }


            // end 2

        }
        else
        {
            if(life == 0 )
            {
                cout << " Game Over " <<endl;
                displayinfo();
            }
            else
            {
                --life;
                cout << " -1 Life " <<endl;
                playGame(1);
            }
        }
    }
};
class sumGame : public Gamer
{
    int num1,num2,sum;
    void sumPlay(int a,int b)
    {
        cout << "Summation of two Number Output will be 5"<<endl;
            cin >> a;
            cin >> b;
            sum=a+b;
            if(sum == 5)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;
                    cout << "Your Are Win " <<endl;
                       displayinfo();
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }


    }

    //Function Overloading

    void sumPlay(int a,int b, int c)
    {
        cout << "Summation of two Number Output will be 15"<<endl;
            cin >> a;
            cin >> b;
            cin >> c;
            sum=a+b+c;
            if(sum == 15)
                {
                    point+=10;
                    cout << "10+ point added " <<point <<endl;
                    cout << "Your Are Win " <<endl;
                       displayinfo();
                }
                else
                {
                    if(life == 0 )
                    {
                        cout << " Game Over " <<endl;
                        displayinfo();
                    }
                    else
                    {
                        --life;
                        cout << " -1 Life " <<endl;
                        playGame(1);
                    }
                }


    }



};


int main()
{
    //class object
    Gamer gamer;
    int press;
    cout << " Play The Game prss 1 " <<endl;
    cout << " Set your name prss 2 " <<endl;
    cin >> press;
    if(press == 1)
    {

        gamer.playGame(press);
    }
    else if(press == 2)
    {
        string inputGamerName;

        cout << "Enter Your Name :" <<endl;
        cin >> inputGamerName;
        gamer.setName(inputGamerName);

        main();
    }

    else
    {
        cout <<"Invaild" <<endl;
    }
}
