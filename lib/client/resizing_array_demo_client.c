#include "resizing_array.h"
#include "utils.h"

//
// Created by haoyu on 11/14/22.
//


void append_and_pop_demo() {
    Array arr = new_Array(sizeof(int));
    Array *p_arr = &arr;
    print_Array_attributes(arr);
    for (int i = 0; i < 10; ++i) {
        append_array(p_arr, &i);
    }
    print_Array_attributes(arr);
//    print_int_array(arr.data, arr.length);
    int val;
    for (int i = 0; i < 5; ++i) {
        pop_array(p_arr, &val);
    }
    print_Array_attributes(arr);
//    print_int_array(arr.data, arr.length);
}


void append_pop_long_array_demo() {
    Array arr = new_Array(sizeof(long));
    Array *p_arr = &arr;
    print_Array_attributes(arr);
    for (long i = 0; i < 10; ++i) {
        append_array(p_arr, &i);
    }
    print_Array_attributes(arr);
//    print_int_array(arr.data, arr.length);
    long val;
    for (int i = 0; i < 5; ++i) {
        pop_array(p_arr, &val);
    }
    print_Array_attributes(arr);
    print_long_array(arr.data, arr.length);
}


void int_Array_demo() {
    Array arr = rand_Array_int(10, 20);
    print_Array_int(arr);
}


void copy_Array_demo() {
    Array arr = rand_Array_int(10, 20);
    print_Array_int(arr);
    Array copy = copy_Array(arr);
    print_Array_int(copy);
}

void swap_Array_item_demo() {
    Array arr = rand_Array_int(10, 20);
    Array *p_arr = &arr;
    print_Array_int(arr);
    swap_Array_items(p_arr, 0, 1);
    printf("After swapping index 0 and 1:\n");
    print_Array_int(arr);
}

int int_Comparator(void *const a, void *const b, void *data) {
    return *(int *) a - *(int *) b;
}

void compare_Array_items_demo() {
    Array arr = rand_Array_int(10, 20);
    Array *p_arr = &arr;
    print_Array_int(arr);
    int *data = arr.data, i;
    printf("data:\t");
    for (i = 0; i < arr.length - 1; ++i) {
        printf("%d  %c\t", data[i],
               (compare_Array_items(p_arr, i, i + 1, int_Comparator) > 0) ? '>' : '<');
    }
    printf("%d\n", data[i]);
}


void shuffle_demo() {
    Array arr = new_Array(sizeof(int));
    Array *p_arr = &arr;
    for (int i = 0; i < 10; ++i) {
        append_array(p_arr, &i);
    }
    print_Array_int(arr);
    shuffle_array(p_arr);
    print_Array_int(arr);
}

void min_index_Array_demo() {
    Array arr = rand_Array_int(10, 20);
    Array *p_arr = &arr;
    print_Array_int(arr);

    int min = min_index_Array(p_arr, int_Comparator);
    int *data = arr.data;
    printf("minimum index and value are: %d and %d\n", min, data[min]);
}

void selection_sort_Array_demo() {
    Array arr = rand_Array_int(10, 20);
    Array *p_arr = &arr;
    print_Array_int(arr);

    selection_sort_Array(p_arr, int_Comparator);
    print_Array_int(arr);
}


int int_comparator(void *const a, void *const b, void *const data) {
    return *(int *) a - *(int *) b;
}


void merge_sort_demo() {
    Array arr = new_Array(sizeof(int));
    Array *p_arr = &arr;
    for (int i = 0; i < 10; ++i) {
        append_array(p_arr, &i);
    }
    shuffle_array(p_arr);
    print_Array_attributes(arr);
//    print_int_array(arr.data, arr.length);

    mergesort_array(p_arr, int_comparator);
    print_Array_attributes(arr);
//    print_int_array(arr.data, arr.length);
}

int main() {
//    append_and_pop_demo();

//    int_Array_demo();
//    copy_Array_demo();
//    swap_Array_item_demo();
//    compare_Array_items_demo();
//    shuffle_demo();

//    min_index_Array_demo();
    selection_sort_Array_demo();


//    append_pop_long_array_demo();
//    shuffle_demo();
//    merge_sort_demo();
//
//    int arr[] = {1, 2};
//    memswap(arr, arr + 1, 4);
//    print_int_array(arr, 2);


}