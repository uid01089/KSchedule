#ifndef SCHEDULE_ENTRY_h
#define SCHEDULE_ENTRY_h

typedef void (*PctPtr)( void );

class ScheduleEntry {
    
    public:
    ScheduleEntry(unsigned long startTime, unsigned long duration, PctPtr fct);
    ~ScheduleEntry();
    unsigned long getStartTime();
    unsigned long getDuration();
    PctPtr getFct();
    
    private:
    unsigned long startTime;
    unsigned long duration;
    PctPtr fct;
} ;

#endif
