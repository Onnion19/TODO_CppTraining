workspace "TodoCppTraining"
	architecture "x64"
	targetdir "build"

	configurations {
		"Debug",
		"Release",
		"Distribution"
	}



project "Exercises"
	location "Exercises"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "On"
	
	targetdir ("bin/")
	objdir ("bin-int/")


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
		"Exercises/Utils/Headers",
		"Exercises/Header"
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