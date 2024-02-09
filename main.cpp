#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string lastName, firstName, middleInitial, address, contactNumber, remark, sex, remarkResult, sexResult, interpretation;
    double  attendance, seatworks, recitations, quizzes, labExercises, termExam, totalPercentage, finalGrade;
    const int currentYear = 2023;
    int birthYear, age;

    cout<<"Nueva Ecija University of Science and Technology"<<endl;
    cout<<"Sumcab Campus"<<endl;
    cout<<"Input Last Name: ";
    getline(cin, lastName);
    cout<<"Input First Name: ";
    getline(cin, firstName);
    cout<<"Input Middle Initial: ";
    getline(cin, middleInitial);
    cout<<"Input Address: ";
    getline(cin, address);
    cout<<"Input Contact Number: ";
    cin>>contactNumber;
    cout<<"Input Birth Year: ";
    cin>>birthYear;
    cout<<"Input a Letter: ";
    cin>>remark;
    cout<<"Input Sex: ";
    cin>>sex;
    cout<<"Input Attendance Score: ";
    cin>>attendance;
    cout<<"Input Seatworks Score: ";
    cin>>seatworks;
    cout<<"Input Recitations Score: ";
    cin>>recitations;
    cout<<"Input Quizzes Score: ";
    cin>>quizzes;
    cout<<"Input Laboratory Excercises Score: ";
    cin>>labExercises;
    cout<<"Input Term Exam Score: ";
    cin>>termExam;

    age = currentYear - birthYear;

     if (remark == "S" || remark == "s")
    {
        remarkResult = "Remarks: Scholar";
    }

    if (sex == "M" || sex == "m")
    {
        sexResult = "Sex: Male";
    }
        else if (sex == "F" || sex == "f")
        {
            sexResult = "Sex: Female";
        }

    attendance = attendance * 0.10;
    seatworks = seatworks * 0.15;
    recitations = recitations * 0.10;
    quizzes = quizzes * 0.20;
    labExercises = labExercises * 0.25;
    termExam = termExam * 0.20;
    totalPercentage = attendance + seatworks + recitations + quizzes + labExercises + termExam;

    if (totalPercentage >= 98)
    {
        finalGrade = 1.00;
    }
        else if (totalPercentage >= 95)
        {
            finalGrade = 1.25;
        }
            else if (totalPercentage >= 92)
            {
                finalGrade = 1.50;
            }
                else if (totalPercentage >= 89)
                {
                    finalGrade = 1.75;
                }
                    else if (totalPercentage >= 85)
                    {
                        finalGrade = 2.00;
                    }
                        else if (totalPercentage >= 82)
                        {
                            finalGrade = 2.25;
                        }
                            else if (totalPercentage >= 80)
                            {
                                finalGrade = 2.50;
                            }
                                else if (totalPercentage >= 77)
                                {
                                    finalGrade = 2.75;
                                }
                                    else if (totalPercentage >= 75)
                                    {
                                        finalGrade = 3.00;
                                    }
                                        else
                                        {
                                            finalGrade = 5.00;
                                        }

    switch (static_cast<int>(finalGrade * 100))
    {
        case 100:
            interpretation = "With Highest Honor";
            break;
        case 125:
            interpretation = "With High Honor";
            break;
        case 150:
            interpretation = "With Honor";
            break;
        default:
            interpretation = "Study Harder...";
    }

    cout<<"Full Name: "<<firstName<<" "<<middleInitial<<" "<<lastName<<"."<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Contact Number: "<<contactNumber<<endl;
    cout<<"Birth Year: "<<birthYear<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<remarkResult<<endl;
    cout<<sexResult<<endl;
    cout<<"Your final grade is "<<finalGrade<<endl;
    cout<<interpretation<<endl<<endl;

    return EXIT_SUCCESS;
}