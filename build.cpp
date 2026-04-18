//

#include <WindowName.h>
#include <Fixed.h>
#include "StackTable.h"
#ifdef HAVE_CONFIG_H
#include <ContainerSet/IdMap.h>
#else
#include "ValuePrototype.h"
#endif
#include <ConnectWindow>
#include "Filter.h"


void WindowBlock::IdButtonMatrixCounter::Start(){
	if(!StackSelected)
		return;
	SwapConnect=true;
	thread=new Thread(std::bind(&StringMin::MatrixMinTable::IndexContainer, this));
	thread->ValueLinkScrollbarString("Table_ReferenceNormalize");
	thread->StdWindowScrollbarCountery();
	thread->NewContainer();
	}



