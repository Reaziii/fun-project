#include<bits/stdc++.h>
#define input        freopen("input.txt","r",stdin);
#define output       freopen("output.txt","w",stdout)
using namespace std;


string graph[10+2];
pair<int,int> initial_position;
void take_graph(){
    initial_position=make_pair(7,6);
    graph[0]="############";
    graph[1]="#..A.......#";
    graph[2]="#..........#";
    graph[3]="#...##..D..#";
    graph[4]="#..........#";
    graph[5]="#..........#";
    graph[6]="#..........#";
    graph[7]="#..B..X....#";
    graph[8]="#..........#";
    graph[9]="#..........#";
    graph[10]="#....C.....#";
    graph[11]="############";

//    for(int i=0;i<=11;i++){
//        for(int j=0;j<=11;j++){
//            if(i==0 || j==0 || i==11 || j==11){
//                graph[i][j]='#';
//            }
//            else {
//                char ch;
//                cin>>ch;
//                graph[i][j]=ch;
//
//                if(ch=='X')initial_position=make_pair(i,j);
//            }
//        }
//    }
}

string sub="ABCD";
void goposition(char ch){
    int i=initial_position.first;
    int j = initial_position.second;
    if(ch=='w'){
        if(graph[i-1][j]=='.'){
            graph[i][j]='.';
            graph[i-1][j]='X';
            initial_position=make_pair(i-1,j);
        }
        else if(graph[i-1][j]==sub[0]){
            graph[i][j]='.';
            graph[i-1][j]='X';
            sub.erase(sub.begin());
            initial_position=make_pair(i-1,j);

        }
        else{
            cout<<"You can not move there"<<endl;
        }


    }
    if(ch=='a'){
        if(graph[i][j-1]=='.'){
            graph[i][j]='.';
            graph[i][j-1]='X';
            initial_position=make_pair(i,j-1);
        }
        else if(graph[i][j-1]==sub[0]){
            graph[i][j]='.';
            graph[i][j-1]='X';
            sub.erase(sub.begin());
            initial_position=make_pair(i,j-1);

        }
        else{
            cout<<"You can not move there"<<endl;
        }


    }if(ch=='s'){
        if(graph[i+1][j]=='.'){
            graph[i][j]='.';
            graph[i+1][j]='X';
            initial_position=make_pair(i+1,j);
        }
        else if(graph[i+1][j]==sub[0]){
            graph[i][j]='.';
            graph[i+1][j]='X';
            sub.erase(sub.begin());
            initial_position=make_pair(i+1,j);

        }
        else{
            cout<<"You can not move there"<<endl;
        }

    }if(ch=='d'){
        if(graph[i][j+1]=='.'){
            graph[i][j]='.';
            graph[i][j+1]='X';
            initial_position=make_pair(i,j+1);
        }
        else if(graph[i][j+1]==sub[0]){
            graph[i][j]='.';
            graph[i][j+1]='X';
            sub.erase(sub.begin());
            initial_position=make_pair(i,j+1);

        }
        else{
            cout<<"You can not move there"<<endl;
        }


    }

}


void print_grid(){
    for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++)cout<<graph[i][j];
        cout<<endl;
    }
}

int main(){
//    input;

    printf("\t\tFood geathering\n");
    printf("\t   Geather food for winter :D\n");
    printf("#################################################");
    printf("\n\n\tw : up\n\ta : right\n\ts : down\n\td : left\n\n");
    printf("#################################################\n");
    printf("\n\n\t   Press Enter to continue\n\n\n");
    getchar();
    system("clear");
    take_graph();
    print_grid();

    cout<<endl;
    int  n=0;
    while(1){
        char ch;
        cin>>ch;
        if(isupper(ch))ch=tolower(ch);
        if(ch=='f') break;
        system("clear");
        goposition(ch);
        print_grid();
        n++;
        if(sub.size()==0){
            break;
        }

    }

    cout<<"You did it "<<n<<" moves"<<endl;
}
