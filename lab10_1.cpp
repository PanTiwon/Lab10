#include<iostream>
using namespace std;

char grade;
int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	std::cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	int Nstuden = 0;
	do{
		std::cout << "Student [" << Nstuden+1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'

		if(grade == 'A') {// if grade is A
			count[0]++;
			Nstuden++;
		}else if(grade == 'B'){ // if grade is B
			count[1]++;
			Nstuden++;
		}else if(grade == 'C'){ // if grade is C
			count[2]++;
			Nstuden++;
		}else if(grade == 'D'){ // if grade is D
			count[3]++;
			Nstuden++;
		}else if(grade == 'F'){ // if grade is F
			count[4]++;
			Nstuden++;
		}else if(grade == '0'){ // stop
			break;
		}else{ // grade is wrong input
			std::cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	std::cout << "In total "<<Nstuden << " students.\n";
	std::cout << "A = " << count[0] <<", ";
	std::cout << "B = " << count[1] <<", ";	
	std::cout << "C = " << count[2] <<", ";
	std::cout << "D = " << count[3] <<", ";
	std::cout << "F = " << count[4];
	return 0;
}
