#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CATEGORIES 5
#define NUM_DEVICES 3
#define NUM_USERS 2
#define MAX_STRING_LENGTH 100

struct content_metadata {
    char title[MAX_STRING_LENGTH];
    float rating;
    int runtime; // in minutes
    char encoding_format[MAX_STRING_LENGTH];
};

struct user_profile {
    int *engagement_scores; 
    int *device_preferences; 
};

struct streaming_platform {
    double **engagement_matrix; 
    struct user_profile *users;
    struct content_metadata ***content_metadata_matrix; 
};

void initializeEngagementMatrix(double ***matrix, int num_users, int num_categories) {
    *matrix = (double **)malloc(num_users * sizeof(double *));
    for (int i = 0; i < num_users; i++) {
        (*matrix)[i] = (double *)malloc(num_categories * sizeof(double));
        for (int j = 0; j < num_categories; j++) {
            (*matrix)[i][j] = 0.0; 
        }
    }
}

void initializeDeviceMatrix(int ***matrix, int num_users, int num_devices) {
    *matrix = (int **)malloc(num_users * sizeof(int *));
    for (int i = 0; i < num_users; i++) {
        (*matrix)[i] = (int *)malloc(num_devices * sizeof(int));
        for (int j = 0; j < num_devices; j++) {
            (*matrix)[i][j] = 0; 
        }
    }
}

void initializeContentMetadata(struct content_metadata ****matrix, int num_categories, int num_content) {
    *matrix = (struct content_metadata ***)malloc(num_categories * sizeof(struct content_metadata **));
    for (int i = 0; i < num_categories; i++) {
        (*matrix)[i] = (struct content_metadata **)malloc(num_content * sizeof(struct content_metadata *));
        for (int j = 0; j < num_content; j++) {
            (*matrix)[i][j] = (struct content_metadata *)malloc(sizeof(struct content_metadata));
            strcpy((*matrix)[i][j]->title, "Untitled");
            (*matrix)[i][j]->rating = 0.0;
            (*matrix)[i][j]->runtime = 0;
            strcpy((*matrix)[i][j]->encoding_format, "None");
        }
    }
}

void updateEngagementScore(double **engagement_matrix, int user_index, int category_index, double score) {
    engagement_matrix[user_index][category_index] = score;
}

void updateDevicePreference(int **device_matrix, int user_index, int device_index, int preference) {
    device_matrix[user_index][device_index] = preference;
}

void updateContentMetadata(struct content_metadata ***content_metadata_matrix, int category_index, int content_index, 
                           char *title, float rating, int runtime, char *encoding_format) {
    strcpy(content_metadata_matrix[category_index][content_index]->title, title);
    content_metadata_matrix[category_index][content_index]->rating = rating;
    content_metadata_matrix[category_index][content_index]->runtime = runtime;
    strcpy(content_metadata_matrix[category_index][content_index]->encoding_format, encoding_format);
}

void displayEngagementScores(double **engagement_matrix, int num_users, int num_categories) {
    for (int i = 0; i < num_users; i++) {
        printf("User %d Engagement Scores:\n", i + 1);
        for (int j = 0; j < num_categories; j++) {
            printf("  Category %d: %.2f\n", j + 1, engagement_matrix[i][j]);
        }
    }
}

void displayDevicePreferences(int **device_matrix, int num_users, int num_devices) {
    for (int i = 0; i < num_users; i++) {
        printf("User %d Device Preferences:\n", i + 1);
        for (int j = 0; j < num_devices; j++) {
            printf("  Device %d: %d\n", j + 1, device_matrix[i][j]);
        }
    }
}

void displayContentMetadata(struct content_metadata ***content_metadata_matrix, int num_categories, int num_content) {
    for (int i = 0; i < num_categories; i++) {
        printf("Category %d Content Metadata:\n", i + 1);
        for (int j = 0; j < num_content; j++) {
            printf("  Content %d: %s, Rating: %.1f, Runtime: %d mins, Encoding: %s\n", 
                   j + 1, content_metadata_matrix[i][j]->title, content_metadata_matrix[i][j]->rating, 
                   content_metadata_matrix[i][j]->runtime, content_metadata_matrix[i][j]->encoding_format);
        }
    }
}

void deallocateMemory(struct streaming_platform *platform, int num_users, int num_categories, int num_devices, int num_content) {
    for (int i = 0; i < num_users; i++) {
        free(platform->users[i].engagement_scores);
        free(platform->users[i].device_preferences);
    }
    free(platform->users);

    for (int i = 0; i < num_users; i++) {
        free(platform->engagement_matrix[i]);
    }
    free(platform->engagement_matrix);

    for (int i = 0; i < num_categories; i++) {
        for (int j = 0; j < num_content; j++) {
            free(platform->content_metadata_matrix[i][j]);
        }
        free(platform->content_metadata_matrix[i]);
    }
    free(platform->content_metadata_matrix);
}

int main() {
    struct streaming_platform platform;

    initializeEngagementMatrix(&platform.engagement_matrix, NUM_USERS, NUM_CATEGORIES);
    initializeDeviceMatrix(&platform.users, NUM_USERS, NUM_DEVICES);
    initializeContentMetadata(&platform.content_metadata_matrix, NUM_CATEGORIES, 3); 

    updateEngagementScore(platform.engagement_matrix, 0, 0, 8.5);  
    updateEngagementScore(platform.engagement_matrix, 1, 2, 9.2);  

    updateDevicePreference(platform.users, 0, 0, 1080); 
    updateDevicePreference(platform.users, 1, 2, 720);  
    updateContentMetadata(platform.content_metadata_matrix, 0, 0, "Action Movie 1", 8.1, 120, "H.264");
    updateContentMetadata(platform.content_metadata_matrix, 2, 1, "Comedy Show 1", 7.5, 50, "VP9");

    displayEngagementScores(platform.engagement_matrix, NUM_USERS, NUM_CATEGORIES);
    displayDevicePreferences(platform.users, NUM_USERS, NUM_DEVICES);
    displayContentMetadata(platform.content_metadata_matrix, NUM_CATEGORIES, 3);

    deallocateMemory(&platform, NUM_USERS, NUM_CATEGORIES, NUM_DEVICES, 3);

    return 0;
}
