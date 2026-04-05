void main(MultiBuild::Workspace& workspace) {	
	auto project = workspace.create_project(".");
	auto properties = project.properties();

	project.name("ImPlot3D");
	properties.binary_object_kind(MultiBuild::BinaryObjectKind::eStaticLib);
	project.license("./LICENSE");
	properties.tags({ "use_header_only_mle", "utf8" });

	project.include_own_required_includes(true);
	project.add_required_project_include({
		"."
	});

	properties.dependencies("ImGui");
	properties.project_includes("MultiEngine.ImGui");
	properties.files({
		"./*.h",
		"./*.cpp"
	});
}