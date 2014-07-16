#pragma once

#include "EDXPrerequisites.h"

#include "../ForwardDecl.h"
#include "Memory/RefPtr.h"

namespace EDX
{
	namespace RayTracer
	{
		class Renderer
		{
		protected:
			RefPtr<Camera>	mpCamera;
			RefPtr<Sampler>	mpSampler;
			RefPtr<Film>	mpFilm;

			RenderJobDesc mJobDesc;

		public:
			Renderer()
			{
			}
			
			void Initialize(const RenderJobDesc& desc);

			void RenderFrame();
			void RenderImage();
		};
	}
}