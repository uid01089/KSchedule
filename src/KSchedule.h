#ifndef KSCHEDULE_h
#define KSCHEDULE_h

#include <list>
#include "ScheduleEntry.h"






class KSchedule
{
    private:
        std::list<ScheduleEntry*> scheduleList;
    
    public:
    KSchedule();
    ~KSchedule();
    void setup();
    void loop();
    void schedule(PctPtr fct, unsigned long timePeriode);



};




#endif