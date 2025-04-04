#pragma once

#include "Renderer/Buffer.h"

namespace Triangl
{
	class OpenGLVertexBuffer : public VertexBuffer
	{
	public:
		OpenGLVertexBuffer(size_t size);
		OpenGLVertexBuffer(const float* vertices, size_t size);
		virtual ~OpenGLVertexBuffer() override;

		virtual void Bind() const override;
		virtual void Unbind() const override;

		virtual void SetData(const void* data, uint32_t size) override;
		virtual void SetLayout(const BufferLayout& layout) override;

		virtual const BufferLayout& GetLayout() const override { return m_Layout; }
	private:
		uint32_t m_RendererID = 0;
		BufferLayout m_Layout;
	};

	class OpenGLIndexBuffer : public IndexBuffer
	{
	public:
		OpenGLIndexBuffer(const uint32_t* indices, uint32_t count);
		virtual ~OpenGLIndexBuffer() override;

		virtual void Bind() const override;
		virtual void Unbind() const override;

		virtual uint32_t GetCount() const override { return m_Count; }
	private:
		uint32_t m_RendererID = 0;
		uint32_t m_Count = 0;
	};
}
