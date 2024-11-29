#include <iostream>
using namespace std;
int main () {
	int siteID;
	string signup,firstname,lastname,username,password,checkpassword,email;
	cout << "Remote jobs are highly valuable for C++ developers due to several key reasons:" << endl;
	cout << "\nFlexibility to work from anywhere."<<endl<<"\nAccess to global job opportunities."<<endl<<"\nPotential to earn in USD, offering financial advantages for international developers."<<endl;
	cout << "\nSix websites to work as a C++ developer remotely are: "<<endl;
	cout << "\n1:Freelancer"<<endl<<"\n2:Upwork"<<endl<<"\n3:Jobspresso"<<endl<<"\n4:Remote.co"<<endl<<"\n5:Toptal"<<endl<<"\n6:FlexJobs"<<endl;
	// Taking Site ID from the user:
	cout << "\n\nEnter the ID of the site you want to explore: ";
	cin >> siteID;
	// displaying the website name and url based on user siteid:
	if(siteID == 1){
		cout << "Freelancer" << "\n" << "URL: www.freelancer.com";
	}else if(siteID == 2){
		cout << "Upwork" << "\n" << "URL: www.upwork.com";
	}else if(siteID == 3){
		cout << "Jobspresso" << "\n" << "URL: www.jobspresso.co";
	}else if(siteID == 4){
		cout << "Remote.co" << "\n" << "URL: www.Remote.co";
	}else if(siteID == 5){
		cout << "Toptal" << "\n" << "URL: www.toptal.com";
	}else if(siteID == 6){
		cout << "FlexJobs" << "\n" << "URL: www.flexjobs.com";
	}else{
		cout << "You Entered invalid SiteID !"<<endl;
	}
	// 
	cout << "\n\nDo you want to create an account on Freelancer? yes/no: ";
	cin >> signup;
	if(signup == "yes"){
		cout << "\nDirecting your Signup Request...."<<endl;
		
		cout << "Enter Your first name: ";
		cin >> firstname;
		
		cout << "\nEnter Your last name: ";
		cin >> lastname;
		
		cout << "\nEnter Email: ";
		cin >> email;
		
		cout << "\nCreate username: ";
		cin >> username;
		
		cout << "\nCreate Password: ";
		cin >> password;
		
		cout << "\nRe-write password: ";
		cin >> checkpassword;
		
		if(password == checkpassword){
			cout << "\n\nCreating Account on freelancer.com please wait....."<<endl;
			cout << username << " your account has been created on freelancer.com!" << " Congratulations." << endl;
		}else{
			cout << "Your passwords didnt match!" << "\n Redirecting...";
		}
	}else if(signup == "no"){
		cout << "\nYou can create account later then! Redirecting...";
	}else {
		cout << "\nYou didnt enter yes nor no! Invalid token ! ";
	}
	return 0;
} 
