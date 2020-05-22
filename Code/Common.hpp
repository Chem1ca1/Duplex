#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT _WIN32_WINNT_WIN7
#include <winsdkver.h>
#include <sdkddkver.h>
#include <windows.h>
#include <winternl.h>
#include <d3d11.h>

#include <cassert>
#include <cinttypes>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <deque>
#include <filesystem>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <memory>
#include <mutex>
#include <optional>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <type_traits>
#include <unordered_map>
#include <vector>

#define duplex_WIDE_IMPL(str) L ## str
#define duplex_WIDE(str) duplex_WIDE_IMPL(str)

#define duplex_STRINGIZE_IMPL(x) #x
#define duplex_STRINGIZE(x) duplex_STRINGIZE_IMPL(x)

#define duplex_NAME "Duplex"

namespace Big
{
	using namespace std::chrono_literals;
	namespace fs = std::filesystem;

	inline HMODULE g_Module{};
	inline std::atomic_bool g_Running = true;

	inline std::uint32_t g_SelectedPlayer{};

	inline bool g_LogScriptEvents = false;
}

#include "Settings.hpp"
#include "Logger.hpp"
#include "Util.hpp"
#include "Memory.hpp"
#include "Game.hpp"
#include "ScriptGlobal.hpp"
#include "Natives.hpp"
