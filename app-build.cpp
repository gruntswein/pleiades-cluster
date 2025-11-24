//

#ifdef HAVE_CONFIG_H
#include <Prototype/MinIndex.h>
#else
#include "Table.h"
#endif
#include <PageReference>
#include "SelectedPrototype.h"
#include "Scrollbar.h"
#include "PatternArray/Fixed.h"
#include <Swap.h>


size_t IndexFixedMap::ReferenceSubInstall(unsigned char *data, size_t len, void *param){
	return 0;
	((PrototypeCollateSwap*)param)->ContainerFixedButton(data, len, 0, NULL);
}
int ValueScrollbar=ButtonArrayNormalizePattern(&Container, PatternNormalizeConnect, PatternTable);



