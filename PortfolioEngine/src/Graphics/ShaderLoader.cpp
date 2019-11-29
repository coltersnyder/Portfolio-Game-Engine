#include "../../include/Graphics/ShaderLoader.h"

using namespace pge;

ShaderLoader::ShaderLoader(int programId) {
	_programId = programId;
}

void ShaderLoader::compileFragShader(string source) {
	std::string code;
	std::fstream file;
	try {
		file.open(source);
		while (!file.eof) {
			std::getline(file, code);
		}
	}
	catch (exception e) {
		std::cerr << "Error: " << endl;
	}
	int handle = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(handle, code);
	glCompileShader(handle);
	glAttachShader(_programId, handle);
	glLinkProgram(_programId);
}

void ShaderLoader::compileVertexShader(string source) {
	std::string code;
	std::fstream file;
	try {
		file.open(source);
		while (!file.eof) {
			std::getline(file, code);
		}
	}
	catch (exception e) {
		std::cerr << "Error: " << endl;
	}
	int handle = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(handle, code);
	glCompileShader(handle);
	glAttachShader(_programId, handle);
	glLinkProgram(_programId);
}