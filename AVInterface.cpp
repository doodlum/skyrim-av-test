#include "AVInterface.h"
#include "AVManager.h"

bool AVInterface::Register()
{
	auto manager = AVManager::GetSingleton();
	if (manager->RegisterActorValue(avName, this)) {
		logger::info(FMT_STRING("Successfully registered AV: "), avName);
		return true;
	}
	logger::error(FMT_STRING("Failed to register AV: "), avName);
	return false;
}
