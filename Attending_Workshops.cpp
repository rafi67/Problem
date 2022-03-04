#include<bits/stdc++.h>

using namespace std;

struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    Workshop* a;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* temp = new Available_Workshops();
    temp->n = n;
    temp->a = new Workshop[n];
    for(int i=0; i<n; i++) {
        temp->a[i].start_time = start_time[i];
        temp->a[i].duration = duration[i];   
    }
    
    return temp;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    int result = 0, size = ptr->n;
    int size2 = size-1;
    
    for(int i=0; i<size; i++) {
        int temp = ptr->a[i].start_time + ptr->a[i].duration;
        ptr->a[i].end_time = temp;
    }
    
    for(int i=0; i<size2; i++) {
        if(ptr->a[i].start_time==0) {
            result++;
            i++;
        }
        if(ptr->a[i].end_time<ptr->a[i+1].start_time) {
            result++;
        }
    }

    return result;
}

int main(int argc, char *argv[]) {

    int n; // number of workshops
    scanf("%d", &n);
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        start_time[i] = temp;
    }
    for(int i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        duration[i] = temp;
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    printf("%d\n", CalculateMaxWorkshops(ptr));

    return 0;

}
