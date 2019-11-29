#include <fstream>
#include <string>

#include "../GL/glew.h"
#include "../GL/freeglut.h"

namespace pge {
	class ShaderLoader {
	public:
		ShaderLoader(int programId);
		void compileFragShader(string source);
		void compileVertexShader(string source);

	private:
		int _programId;
	};
}