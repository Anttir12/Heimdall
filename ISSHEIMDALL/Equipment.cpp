#include "Equipment.h"

bool Equipment::ownsSingle()
{
	if (single != NULL){
		return true;
	}
	return false;
}

bool Equipment::ownsBurst()
{
	if (burst != NULL)
		return true;
	return false;
}
bool Equipment::ownsAutoMode()
{
	if (autoMode != NULL)
		return true;
	return false;
}

bool Equipment::ownsType(int type)
{
	if (single != NULL && single->getType() == type)
		return true;
	if (burst != NULL && burst->getType() == type)
		return true;
	if (autoMode != NULL && autoMode->getType() == type)
		return true;
	return false;
}
void Equipment::set(FiringMode* mode)
{
	int type = mode->getType();
	if (type == Mode::SEMI)
		single = (FiringModeSemi*)mode;
	else if (type == Mode::BURST)
		burst = (FiringModeBurst*)mode;
	else if (type == Mode::AUTO)
		autoMode = (FiringModeAuto*)mode;
}