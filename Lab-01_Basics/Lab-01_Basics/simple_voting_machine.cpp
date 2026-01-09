// Topic: C++ Basics
// Task: Simple Voting Program using functions
// Author: Abu Bakar Baig

#include <iostream>
using namespace std;

void displayWinner(int votesA, int votesB){
    if(votesA>votesB)
        cout<<"Candidate A wins"<<endl;
    else if(votesB>votesA)
        cout<<"Candidate B wins"<<endl;
    else
        cout<<"It's a tie!"<<endl;
}

int main(){
    int voters;
    int vote;
    int votesA=0, votesB=0;

    cout<<"Enter number of voters: ";
    cin>>voters;

    for(int i=1; i<=voters; i++){
    	cout<<endl;
        cout<<"Voter "<<i<<endl;
        cout<<"Press 1 for Candidate A"<<endl;
        cout<<"Press 2 for Candidate B"<<endl;
        cout<<"Your vote: ";
        cin>>vote;

        if(vote==1)
            votesA++;
        else if(vote== 2)
            votesB++;
        else
            cout<<"Invalid vote"<<endl;
    }
     cout<<endl;
    cout<<"Total Votes:" <<endl;
    cout<<"Candidate A: "<<votesA<<endl;
    cout<<"Candidate B: "<<votesB<<endl;

    displayWinner(votesA, votesB);


    return 0;
}
