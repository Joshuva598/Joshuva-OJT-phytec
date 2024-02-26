//program_to_get_five_subjects_marks_from_user_and_print_grades

int main()
{
	int no_of_subjects = 5;
	int subject_marks[5];
	int total_marks = 0; //if it is not set to 0,donot get desire output

	for(int i = 0 ; i < no_of_subjects ; i++)
	{
		printf("Enter subject%d marks:",i+1);
		scanf("%d",&subject_marks[i]);
	
		total_marks += subject_marks[i];

		printf("\n");
	}

	int average;

	average = total_marks/no_of_subjects;

	float percentage;

	percentage = (((float)total_marks)/500) * 100; //typecasting total_marks is float to get accurate value

	if(percentage > 80)
	{
		printf("A grade\n");
	}

	else if(percentage > 60)
	{
		printf("B grade\n");
	}

	else if(percentage > 40)
	{
		printf("C grade\n");
	}

	else
	{
		printf("D grade\n");
	}

	return 0;
}
