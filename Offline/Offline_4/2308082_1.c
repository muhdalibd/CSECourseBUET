#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int q1, q2, q3;
    int mid;
    int final;
    double quiz_avg;
    double total;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct Student students[N];
    
    for(int i=0; i<N; i++){
        scanf(
            "%d %s %d %d %d %d %d",
            &students[i].id,
            students[i].name,
            &students[i].q1,
            &students[i].q2,
            &students[i].q3,
            &students[i].mid,
            &students[i].final
        );
    }
    
    for(int i = 0; i < N; i++){
        int lowest = students[i].q1;
        
        if(students[i].q2 < lowest) {
            lowest = students[i].q2;
        }
        if(students[i].q3 < lowest) {
            lowest = students[i].q3;
        }
        
        int sum_quizzes = students[i].q1 + students[i].q2 + students[i].q3;
        int sum_best_two = sum_quizzes - lowest;
        
        students[i].quiz_avg = sum_best_two / 2.0;
        
        students[i].total = (0.20 * students[i].quiz_avg) + (0.30 * students[i].mid) + (0.50 * students[i].final);
    }
    
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            int should_swap = 0;
            
            if(students[j].total < students[j+1].total){
                should_swap = 1;
            }
            else if(students[j].total == students[j+1].total){
                if(students[j].final < students[j+1].final){
                    should_swap = 1;
                }
                else if(students[j].final == students[j+1].final){
                    if(students[j].id > students[j+1].id){
                        should_swap = 1;
                    }
                }
            }
            
            if(should_swap){
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    printf("\n");
    
    for(int i=0; i<N; i++){
        printf(
            "%d %s %.2lf\n", 
            students[i].id, 
            students[i].name, 
            students[i].total
        );
    }
    
    printf(
        "Topper: %d %s %.2lf\n", 
        students[0].id, 
        students[0].name, 
        students[0].total
    );
    
    return 0;
}