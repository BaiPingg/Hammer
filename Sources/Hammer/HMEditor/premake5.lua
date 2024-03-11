project "HMEditor"
	language "C++"
	cppdialect "C++17"
	files { "**.h","**.cpp","**.c" }
	 ignoredefaultlibraries { "MSVCRT" }

    includedirs {
		"include",
		IncludeDir["GLFW"],
		IncludeDir["glad"],
		IncludeDir["imgui"],
		"%{wks.location}/HMCore/include",
	}
	libdirs{
		dependdir .. "glfw/lib",
		LibraryDir["GLFW"]
	}
	links
	{
		"HMCore",
		"glfw3"
	}
    targetdir (outputdir .. "%{cfg.buildcfg}/%{prj.name}")
	objdir (objoutdir .. "%{cfg.buildcfg}/%{prj.name}")

    filter { "configurations:Debug" }
		defines { "DEBUG" }
		symbols "On"
		kind "ConsoleApp"

	filter { "configurations:Release" }
		defines { "NDEBUG" }
		optimize "On"
		kind "WindowedApp"