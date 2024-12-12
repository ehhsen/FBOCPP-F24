#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	// defining variable that we will use
	const int stud = 50, subj = 5;
	int  row ,  col;
	float marks[stud][subj], arr_avg[stud],  sum = 0.0, average = 0.0;
	
	//1.   taking input in 2d array
	for (row = 0; row < stud ; row ++ ){
		sum = 0.0;
		average = 0.0;
		cout<<"\nEnter marks of student "<< row + 1<<":\n";
		for (col = 0; col < subj; col ++){
	    	cin>>marks[row][col];
	// finding sum of each element of array of arr_avg
			sum = sum + marks[row][col];
		}
		average = sum / subj;
		arr_avg[row] = average;
	}
	cout<<"-----------------------------------------------";
	cout<<"displaying elements in array";
	cout<<"-----------------------------------------------";
		
	// 2.displaying each element of 2d array
	for (row = 0; row < stud ; row ++ ){
		cout<<"\n";
		cout<<"student "<<row +1<<">>  ";
		for (col = 0; col < subj; col ++){
		cout<<setw(5)<<marks[row][col]<<" ";
	}
    }
    //3.  display average of each student marks and calculte minimum average 
    cout<<"\n\nAverage marks of each student : \n";
    float low = arr_avg[0];
    
	for (row = 0; row < stud ; row ++ ){ 
		cout<<setw(8)<<arr_avg[row]<<" ";
		if(arr_avg[row] < low)
			low = arr_avg[row];
	}
	cout<<"\n\nLowest average: "<<low;
	
// 4. calculate highest average 
	float high = arr_avg[0];
	
	for (row = 0; row < stud ; row ++ ){
		if(arr_avg[row] > high){
			high = arr_avg[row];
		}
	}
	cout<<"\nHighest average: "<<high;
	cout<<endl;
	
// 5.  calculating the student who got maximum marks in each sybject
	float max = marks[0][0];
	int maxrow = 0;
	for(col = 0; col < subj; col ++){
		maxrow = 0;
		max = marks[0][col];
		for(row = 0; row <= stud; row ++){
			if(marks[row][col] > max){
				max = marks[row][col];
				maxrow = row;
			}
		}
		cout<<"\nmaximum in subject "<<col+1<<" are of student: "<<maxrow+1;
	}
	//6.  finding student who got lowest marks in subject 4.
	float lowestm = marks[0][3]; 
	int index_lowestm = 0, gradeA = 0;
	
	for(row = 1; row <= stud; row ++){
		if( marks[row][3] < lowestm){
			lowestm = marks[row][3];
			index_lowestm = row;
		}
		if(marks[row][3]> 80){
			gradeA +=1;
		}
		
    }
    cout<<"\n\nstudent who got lowest marks in subject 4 is: "<<index_lowestm+1;
	
	//7.  student who failed in subject 
	// criteria marks < 50 is F grade 

	int num_fail = 0;	
	for(row = 0; row <= stud; row ++){
		if(marks[row][1]< 50){
			num_fail +=1;	
		}
 }
 	cout<<"\n\nstudents who failed subject 2 (grade F): "<<num_fail;
 	// 8. student who got A grade in subject 4
 	cout<<"\n\nstudent who got A grade in subject 4 are: "<<gradeA;
}
