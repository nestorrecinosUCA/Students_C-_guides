#include<iostream>
using namespace std;
struct 
{   
    string name;
    string lastname;
    string status = "Undefined";
    float scores[];
} student;

void average(int nofS, string name, string lastname){
    float total = 0, average = 0;

    for (int i = 0; i < nofS; i++){
        cout << "Type your score number " << i+1 << ": "; cin >> student.scores[i];
        total += student.scores[i];
    }
    
    average = total/nofS;
    if (average >= 6){
        student.status = "approved";
    }else{
        student.status = "Failed";
    }
    cout << name << " " << lastname << "'s ";
    cout << "scores average is: " << average << endl;
    //cout.precision(2);
    cout << name << " is " << student.status;
}

int main(){
    int nofScores;
    cout << "Type your name: "; cin >> student.name;
    cout << "Type your lastname: "; cin >> student.lastname;
    cout << "Type the numbers of scores that you want to insert: "; cin >> nofScores;

    average(nofScores, student.name, student.lastname);

    return 0;
    
}