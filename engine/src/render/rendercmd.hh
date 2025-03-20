#ifndef TRIANGL_RENDERCMD_HH
#define TRIANGL_RENDERCMD_HH 1

#include "render/rendererapi.hh"

namespace triangl {

	class rendercmd
	{
	public:
		static void init()
		{
			s_api = renderer_api::create();
			s_api->init();
		}

		static void clear()
		{
			s_api->clear();
		}

		static void set_viewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height)
		{
			s_api->set_viewport(x, y, width, height);
		}

		static void set_clear_color(const glm::vec4& color)
		{
			s_api->set_clear_color(color);
		}

		static void set_clear_color(float r, float g, float b, float a)
		{
			s_api->set_clear_color(r, g, b, a);
		}

		static void set_line_width(float width)
		{
			s_api->set_line_width(width);
		}
	private:
		static std::unique_ptr<renderer_api> s_api;
	};

}

#endif
