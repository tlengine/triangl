#pragma once

#include "Core/Base.h"

namespace Triangl
{
	class GraphicsContext
	{
	public:
		virtual ~GraphicsContext() = default;

		virtual void Init() = 0;
		virtual void SwapBuffers() = 0;

		static Scope<GraphicsContext> New(void* window);
	};
}
