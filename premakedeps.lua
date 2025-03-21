outdir = {}
outdir["cmp"] = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
outdir["bin"] = "%{wks.location}/bin/%{outdir.cmp}"
outdir["obj"] = "%{wks.location}/bin-obj/%{outdir.cmp}"

vendordir = "%{wks.location}/vendor"

prjdir = {}
prjdir["triangl"] = "%{wks.location}/engine"
prjdir["sandbox"] = "%{wks.location}/sandbox"
prjdir["glfw"] = "%{vendordir}/glfw"
prjdir["glad"] = "%{vendordir}/glad"

incdir = {}
incdir["triangl"] = "%{prjdir.triangl}/src"
incdir["sandbox"] = "%{prjdir.sandbox}/src"
incdir["fmt"] = "%{vendordir}/fmt/include"
incdir["spdlog"] = "%{vendordir}/spdlog/include"
incdir["glm"] = "%{vendordir}/glm"
incdir["glfw"] = "%{prjdir.glfw}/include"
incdir["glad"] = "%{prjdir.glad}/include"
