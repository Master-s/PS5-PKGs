#pragma once

#include <sampleutil.h>

sce::SampleUtil::System::UserId			getPadCtrlUserId();
void									setPadCtrlUserId( sce::SampleUtil::System::UserId userId );
sce::SampleUtil::System::UserIdManager*	getUserIdManager();
int										enqueueJobItem(sce::SampleUtil::Thread::JobItem *job);

#ifndef PRINTF
#if _DEBUG
#define	PRINTF	printf
#else	
#define PRINTF(format, ...)
#endif
#endif // ifndef PRINTF

// typedef for function called when button pushed
typedef void(*ButtonFunc)(uint64_t arg);

// structure for command button
struct ButtonData
{
	const char	*pLabel;
	ButtonFunc	func;
};
