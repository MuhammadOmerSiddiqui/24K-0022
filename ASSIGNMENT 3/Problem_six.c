#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

struct weather_forecast {
    float temperature;
    float rainfall;
    float wind_speed;
};

struct crop {
    char crop_type[MAX_STRING_LENGTH];
    int growth_stage;
    float expected_yield;
    struct weather_forecast *forecast;
};

struct equipment {
    char name[MAX_STRING_LENGTH];
    char operational_status[MAX_STRING_LENGTH];
    float fuel_level;
    char activity_schedule[MAX_STRING_LENGTH];
};

struct sensor {
    float soil_nutrients;
    float ph_level;
    int pest_activity;
};

struct field {
    float latitude;
    float longitude;
    float soil_health;
    float moisture_level;
    struct crop *crops;
    struct equipment *equipment;
    struct sensor *sensors;
    int num_crops;
    int num_equipment;
    int num_sensors;
};

struct regional_hub {
    char hub_name[MAX_STRING_LENGTH];
    struct field *fields;
    int num_fields;
};

struct central_analytics {
    struct regional_hub *hubs;
    int num_hubs;
};

void allocateField(struct field *f, int num_crops, int num_equipment, int num_sensors) {
    f->num_crops = num_crops;
    f->num_equipment = num_equipment;
    f->num_sensors = num_sensors;
    f->crops = (struct crop *)malloc(num_crops * sizeof(struct crop));
    f->equipment = (struct equipment *)malloc(num_equipment * sizeof(struct equipment));
    f->sensors = (struct sensor *)malloc(num_sensors * sizeof(struct sensor));
}

void deallocateField(struct field *f) {
    free(f->crops);
    free(f->equipment);
    free(f->sensors);
}

void addCrop(struct field *f, int crop_index, char *crop_type, int growth_stage, float expected_yield, struct weather_forecast *forecast) {
    strcpy(f->crops[crop_index].crop_type, crop_type);
    f->crops[crop_index].growth_stage = growth_stage;
    f->crops[crop_index].expected_yield = expected_yield;
    f->crops[crop_index].forecast = forecast;
}

void addEquipment(struct field *f, int equipment_index, char *name, char *status, float fuel_level, char *schedule) {
    strcpy(f->equipment[equipment_index].name, name);
    strcpy(f->equipment[equipment_index].operational_status, status);
    f->equipment[equipment_index].fuel_level = fuel_level;
    strcpy(f->equipment[equipment_index].activity_schedule, schedule);
}

void addSensor(struct field *f, int sensor_index, float soil_nutrients, float ph_level, int pest_activity) {
    f->sensors[sensor_index].soil_nutrients = soil_nutrients;
    f->sensors[sensor_index].ph_level = ph_level;
    f->sensors[sensor_index].pest_activity = pest_activity;
}

void allocateRegionalHub(struct regional_hub *hub, int num_fields) {
    hub->fields = (struct field *)malloc(num_fields * sizeof(struct field));
    hub->num_fields = num_fields;
}

void deallocateRegionalHub(struct regional_hub *hub) {
    for (int i = 0; i < hub->num_fields; i++) {
        deallocateField(&hub->fields[i]);
    }
    free(hub->fields);
}

void allocateCentralAnalytics(struct central_analytics *analytics, int num_hubs) {
    analytics->hubs = (struct regional_hub *)malloc(num_hubs * sizeof(struct regional_hub));
    analytics->num_hubs = num_hubs;
}

void deallocateCentralAnalytics(struct central_analytics *analytics) {
    for (int i = 0; i < analytics->num_hubs; i++) {
        deallocateRegionalHub(&analytics->hubs[i]);
    }
    free(analytics->hubs);
}

int main() {
    struct central_analytics analytics;
    allocateCentralAnalytics(&analytics, 1);

    struct regional_hub *hub = &analytics.hubs[0];
    allocateRegionalHub(hub, 1);

    struct field *field = &hub->fields[0];
    allocateField(field, 1, 1, 1);

    struct weather_forecast forecast = {30.5, 120.0, 15.0};
    addCrop(field, 0, "Wheat", 2, 500.0, &forecast);
    addEquipment(field, 0, "Tractor", "Operational", 80.0, "8:00 AM - 12:00 PM");
    addSensor(field, 0, 50.0, 7.5, 3);

    printf("Field Crop: %s\n", field->crops[0].crop_type);
    printf("Expected Yield: %.2f\n", field->crops[0].expected_yield);
    printf("Weather Forecast: Temperature = %.2f, Rainfall = %.2f, Wind Speed = %.2f\n",
           field->crops[0].forecast->temperature, field->crops[0].forecast->rainfall, field->crops[0].forecast->wind_speed);

    deallocateCentralAnalytics(&analytics);

    return 0;
}
