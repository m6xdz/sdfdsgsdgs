#pragma once
#include <Windows.h>
#include <stdint.h>
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>

#include "portable.hpp"
#include "utils.hpp"
#include "nt.hpp"
#include "vul_driver.hpp"

namespace lksmapp
{
	uint64_t MapDriver(HANDLE vul_driver_device_handle, std::vector<uint8_t> raw_image);
	void RelocateImageByDelta(portable::vec_relocs relocs, const uint64_t delta);
	bool ResolveImports(HANDLE vul_driver_device_handle, portable::vec_imports imports);
}