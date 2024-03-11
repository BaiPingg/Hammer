project "HMCore"
    kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	files { "**.h","**.cpp" }

    includedirs {
		"include",
		IncludeDir["GLFW"],
		IncludeDir["glad"],
		IncludeDir["imgui"]
	}

    targetdir (outputdir .. "%{cfg.buildcfg}/%{prj.name}")
	objdir (objoutdir .. "%{cfg.buildcfg}/%{prj.name}")

    filter { "configurations:Debug" }
		defines { "DEBUG" }
		symbols "On"

	filter { "configurations:Release" }
		defines { "NDEBUG" }
		optimize "On"