#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
	
	srand(time(0));
	int random_number = rand() %100+1;
	int number_guesses =0;
	int guess;
	cout<<"Welcome to the Number Guessing Game!"<< endl;
	cout<<"I have choosen a random number between 1 and 100."<< endl;
	while(true){
		cout<<"Enter your Guess: ";
		cin>> guess;
		number_guesses++;
		if(guess ==random_number){
			cout<<"Congrutulation! You guessed the number in "<<number_guesses<<"guesses."<<endl;
			break;
		}
		else if (guess <random_number){
			cout<<" Too low! Guess again. "<<endl;
		}
		else{
			cout<<"Too high! Guess again. "<<endl;
		}
	}
	return 0;
}
