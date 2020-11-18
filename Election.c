#include<stdio.h>

#define candidate_cout

#define candidate1  "Khaleda Zia" ":  75 years old(Women)"
#define candidate2 "Sheikh Hasina" ":  73 years old(Women)"
#define candidate3 "Hussain Muhammad Ershad" ":  89 years old(Men)"
#define candidate4 "Bangladesh Jamaat-e-Islami" ":  79 years old(President:Shafiqur Rahman)(Men)"

int votesCount1=0;
int votesCount2=0;
int votesCount3=0;
int votesCount4=0;
int Ruinedvotes=0;

void toVote(){
int Like;
printf("\n\n **** Please choose your Candidate ****\n\n");
printf("\n 1. %s", candidate1);
printf("\n 2. %s", candidate2);
printf("\n 3. %s", candidate3);
printf("\n 4. %s", candidate4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your Like : ");
scanf("%d",&Like);

switch(Like){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: Ruinedvotes++; break;
    default: printf("\n Error: Wrong Choice Here !! Please retry");
             //hold the screen
             getchar();
}
printf("\n **** Thanks for vote ****");
}

void votesCount(){
printf("\n **** Bangladesh VOTING STATICS ****");
printf("\n %s - %d ", candidate1, votesCount1);
printf("\n %s - %d ", candidate2, votesCount2);
printf("\n %s - %d ", candidate3, votesCount3);
printf("\n %s - %d ", candidate4, votesCount4);
printf("\n %s - %d ", "Ruined votes", Ruinedvotes);
}

void getwinningCandidate(){
    printf("\n\n  **** Winning Candidate ****\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",candidate1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",candidate2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",candidate3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",candidate4);
    else
    printf("----- <<<<<  Warning !!! No-win situation   >>>>>----");



}
int main()
{
int a, Like;

while(1){
printf("\n\n **** Welcome to Bangladesh Election/Voting 2020 ****");
printf("\n\n 1. to the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find Winning Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &Like);

switch(Like)
{
case 1: toVote();break;
case 2: votesCount();break;
case 3: getwinningCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(Like!=0);

//hold the screen
getchar();

return 0;
}
