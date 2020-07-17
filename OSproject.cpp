//============================================================================
// Name        : OSproject.cpp
// Author      : Cameron Roberts
// Class	   : Operating Systems
// What		   : Programming Project, 6/27
//============================================================================

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include <fstream>
#include<string>
#include <iomanip>
#include <algorithm>
using namespace std;


double inOrder(vector<double> jobs){
	double diff = 0;
	double total = 0;
	vector<double> end_Values;

	for(vector<double>::iterator iterator1 = jobs.begin();iterator1 != jobs.end(); iterator1++){
		diff +=*iterator1;
		end_Values.push_back(diff);
	}
	for(vector<double>::iterator iterator1 = end_Values.begin();iterator1 != end_Values.end(); iterator1++){
				total += *iterator1;
	}
	return total/(double)end_Values.size();
}

double shortestOrder(vector<double> jobs){
	sort(jobs.begin(),jobs.end());
	double total = inOrder(jobs);
	cout << endl;
	return total;
}

double round_robin2(vector<double> jobs){
	vector<double> end_Values;
	double placeholder= 0;
	double total = 0;

	while(end_Values.size() != jobs.size()){
		for(vector<double>::iterator iterator1 = jobs.begin();iterator1 != jobs.end(); iterator1++){
					if(*iterator1 == 1){
						placeholder +=1;
						*iterator1 = 0;
						end_Values.push_back(placeholder);
					}
					else if(*iterator1 == 2){
						placeholder+=2;
						*iterator1 = 0;
						end_Values.push_back(placeholder);
					}
					else {
						placeholder+=2;
						*iterator1-=2;
					}
		}
	}
	for(vector<double>::iterator iterator1 = end_Values.begin();iterator1 != end_Values.end(); iterator1++){
					total += *iterator1;
	}
	return total/(double)end_Values.size();
}

double round_robin5(vector<double> jobs){
	vector<double> end_Values;
	double placeholder= 0;
	double total = 0;

	while(end_Values.size() != jobs.size()){
		for(vector<double>::iterator iterator1 = jobs.begin();iterator1 != jobs.end(); iterator1++){
					if(*iterator1 == 1){
						placeholder +=1;
						*iterator1 = 0;
						end_Values.push_back(placeholder);
					}
					else if(*iterator1 == 2){
						placeholder+=2;
						*iterator1 = 0;
						end_Values.push_back(placeholder);
					}
					else if(*iterator1 == 3){
						placeholder+=3;
						*iterator1 = 0;
						end_Values.push_back(placeholder);
					}
					else if(*iterator1 == 4){
						placeholder+=4;
						*iterator1 = 0;
						end_Values.push_back(placeholder);
					}
					else if(*iterator1 == 5){
						placeholder+=5;
						*iterator1 = 0;
						end_Values.push_back(placeholder);
					}
					else {
						placeholder+=5;
						*iterator1-=5;
					}
		}
	}
	for(vector<double>::iterator iterator1 = end_Values.begin();iterator1 != end_Values.end(); iterator1++){
					total += *iterator1;
	}
	return total/(double)end_Values.size();
}

int main() {
	//Data Set 1
	string jobName1;
	string readNumber1;
	vector<double> job_Lengths1;
	vector<string> names1;
	ifstream myFile1("testdata1.txt");
	while(getline(myFile1,jobName1)){
		names1.push_back(jobName1);
		getline(myFile1,readNumber1);
		double cast_Int = ::atof(readNumber1.c_str());
		job_Lengths1.push_back(cast_Int);
	}
	cout << "***********************************************" << endl;
	cout << "                  Data Set 1                   " << endl;
	cout << "***********************************************" << endl;
	cout << "Job Names(Order of Arrival): ";


	for(vector<string>::iterator iterator1 = names1.begin();iterator1 != names1.end(); iterator1++){
		cout << *iterator1 << " ";
	}
	cout << "\nJob Times(Order of Arrival):";
	for(vector<double>::iterator iterator1 = job_Lengths1.begin();iterator1 != job_Lengths1.end(); iterator1++){
		cout << setw(7) << *iterator1;
	}
	double firstCome = inOrder(job_Lengths1);
	double shortestFirst = shortestOrder(job_Lengths1);
	double roundrob2 = round_robin2(job_Lengths1);
	double roundrob5 = round_robin5(job_Lengths1);


	cout << "***********************************************" << endl;
	cout << "First Come First Serve Turnaround Time: " << firstCome << endl;
	cout << "Shortest First Turnaround Time: " << shortestFirst << endl;
	cout << "Round Robin(2) Turnaround Time: " << roundrob2 << endl;
	cout << "Round Robin(5) Turnaround Time: " << roundrob5 << endl;


	myFile1.close();



	//Data Set 2
	string jobName2;
	string readNumber2;
	vector<double> job_Lengths2;
	vector<string> names2;
	ifstream myFile2("testdata2.txt");
	while(getline(myFile2,jobName2)){
		names2.push_back(jobName2);
		getline(myFile2,readNumber2);
		double cast_Int = ::atof(readNumber2.c_str());
		job_Lengths2.push_back(cast_Int);
	}
	cout << "***********************************************" << endl;
	cout << "                  Data Set 2                   " << endl;
	cout << "***********************************************" << endl;
	cout << "Job Names(Order of Arrival): ";


	for(vector<string>::iterator iterator1 = names2.begin();iterator1 != names2.end(); iterator1++){
		cout << *iterator1 << " ";
	}
	cout << "\nJob Times(Order of Arrival):";
	for(vector<double>::iterator iterator1 = job_Lengths2.begin();iterator1 != job_Lengths2.end(); iterator1++){
		cout << setw(7) << *iterator1;
	}
	firstCome = inOrder(job_Lengths2);
	shortestFirst = shortestOrder(job_Lengths2);
	roundrob2 = round_robin2(job_Lengths2);
	roundrob5 = round_robin5(job_Lengths2);


	cout << "***********************************************" << endl;
	cout << "First Come First Serve Turnaround Time: " << firstCome << endl;
	cout << "Shortest First Turnaround Time: " << shortestFirst << endl;
	cout << "Round Robin(2) Turnaround Time: " << roundrob2 << endl;
	cout << "Round Robin(5) Turnaround Time: " << roundrob5 << endl;

	myFile2.close();

	//Data Set 3
	string jobName3;
	string readNumber3;
	vector<double> job_Lengths3;
	vector<string> names3;
	ifstream myFile3("testdata3.txt");
	while(getline(myFile3,jobName3)){
		names3.push_back(jobName3);
		getline(myFile3,readNumber3);
		double cast_Int = ::atof(readNumber3.c_str());
		job_Lengths3.push_back(cast_Int);
	}
	cout << "***********************************************" << endl;
	cout << "                  Data Set 3                   " << endl;
	cout << "***********************************************" << endl;
	cout << "Job Names(Order of Arrival): ";


	for(vector<string>::iterator iterator1 = names3.begin();iterator1 != names3.end(); iterator1++){
		cout << *iterator1 << " ";
	}
	cout << "\nJob Times(Order of Arrival):";
	for(vector<double>::iterator iterator1 = job_Lengths3.begin();iterator1 != job_Lengths3.end(); iterator1++){
		cout << setw(7) << *iterator1;
	}
	firstCome = inOrder(job_Lengths3);
	shortestFirst = shortestOrder(job_Lengths3);
	roundrob2 = round_robin2(job_Lengths3);
	roundrob5 = round_robin5(job_Lengths3);


	cout << "***********************************************" << endl;
	cout << "First Come First Serve Turnaround Time: " << firstCome << endl;
	cout << "Shortest First Turnaround Time: " << shortestFirst << endl;
	cout << "Round Robin(2) Turnaround Time: " << roundrob2 << endl;
	cout << "Round Robin(5) Turnaround Time: " << roundrob5 << endl;


	myFile3.close();

}
