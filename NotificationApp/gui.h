#pragma once
#include<d3d9.h>

namespace gui
{
	//variables for window width and height
	const int Width = 1024;
	const int HEIGHT = 720;

	bool exit = true; // when true we are not going to exit else close everything

	// windows api window variables
	HWND window = nullptr;
	WNDCLASSEXA windoClass = {};

	//points for window movement
	POINTS position = {};

	//direct x state variables
	PDIRECT3D9 d3d = nullptr;
	LPDIRECT3D9 device = nullptr;
	D3DPRESENT_PARAMETERS presentParameters = {};

	// handle window creation and destruction
	void CreateHWindow(const char* windowName, const char* className);
	void DestroyHWindow();

	void BeginRender();
	void EndRender();
	void Render();
}