/*This software prompts the user to enter total number of published centers, 
total number of registered voters, total number of null and void votes, total 
number of valid votes and total valid votes for each candidate. Afterward, 
it determines the candidate with the majority of votes and displays the results on the screen.

NOTE:For a candidate to be a majority winner the candidate total valid votes should be greater than majority.
*/ 
#include<iostream>
using namespace std;
int main(void){
system("color A");
cout<<"=============================== MALAWI ELECTORAL COMMISSION ===============================\n\n";
long long int Totalvalidvotesfor_Bingu_Wa_Mutharika,
Totalvalidvotesfor_John_Tembo,
Totalvalidvotesfor_Kamuzu_Walter_Chibambo,
Totalvalidvotesfor_Stanley_Masauli,
Totalvalidvotesfor_Loveness_Gondwe,
Totalvalidvotesfor_Dindi_Gowa_Nyasulu,
Total_Valid_Votes,
Total_Registered_Voters, 
Total_Votes_Cast, 
Total_Null_and_void_Votes,
Total_Published_Centers, 
Total_Centers,
majority;
/*Get total published centers */
cout<<"Enter Total Published Centers:";
cin>>Total_Published_Centers;
cout<<"Enter Total Centers:";
cin>>Total_Centers;
// Get the total number of registered votes
cout<<"Enter Total Registered Voters/Turnout Votes:";
cin>>Total_Registered_Voters;
// Get the total number of votes casted
cout<<"Enter Total Votes Cast:";
cin>>Total_Votes_Cast;
// Get total number of Null_&_Void votes
cout<<"Enter Total Null & Void Votes/Invalid Votes:";
cin>>Total_Null_and_void_Votes;
// Get total votes
cout<<"Enter Total Valid Votes:";
cin>>Total_Valid_Votes; 
//Get Total Valid Votes for Bingu Wa Mutharika
cout<<"Enter Total Valid Votes for Bingu Wa Mutharika :";
cin>>Totalvalidvotesfor_Bingu_Wa_Mutharika;
//Get Total Valid Votes for John Tembo
cout<<"Enter Total Valid Votes for John Tembo :";
cin>>Totalvalidvotesfor_John_Tembo;
//Get Totalvalidvotesfor_Kamuzu_Walter_Chibambo
cout<<"Enter Total Valid Votes for Daniel Kanfosi Nkhumbwe:"; 
cin>>Totalvalidvotesfor_Kamuzu_Walter_Chibambo;
//Get Totalvalidvotesfor_Stanley_Masauli
cout<<"Enter Total Valid Votes for Stanley Masauli:";
cin>>Totalvalidvotesfor_Stanley_Masauli;
//Get Totalvalidvotes for Loveness Gondwe,
cout<<"Enter Total Valid Votes forLoveness Gondwe:"; 
cin>>Totalvalidvotesfor_Loveness_Gondwe;
//Get Totalvalidvotes_ for_ Dindi_Gowa_Nyasulu,
cout<<"Enter Total Valid Votes for Dindi Gowa Nyasulu:"; 
cin>>Totalvalidvotesfor_Dindi_Gowa_Nyasulu;
/*fifty plus one formular to determine the majority winner of an Election is majority=(totalvalidvotes/2)+1; */
majority=(Total_Valid_Votes/2)+1;
if (Totalvalidvotesfor_Bingu_Wa_Mutharika>majority){
cout<<"Cogratulations Bingu_Wa_Mutharika you're the winner of 2009 presidential Election\n\n";
} else if(Totalvalidvotesfor_John_Tembo>majority){
cout<<"Congratulation John Tembo you're the winner of 2009 presidential Election\n\n";
} else if(Totalvalidvotesfor_Kamuzu_Walter_Chibambo>majority){
cout<<"Cogratulations Daniel Kamuzu Walter Chibambo  you're the winner of 20009 presidential Election\n\n";
} else if(Totalvalidvotesfor_Stanley_Masauli>majority){
cout<<"Cogratulations Stanley Masauli you're the winner of 2009 presidential Election\n\n";
}else if(Totalvalidvotesfor_Loveness_Gondwe>majority){
cout<<"Cogratulations Loveness Gondwe you're the winner of 2009 presidential Election\n\n";
}else if(Totalvalidvotesfor_Dindi_Gowa_Nyasulu>majority){
cout<<"Cogratulations Dindi Gowa Nyasulu you're the winner of 2009 presidential Election\n\n";
}
else 
{
cout<<"No majority winner was found RUNOF may be required Thank you.\n\n";
return 0;
}
}
