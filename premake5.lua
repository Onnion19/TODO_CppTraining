workspace "TodoCppTraining"
	architecture "x64"
	targetdir "build"

	configurations {
		"Debug",
		"Release",
		"Distribution"
	}


outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
project "CppUtils"

	location "Utils"
	kind "Staticlib"
	language "C++"
	cppdialect "C++17"
	staticruntime "On"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")



	files
	{
		"Utils/*.cpp",
		"Utils/Source/**.cpp",
		"Utils/Source/**.c",
		"Utils/Headers/**.h",
		"Utils/*.h",
		"Utils/Headers/**.hpp",
		"Utils/ExternalInclude/**.h"
	}

	includedirs 
	{
		"Utils/Headers",
		"Utils"
	}


	filter "system:windows"
		systemversion "latest"

		defines 
		{
		}

	filter "configurations:Debug"
		defines
		{
			"DEBUG"
		}
		symbols "On"

	filter "configurations:Release"
		defines
		{
			"RELEASE"
		}
		optimize "On"


	filter "configurations:Distribution"
		defines
		{
			"DISTRIBUTION"
		}
		optimize "Off"
	

	filter {"system:windows","configurations:Release"}
		buildoptions "/MT"


project "Exercises"
	location "Exercises"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "On"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")

	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	links
	{
		"CppUtils"
	}


	files
	{
		"Exercises/Source/**.cpp",
		"Exercises/Source/**.c",
		"Exercises/Headers/**.h",
		"Exercises/Headers/**.hpp",
		"Exercises/**"

	}

	includedirs 
	{
		"Utils/Headers"
	}

	filter "system:windows"
		systemversion "latest"

		defines 
		{
			"WINDOWS"
		}

	filter "configurations:Debug"
		defines
		{
			"NDEBUG"
		}
		symbols "On"

	filter "configurations:Release"
		defines
		{
			"RELEASE"
		}
		optimize "On"


	filter "configurations:Distribution"
		defines
		{
			"DISTRIBUTION"
		}
		optimize "Off"
	

	filter {"system:windows","configurations:Release"}
		buildoptions "/MT"