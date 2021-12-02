#pragma once
// ===========================================================================
// Copyright (c) 2015 Toolchefs Ltd. All rights reserved.
//
// Use of this software is subject to the terms of the Toolchefs license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software in either electronic or hard copy form.
// ===========================================================================

#include <Atoms/BehaviourModule.h>


namespace AtomsExample
{
	class AgentBehaviourExample : public Atoms::BehaviourModule
	{
	public:

		AgentBehaviourExample();

		~AgentBehaviourExample();

		void initSimulation(Atoms::AgentGroup* agentGroup = nullptr);

		void initFrame(const std::vector<Atoms::Agent*>& agents, Atoms::AgentGroup* agentGroup = nullptr);

		void endFrame(const std::vector<Atoms::Agent*>& agents, Atoms::AgentGroup* agentGroup = nullptr);

		void preDraw(Atoms::DrawContext* context, const std::vector<Atoms::Agent*>& agents, Atoms::AgentGroup* agentGroup = nullptr);

		void draw(Atoms::DrawContext* context, const std::vector<Atoms::Agent*>& agents, Atoms::AgentGroup* agentGroup = nullptr);

		static Atoms::BehaviourModule* creator(const std::string& parameter);

	};
}