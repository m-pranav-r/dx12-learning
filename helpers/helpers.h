#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

inline void ThrowIfFailed(HRESULT hr) {
	if (FAILED(hr)) {
		printf("%d\n", GetLastError());
		throw std::exception();
	}
}