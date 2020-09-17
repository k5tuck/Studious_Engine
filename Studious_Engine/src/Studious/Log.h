#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Studious
{
	class STUDIOUS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
			
	};
}

// Core Logger
#define STUDIOUS_CORE_INFO(...)    ::Studious::Log::GetCoreLogger()->info(__VA__ARGS__)
#define STUDIOUS_CORE_WARN(...)    ::Studious::Log::GetCoreLogger()->warn(__VA__ARGS__)
#define STUDIOUS_CORE_TRACE(...)   ::Studious::Log::GetCoreLogger()->trace(__VA__ARGS__)
#define STUDIOUS_CORE_ERROR(...)   ::Studious::Log::GetCoreLogger()->error(__VA__ARGS__)
#define STUDIOUS_CORE_FATAL(...)   ::Studious::Log::GetCoreLogger()->fatal(__VA__ARGS__)

// Client Logger
#define STUDIOUS_INFO(...)    ::Studious::Log::GetClientLogger()->info(__VA__ARGS__)
#define STUDIOUS_WARN(...)    ::Studious::Log::GetClientLogger()->warn(__VA__ARGS__)
#define STUDIOUS_TRACE(...)   ::Studious::Log::GetClientLogger()->trace(__VA__ARGS__)
#define STUDIOUS_ERROR(...)   ::Studious::Log::GetClientLogger()->error(__VA__ARGS__)
#define STUDIOUS_FATAL(...)   ::Studious::Log::GetClientLogger()->fatal(__VA__ARGS__)

