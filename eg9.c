//This program is for practicing vim, so it contains a lot of redundant code, as my focus was on re-typing things again and again
#include<stdio.h>
int main(){
int sub1_marks, sub2_marks, sub3_marks, sub4_marks, sub5_marks;
int total;
int fail_count = 0;

//Data entry code
printf("Enter marks for Subject 1 (0-100): ");
scanf("%d", &sub1_marks);
if(sub1_marks < 0 || sub1_marks > 100){
printf("Invalid input: marks entered was less than 0 or greater than 100");
return 0;
}
printf("Enter marks for Subject 2 (0-100): ");
scanf("%d", &sub2_marks);
if(sub2_marks < 0 || sub2_marks > 100){
printf("Invalid input: marks entered was less than 0 or greater than 100");
return 0;
}
printf("Enter marks for Subject 3 (0-100): ");
scanf("%d", &sub3_marks);
if(sub3_marks < 0 || sub3_marks > 100){
printf("Invalid input: marks entered was less than 0 or greater than 100");
return 0;
}
printf("Enter marks for Subject 4 (0-100): ");
scanf("%d", &sub4_marks);
if(sub4_marks < 0 || sub4_marks > 100){
printf("Invalid input: marks entered was less than 0");
return 0;
}
printf("Enter marks for Subject 5 (0-100): ");
scanf("%d", &sub5_marks);
if(sub5_marks < 0 || sub5_marks > 100){
printf("Invalid input: marks entered was less than 0 or greater than 100");
return 0;
}

//Code for totaling of marks
total = sub1_marks + sub2_marks + sub3_marks + sub4_marks + sub5_marks;

//Code for checking for the fail count
if(sub1_marks<33){
fail_count++;
}
if(sub2_marks<33){
fail_count++;
}
if(sub3_marks<33){
fail_count++;
}
if(sub4_marks<33){
fail_count++;
}
if(sub5_marks<33){
fail_count++;
}

//code to check if the student has passed or failed.
if(fail_count == 0){
if(total/5 >= 60) printf("Passed, with first division");
else if(total/5 >=45) printf("Passed, with second division");
else printf("Passed, with third division");
}
else if(fail_count == 1){
printf("Supplementary, with %d percent", total/5);	
}
else printf("Failed");

return 0;
}
