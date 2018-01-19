

//instructions for 1-19
//
//intro: Write a program that asks a user for how old they are, and then repeats that number back to them in an insult.
//
//intermediate: Write a program that prints the numbers 256 down to 32, counting by fours
//
//advanced: make an account at HackerRank.com
//do this problem: https://www.hackerrank.com/challenges/c-tutorial-struct/problem

#include<iostream>
using namespace std;
int main() {
	cout << "here we go!" << endl;
	int i;
	for (i = 256; i > 31; i=i- 4) {
		cout << i << endl;
	}
	system("pause");
}