#include "AgentBehaviourExample.h"
#include <Atoms/Agent.h>
#include <Atoms/AgentGroup.h>
#include <Atoms/DrawContext.h>
#include <AtomsUtils/Logger.h>
#include <Atoms/GlobalNames.h>


namespace AtomsExample
{

	AgentBehaviourExample::AgentBehaviourExample() : Atoms::BehaviourModule()
	{
		
	}

	AgentBehaviourExample::~AgentBehaviourExample()
	{

	}

	Atoms::BehaviourModule* AgentBehaviourExample::creator(const std::string& parameter)
	{
		return new AgentBehaviourExample();
	}

	void AgentBehaviourExample::initSimulation(Atoms::AgentGroup* agentGroup)
	{
		
	}

	void AgentBehaviourExample::initFrame(const std::vector<Atoms::Agent*>& agents, Atoms::AgentGroup* agentGroup)
	{


	}

	void AgentBehaviourExample::endFrame(const std::vector<Atoms::Agent*>& agents, Atoms::AgentGroup* agentGroup)
	{

	}

	void AgentBehaviourExample::preDraw(Atoms::DrawContext * context, const std::vector<Atoms::Agent*>&agents, Atoms::AgentGroup * agentGroup)
	{

	}

	void AgentBehaviourExample::draw(Atoms::DrawContext * context, const std::vector<Atoms::Agent*>&agents, Atoms::AgentGroup * agentGroup)
	{

	}

}
