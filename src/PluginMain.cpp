#include <Globals.h>
#include <AtomsUtils/Logger.h>
#include "AgentBehaviourExample.h"
#include <Atoms/BehaviourModules.h>

extern "C"
{

	ATOMSPLUGINEXAMPLE_EXPORT bool initializePlugin()
	{
		return true;
	}

	ATOMSPLUGINEXAMPLE_EXPORT bool uninitializePlugin()
	{
		return true;
	}

	ATOMSPLUGINEXAMPLE_EXPORT bool initializeScene()
	{
		AtomsUtils::Logger::info() << "Loading atoms example plugin";
		
		Atoms::BehaviourModules& moduleManager = Atoms::BehaviourModules::instance();
		moduleManager.registerBehaviourModule("atomsExampleBehaviour", &AtomsExample::AgentBehaviourExample::creator, Atoms::BehaviourModules::kNative, false, "MyCategory");
		
		return true;
	}

	ATOMSPLUGINEXAMPLE_EXPORT bool uninitializeScene()
	{
		AtomsUtils::Logger::info() << "Unloading atoms example plugin";
		
		Atoms::BehaviourModules& moduleManager = Atoms::BehaviourModules::instance();
		moduleManager.deregisterBehaviourModule("atomsExampleBehaviour");
		
		return true;
	}

}