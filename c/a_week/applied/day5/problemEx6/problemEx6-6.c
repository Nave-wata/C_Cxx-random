#include <stdio.h>

typedef struct {
    int id;
    int japanese;
    int math;
    int science;
    int social_studies;
    int english;
    int sum;
} student_data;

void sum(student_data*);

void main() {
    int i, j;
    student_data data[5], tmp_data;

    // id
    for (i = 0; i < 5; i++) {
        data[i].id = 1001 + i;
    }

    // japanese
    data[0].japanese = 82;
    data[1].japanese = 92;
    data[2].japanese = 43;
    data[3].japanese = 72;
    data[4].japanese = 99;

    // math
    data[0].math = 43;
    data[1].math = 83;
    data[2].math = 32;
    data[3].math = 73;
    data[4].math = 72;

    // science
    data[0].science = 53;
    data[1].science = 88;
    data[2].science = 53;
    data[3].science = 71;
    data[4].science = 82;

    // social_studies
    data[0].social_studies = 84;
    data[1].social_studies = 79;
    data[2].social_studies = 45;
    data[3].social_studies = 68;
    data[4].social_studies = 91;

    // english
    data[0].english = 45;
    data[1].english = 99;
    data[2].english = 66;
    data[3].english = 59;
    data[4].english = 94;

    for (i = 0; i < 5; i++) {
        sum(&data[i]);
    }

    for (i = 1; i < 5; i++) {
        j = i;
        while((0 < j) && (data[j - 1].sum < data[j].sum)) {
            tmp_data = data[j - 1];
            data[j - 1] = data[j];
            data[j] = tmp_data;
            j--;
        }
    }

    printf("番号  国語  数学  理科  社会  英語  合計\n");
    for (i = 0; i < 5; i++) {
        printf("%d    %d    %d    %d    %d    %d   %d\n",
                data[i].id, data[i].japanese, data[i].math, data[i].science, data[i].social_studies, data[i].english, data[i].sum);
    }
}

void sum(student_data* data) {
    data->sum = 0;

    data->sum += data->japanese;
    data->sum += data->math;
    data->sum += data->science;
    data->sum += data->social_studies;
    data->sum += data->english;
}
