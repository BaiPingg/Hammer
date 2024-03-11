workspace "Hammer"
    configurations { "Debug", "Release" }
	platforms { "x64" }
	startproject "HMEditor"

outputdir = "%{wks.location}/../../bin/"
objoutdir = "%{wks.location}/../../bin_int/"
dependdir = "%{wks.location}/../../Dependencies/"

VULKAN_SDK = os.getenv("VULKAN_SDK")

IncludeDir = {}
IncludeDir["GLFW"] = dependdir.."glfw/include"
IncludeDir["glad"] = dependdir.."glad/include"
IncludeDir["imgui"] = dependdir.."imgui"

LibraryDir = {}
LibraryDir["VulkanSDK"] = "%{VULKAN_SDK}/Lib"
Library = {}
Library["GLFW"] = dependdir.."glfw/lib"

Library = {}
Library["GLFW"] = dependdir.."glfw/lib/glfw3"

include "HMCore"
include "HMEditor"
include "HMGame"
