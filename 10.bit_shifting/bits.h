#ifndef bits_h
#define bits_h

typedef struct StagesCompletedInt{
    int level1Completed;
    int level2Completed;
    int level3Completed;
    int level4Completed;
    int level5Completed;
    int level6Completed;
    int level7Completed;
    int level8Completed;
}StagesCompletedInt_t;

typedef struct StagesCompletedChar{
    char level1Completed;
    char level2Completed;
    char level3Completed;
    char level4Completed;
    char level5Completed;
    char level6Completed;
    char level7Completed;
    char level8Completed;
}StagesCompletedChar_t;

typedef struct StagesCompletedChar1{
    char level1Completed:1;
    char level2Completed:1;
    char level3Completed:1;
    char level4Completed:1;
    char level5Completed:1;
    char level6Completed:1;
    char level7Completed:1;
    char level8Completed:1;
}StagesCompletedChar1_t;

typedef struct StagesCompletedChar0{
    char :0;
    char :0;
    char :0;
    char :0;
    char :0;
    char :0;
    char :0;
    char :0;
}StagesCompletedChar0_t;


#endif