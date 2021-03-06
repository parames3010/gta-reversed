#include "StdInc.h"

CEvent* CEventGroup::Add(CEvent* event, bool bValid)
{
    return plugin::CallMethodAndReturn<CEvent*, 0x4AB420, CEventGroup*, CEvent*, bool>(this, event, bValid);
}

bool CEventGroup::HasScriptCommandOfTaskType(eTaskType taskType)
{
    return plugin::CallMethodAndReturn<bool, 0x4AB840, CEventGroup*, int>(this, taskType);
}

void CEventGroup::Flush(bool bAvoidFlushingTaskComplexBeInGroup)
{
    plugin::CallMethod<0x4AB370, CEventGroup*, bool>(this, bAvoidFlushingTaskComplexBeInGroup);
}