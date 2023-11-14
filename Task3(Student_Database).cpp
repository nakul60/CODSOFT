#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int no_of_stud;
		int sub;
		int grade[50];
		Student()
		{
			name = "";
			no_of_stud = 0;
			sub = 0;
		}
		void student_calculation()
		{
			cout<<"Enter Number of Students:"<<endl;
			cin>>no_of_stud;
			for(int i=0;i<no_of_stud;i++)
			{
				cout<<"Enter name of Student:"<<endl;
				cin>>name;
				cout<<"Enter Number of Subjects:"<<endl;
				cin>>sub;
				grade[sub];
				cout<<"Enter grades of each subject:"<<endl;
				for(int i=0;i<sub;i++)
				{
					cin>>grade[i]; 	
				}
				int avg=0;
				for(int i=0;i<sub;i++)
				{
					avg += grade[i];
				}
				avg = avg/sub;
				cout<<"Average Marks of Student is: "<<avg<<endl;
				int max = grade[0];
				for(int i=0;i<sub;i++)
				{
					if(grade[i] > max)
					{
						max = grade[i];	
					}	
				}	
				cout<<"Highest marks is: "<<max<<endl;
				int min = grade[0];
				for(int i=0;i<sub;i++)
				{
					if(grade[i] < min)
					{
						min = grade[i];	
					}	
				}	
				cout<<"Lowest marks is: "<<min<<endl;
			}
		}
};
int main()
{
	Student s;
	s.student_calculation();
	return 0;
}
