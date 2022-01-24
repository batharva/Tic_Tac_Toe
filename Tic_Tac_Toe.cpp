#include<iostream>
using namespace std;
//The Elements of Board.
char X= char(88),O = char(79),board[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
//The output strings.
string p1_win=" Wins the Game!!!",p2_win=" Wins the Game!!!";

//To Draw The Board.
void draw_board(void){
    cout<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<"\t \t"<<"1  | 2 | 3"<<endl;
    cout<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<"\t \t"<<"4  | 5 | 6"<<endl;
    cout<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<"\t \t"<<"7  | 8 | 9"<<endl;
    
}
//Main Function.
int main(){
    string p1_name,p2_name;

    cout<<"Wlecome to Tic Tac Toe!!!\n\nPlayer 1 is X and Player 2 is O."<<endl;
    cout<<"\n";
    cout<<"Enter You Name Player 1:";
    cin>>p1_name;
    cout<<"\nEnter You Name Player 2:";
    cin>>p2_name;
    cout<<endl;
    
    int position=0,chance =0,player_1,player_2;
    //Player Switch.
    for (int chance = 0; chance < 9; chance++)
    {
        if (chance%2==0)
        {
            draw_board();
            cout<<"\nChance of Player 1.\nEnter no. between 1-9: "<<endl;
            cin>>player_1;
            position = player_1 -1;
            board[position]=X;
        }
        else
        {
            draw_board();
            cout<<"\nChance of Player 2.\nEnter no. between 1-9: "<<endl;
            cin>>player_2;
            position = player_2 -1 ;
            board[position]=O;
        }
        //Check for player 1.
        if(board[0]==board[1] && board[1]==board[2] && board[1]==X) //Row1
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        else if (board[3]==board[4] && board[4]==board[5] && board[4]==X) //Row2
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        else if (board[6]==board[7] && board[7]==board[8] && board[7]==X) //Row3
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        else if (board[0]==board[4] && board[4]==board[8] && board[4]==X) //Digonal 1
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        else if (board[2]==board[4] && board[4]==board[6] && board[4]==X) //Digonal 2
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        else if (board[0]==board[3] && board[3]==board[6] && board[3]==X) //Coloumn 1
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        else if (board[1]==board[4] && board[4]==board[7] && board[4]==X) //Coloumn 2
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        else if (board[2]==board[5] && board[5]==board[8] && board[5]==X) //Coloumn 3
        {
            draw_board();
            cout<<p1_name<<p1_win<<endl;
            break;
        }
        
        //Check for Player 2.
        else if(board[0]==board[1] && board[1]==board[2] && board[1]==O) //Row 1
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
        else if (board[3]==board[4] && board[4]==board[5] && board[4]==O) //Row 2
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
        else if (board[6]==board[7] && board[7]==board[8] && board[7]==O) //Row 3
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
        else if (board[0]==board[4] && board[4]==board[8] && board[4]==O) //Digonal 1
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
        else if (board[2]==board[4] && board[4]==board[6] && board[4]==O) //Digonal 2
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
        else if (board[0]==board[3] && board[3]==board[6] && board[3]==X) //Coloumn 1
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
        else if (board[1]==board[4] && board[4]==board[7] && board[4]==X) //Coloumn 2
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
        else if (board[2]==board[5] && board[5]==board[8] && board[5]==X) //Coloumn 3
        {
            draw_board();
            cout<<p2_name<<p2_win<<endl;
            break;
        }
    }
    // draw_board();
    // cout<<"Game Tie!!!\nPlease Try Again."<<endl;
    return 0;
}













// while(1)
//             {
//                 if(board[0]==board[1]==board[2]==X | board[3]==board[4]==board[5]==X | board[6]==board[7]==board[8]==X | board[0]==board[3]==board[6]==X | board[1]==board[4]==board[7]==X | board[2]==board[5]==board[8]==X )
//                 {
//                     out++;
//                     break;
//                 }
//                 else if (board[0]==board[1]==board[2]==O | board[3]==board[4]==board[5]==O | board[6]==board[7]==board[8]==O | board[0]==board[3]==board[6]==O | board[1]==board[4]==board[7]==O | board[2]==board[5]==board[8]==O)
//                 {
//                     out=out+2;
//                     break;
//                 }
//                 else if (board[0]==board[4]==board[8]==X | board[2]==board[4]==board[6]==X)
//                 {
//                     out++;
//                     break;
//                 }
//                 else if (board[0]==board[4]==board[8]==O | board[2]==board[4]==board[6]==O)
//                 {
//                     out=out +2;
//                     break;
//                 }else
//                 {
//                     break;
//                 }
                
//             }
//             if (out==2)
//             {
//                 cout<<p2_win<<endl;
//                 break;
//             }